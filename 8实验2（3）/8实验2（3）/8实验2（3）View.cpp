
// 8ʵ��2��3��View.cpp : CMy8ʵ��2��3��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "8ʵ��2��3��.h"
#endif

#include "8ʵ��2��3��Doc.h"
#include "8ʵ��2��3��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy8ʵ��2��3��View

IMPLEMENT_DYNCREATE(CMy8ʵ��2��3��View, CView)

BEGIN_MESSAGE_MAP(CMy8ʵ��2��3��View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMy8ʵ��2��3��View ����/����

CMy8ʵ��2��3��View::CMy8ʵ��2��3��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy8ʵ��2��3��View::~CMy8ʵ��2��3��View()
{
}

BOOL CMy8ʵ��2��3��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy8ʵ��2��3��View ����

void CMy8ʵ��2��3��View::OnDraw(CDC* pDC)
{
	CMy8ʵ��2��3��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(pDoc->cr);
}


// CMy8ʵ��2��3��View ���

#ifdef _DEBUG
void CMy8ʵ��2��3��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy8ʵ��2��3��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy8ʵ��2��3��Doc* CMy8ʵ��2��3��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy8ʵ��2��3��Doc)));
	return (CMy8ʵ��2��3��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy8ʵ��2��3��View ��Ϣ�������


void CMy8ʵ��2��3��View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CView::OnLButtonDblClk(nFlags, point);
}


void CMy8ʵ��2��3��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy8ʵ��2��3��Doc* pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->m = true;
	CPen *oldpen = NULL;
	CPen pen(PS_DASH, 1, RGB(0,0,255));
	GetDC()->SelectStockObject(NULL_BRUSH);
	CBrush *oldbrush = NULL;
	CBrush *brush = CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
	oldbrush = dc.SelectObject(brush);
	if (point.x > pDoc->cr.left && point.x < pDoc->cr.right) {
		if (point.y > pDoc->cr.top && point.y < pDoc->cr.bottom) {
			oldpen = dc.SelectObject(&pen);
			dc.Rectangle(pDoc->cr);
			dc.SelectObject(oldpen);
		}
	}
	CView::OnLButtonDown(nFlags, point);
}


void CMy8ʵ��2��3��View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CView::OnLButtonUp(nFlags, point);
}


void CMy8ʵ��2��3��View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CView::OnRButtonDown(nFlags, point);
}
