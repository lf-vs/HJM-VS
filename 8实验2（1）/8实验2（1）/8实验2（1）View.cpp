
// 8ʵ��2��1��View.cpp : CMy8ʵ��2��1��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "8ʵ��2��1��.h"
#endif

#include "8ʵ��2��1��Doc.h"
#include "8ʵ��2��1��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy8ʵ��2��1��View

IMPLEMENT_DYNCREATE(CMy8ʵ��2��1��View, CView)

BEGIN_MESSAGE_MAP(CMy8ʵ��2��1��View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy8ʵ��2��1��View ����/����

CMy8ʵ��2��1��View::CMy8ʵ��2��1��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy8ʵ��2��1��View::~CMy8ʵ��2��1��View()
{
}

BOOL CMy8ʵ��2��1��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy8ʵ��2��1��View ����

void CMy8ʵ��2��1��View::OnDraw(CDC* pDC)
{
	CMy8ʵ��2��1��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(pDoc->cr);
}


// CMy8ʵ��2��1��View ���

#ifdef _DEBUG
void CMy8ʵ��2��1��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy8ʵ��2��1��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy8ʵ��2��1��Doc* CMy8ʵ��2��1��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy8ʵ��2��1��Doc)));
	return (CMy8ʵ��2��1��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy8ʵ��2��1��View ��Ϣ�������


void CMy8ʵ��2��1��View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy8ʵ��2��1��Doc* pDoc = GetDocument();
	if (pDoc->set) {
		pDoc->cr.left = point.x - pDoc->x1;
		pDoc->cr.top = point.y - pDoc->y1;
		pDoc->cr.right = point.x + pDoc->x2;
		pDoc->cr.bottom = point.y + pDoc->y2;
	}
	Invalidate();
	CView::OnMouseMove(nFlags, point);
}


void CMy8ʵ��2��1��View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy8ʵ��2��1��Doc* pDoc = GetDocument();
	pDoc->set = true;
	pDoc->x1 = point.x - pDoc->cr.left;
	pDoc->y1 = point.y - pDoc->cr.top;
	pDoc->x2 = pDoc->cr.right - point.x;
	pDoc->y2 = pDoc->cr.bottom - point.y;
	CView::OnLButtonDblClk(nFlags, point);
}


void CMy8ʵ��2��1��View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy8ʵ��2��1��Doc* pDoc = GetDocument();
	pDoc->set = false;
	CView::OnLButtonUp(nFlags, point);
}
