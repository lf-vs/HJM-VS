
// 1ʵ��2View.cpp : CMy1ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "1ʵ��2.h"
#endif

#include "1ʵ��2Doc.h"
#include "1ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy1ʵ��2View

IMPLEMENT_DYNCREATE(CMy1ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy1ʵ��2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMy1ʵ��2View ����/����

CMy1ʵ��2View::CMy1ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy1ʵ��2View::~CMy1ʵ��2View()
{
}

BOOL CMy1ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy1ʵ��2View ����

void CMy1ʵ��2View::OnDraw(CDC* /*pDC*/)
{
	CMy1ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy1ʵ��2View ���

#ifdef _DEBUG
void CMy1ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy1ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy1ʵ��2Doc* CMy1ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy1ʵ��2Doc)));
	return (CMy1ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy1ʵ��2View ��Ϣ�������


void CMy1ʵ��2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy1ʵ��2Doc* pDoc = GetDocument();
	pDoc->count = pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void CMy1ʵ��2View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy1ʵ��2Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("�󽡵���� %d ��"), pDoc->count);
	CClientDC dc(this);
	dc.TextOutW(point.x, point.y, s);
	CView::OnRButtonDown(nFlags, point);
}
