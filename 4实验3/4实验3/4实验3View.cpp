
// 4ʵ��3View.cpp : CMy4ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "4ʵ��3.h"
#endif

#include "4ʵ��3Doc.h"
#include "4ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy4ʵ��3View

IMPLEMENT_DYNCREATE(CMy4ʵ��3View, CView)

BEGIN_MESSAGE_MAP(CMy4ʵ��3View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy4ʵ��3View ����/����

CMy4ʵ��3View::CMy4ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy4ʵ��3View::~CMy4ʵ��3View()
{
}

BOOL CMy4ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy4ʵ��3View ����

void CMy4ʵ��3View::OnDraw(CDC* pDC)
{
	CMy4ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->cr);
}


// CMy4ʵ��3View ���

#ifdef _DEBUG
void CMy4ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy4ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy4ʵ��3Doc* CMy4ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy4ʵ��3Doc)));
	return (CMy4ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy4ʵ��3View ��Ϣ�������


void CMy4ʵ��3View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy4ʵ��3Doc* pDoc = GetDocument();
	CRect rect;
	GetClientRect(&rect);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->cr.left > 0) {
			pDoc->cr.left -= 5;
			pDoc->cr.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (pDoc->cr.right <= rect.right - rect.left) {
			pDoc->cr.left += 5;
			pDoc->cr.right += 5;
		}
		break;
	case VK_DOWN:
		if (pDoc->cr.bottom <= rect.bottom - rect.top) {
			pDoc->cr.top += 5;
			pDoc->cr.bottom += 5;
		}
		break;
	case VK_UP:
		if (pDoc->cr.top > 0) {
			pDoc->cr.top -= 5;
			pDoc->cr.bottom -= 5;
		}
		break;
	case VK_HOME:
		if (pDoc->cr.left > 0) {
			pDoc->cr.left -= 20;
			pDoc->cr.top -= 20;
		}
		break;
	case VK_END:
		if (pDoc->cr.right <= rect.right - rect.left) {
			pDoc->cr.right -= 20;
			pDoc->cr.bottom -= 20;
		}
		break;
	}
	InvalidateRect(NULL, TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CMy4ʵ��3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy4ʵ��3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->cr.left = 400;
	pDoc->cr.top = 200;
	pDoc->cr.right = 600;
	pDoc->cr.bottom = 450;
	dc.Rectangle(pDoc->cr);
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
