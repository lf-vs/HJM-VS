
// 2ʵ��1View.cpp : CMy2ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2ʵ��1.h"
#endif

#include "2ʵ��1Doc.h"
#include "2ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy2ʵ��1View

IMPLEMENT_DYNCREATE(CMy2ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy2ʵ��1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy2ʵ��1View ����/����

CMy2ʵ��1View::CMy2ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy2ʵ��1View::~CMy2ʵ��1View()
{
}

BOOL CMy2ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy2ʵ��1View ����

void CMy2ʵ��1View::OnDraw(CDC* /*pDC*/)
{
	CMy2ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy2ʵ��1View ���

#ifdef _DEBUG
void CMy2ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy2ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy2ʵ��1Doc* CMy2ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy2ʵ��1Doc)));
	return (CMy2ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy2ʵ��1View ��Ϣ�������


void CMy2ʵ��1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int t = rand()% 50 + 100;
	CRect cr(point.x, point.y, point.x + t, point.y + t);
	CClientDC dc(this);
	dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}
