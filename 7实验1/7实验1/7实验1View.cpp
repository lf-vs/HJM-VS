
// 7ʵ��1View.cpp : CMy7ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "7ʵ��1.h"
#endif

#include "7ʵ��1Doc.h"
#include "7ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy7ʵ��1View

IMPLEMENT_DYNCREATE(CMy7ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy7ʵ��1View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy7ʵ��1View ����/����

CMy7ʵ��1View::CMy7ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������
	cr.left = 100;
	cr.top = 100;
	cr.right = 250;
	cr.bottom = 300;
}

CMy7ʵ��1View::~CMy7ʵ��1View()
{
}

BOOL CMy7ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy7ʵ��1View ����

void CMy7ʵ��1View::OnDraw(CDC* /*pDC*/)
{
	CMy7ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CClientDC dc(this);
	dc.Rectangle(cr);
}


// CMy7ʵ��1View ���

#ifdef _DEBUG
void CMy7ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy7ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy7ʵ��1Doc* CMy7ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy7ʵ��1Doc)));
	return (CMy7ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy7ʵ��1View ��Ϣ�������


void CMy7ʵ��1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (nFlags) {
		cr.left = point.x - 60;
		cr.top = point.y - 100;
		cr.right = point.x + 60;
		cr.bottom = point.y + 100;
	}
	Invalidate();
	CView::OnMouseMove(nFlags, point);
}
