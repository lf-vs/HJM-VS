
// 4ʵ��1View.cpp : CMy4ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "4ʵ��1.h"
#endif

#include "4ʵ��1Doc.h"
#include "4ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy4ʵ��1View

IMPLEMENT_DYNCREATE(CMy4ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy4ʵ��1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy4ʵ��1View ����/����

CMy4ʵ��1View::CMy4ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy4ʵ��1View::~CMy4ʵ��1View()
{
}

BOOL CMy4ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy4ʵ��1View ����

void CMy4ʵ��1View::OnDraw(CDC* /*pDC*/)
{
	CMy4ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy4ʵ��1View ���

#ifdef _DEBUG
void CMy4ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy4ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy4ʵ��1Doc* CMy4ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy4ʵ��1Doc)));
	return (CMy4ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy4ʵ��1View ��Ϣ�������


void CMy4ʵ��1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy4ʵ��1Doc* pDoc = GetDocument();
	SetCapture();
	pDoc->A = point.x;
	pDoc->B = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMy4ʵ��1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy4ʵ��1Doc* pDoc = GetDocument();
	ReleaseCapture();
	pDoc->C = point.x;
	pDoc->D = point.y;
	CClientDC dc(this);
	CRect cr(pDoc->A, pDoc->B, pDoc->C, pDoc->D);
	dc.Rectangle(cr);
	CView::OnLButtonUp(nFlags, point);
}


void CMy4ʵ��1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	s.Format(_T("X:%d Y:%d"), point.x, point.y);
	CClientDC dc(this);
	dc.TextOutW(0, 0, s);
	CView::OnMouseMove(nFlags, point);
}
