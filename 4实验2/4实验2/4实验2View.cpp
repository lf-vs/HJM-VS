
// 4ʵ��2View.cpp : CMy4ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "4ʵ��2.h"
#endif

#include "4ʵ��2Doc.h"
#include "4ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy4ʵ��2View

IMPLEMENT_DYNCREATE(CMy4ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy4ʵ��2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy4ʵ��2View ����/����

CMy4ʵ��2View::CMy4ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy4ʵ��2View::~CMy4ʵ��2View()
{
}

BOOL CMy4ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy4ʵ��2View ����

void CMy4ʵ��2View::OnDraw(CDC* /*pDC*/)
{
	CMy4ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy4ʵ��2View ���

#ifdef _DEBUG
void CMy4ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy4ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy4ʵ��2Doc* CMy4ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy4ʵ��2Doc)));
	return (CMy4ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy4ʵ��2View ��Ϣ�������


void CMy4ʵ��2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy4ʵ��2Doc* pDoc = GetDocument();
	pDoc->a=point.x;
	CView::OnLButtonDown(nFlags, point);
}


void CMy4ʵ��2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy4ʵ��2Doc* pDoc = GetDocument();
	pDoc->b = point.x;
	CView::OnLButtonUp(nFlags, point);
}


void CMy4ʵ��2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CMy4ʵ��2Doc* pDoc = GetDocument();
	int i = abs(pDoc->b - pDoc->a);
	if(nFlags)
	  pDoc->count = pDoc->count++;
	CString s;
	s.Format(_T("MouseMove������ %d �Σ������ƶ�%d�����ط���һ��"), pDoc->count,i);
	dc.TextOutW(200, 500, s);
	CView::OnMouseMove(nFlags, point);
}
