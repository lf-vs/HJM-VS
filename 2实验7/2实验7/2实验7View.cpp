
// 2ʵ��7View.cpp : CMy2ʵ��7View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2ʵ��7.h"
#endif

#include "2ʵ��7Doc.h"
#include "2ʵ��7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy2ʵ��7View

IMPLEMENT_DYNCREATE(CMy2ʵ��7View, CView)

BEGIN_MESSAGE_MAP(CMy2ʵ��7View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMy2ʵ��7View ����/����

CMy2ʵ��7View::CMy2ʵ��7View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy2ʵ��7View::~CMy2ʵ��7View()
{
}

BOOL CMy2ʵ��7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy2ʵ��7View ����

void CMy2ʵ��7View::OnDraw(CDC* /*pDC*/)
{
	CMy2ʵ��7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy2ʵ��7View ���

#ifdef _DEBUG
void CMy2ʵ��7View::AssertValid() const
{
	CView::AssertValid();
}

void CMy2ʵ��7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy2ʵ��7Doc* CMy2ʵ��7View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy2ʵ��7Doc)));
	return (CMy2ʵ��7Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy2ʵ��7View ��Ϣ�������


void CMy2ʵ��7View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy2ʵ��7Doc* pDoc = GetDocument();
	pDoc->count=pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void CMy2ʵ��7View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy2ʵ��7Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("�󽨵���� %d ��"), pDoc->count);
	CClientDC dc(this);
	dc.TextOutW(0, 0, s);
	CView::OnRButtonDown(nFlags, point);
}
