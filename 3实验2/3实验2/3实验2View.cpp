
// 3ʵ��2View.cpp : CMy3ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3ʵ��2.h"
#endif

#include "3ʵ��2Doc.h"
#include "3ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3ʵ��2View

IMPLEMENT_DYNCREATE(CMy3ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy3ʵ��2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy3ʵ��2View ����/����

CMy3ʵ��2View::CMy3ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy3ʵ��2View::~CMy3ʵ��2View()
{
}

BOOL CMy3ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy3ʵ��2View ����

void CMy3ʵ��2View::OnDraw(CDC* /*pDC*/)
{
	CMy3ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy3ʵ��2View ���

#ifdef _DEBUG
void CMy3ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3ʵ��2Doc* CMy3ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3ʵ��2Doc)));
	return (CMy3ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3ʵ��2View ��Ϣ�������


void CMy3ʵ��2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	s.Format(_T("�����ڱ�����"));
	CClientDC dc(this);
	dc.TextOutW( point.x,point.y,s);
	CView::OnLButtonDown(nFlags, point);
}


void CMy3ʵ��2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	s.Format(_T("�����ڱ�̧��"));
	CClientDC dc(this);
	dc.TextOutW(point.x+30, point.y+30, s);
	CView::OnLButtonUp(nFlags, point);
}
