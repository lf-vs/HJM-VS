
// 3ʵ��4View.cpp : CMy3ʵ��4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3ʵ��4.h"
#endif

#include "3ʵ��4Doc.h"
#include "3ʵ��4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3ʵ��4View

IMPLEMENT_DYNCREATE(CMy3ʵ��4View, CView)

BEGIN_MESSAGE_MAP(CMy3ʵ��4View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMy3ʵ��4View ����/����

CMy3ʵ��4View::CMy3ʵ��4View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy3ʵ��4View::~CMy3ʵ��4View()
{
}

BOOL CMy3ʵ��4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy3ʵ��4View ����

void CMy3ʵ��4View::OnDraw(CDC* /*pDC*/)
{
	CMy3ʵ��4Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CRect A(pDoc->k1, pDoc->h1, pDoc->t1, pDoc->b1);
	dc.Rectangle(A);
	CRect B(pDoc->k2, pDoc->h2, pDoc->t2, pDoc->b2);
	dc.Rectangle(B);
	CRect C(pDoc->k3, pDoc->h3, pDoc->t3, pDoc->b3);
	dc.Rectangle(C);
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy3ʵ��4View ���

#ifdef _DEBUG
void CMy3ʵ��4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3ʵ��4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3ʵ��4Doc* CMy3ʵ��4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3ʵ��4Doc)));
	return (CMy3ʵ��4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3ʵ��4View ��Ϣ�������


void CMy3ʵ��4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy3ʵ��4Doc* pDoc = GetDocument();
	pDoc->a = rand() % 100;
	pDoc->b = rand() % 100;
	CString s1, s2,s3;
	s1.Format(_T("%d"), pDoc->a);
	s2.Format(_T("%d"), pDoc->a);
	CClientDC dc(this);
	if (point.x > 50 && point.x < 200 && point.y>50 && point.y < 200) {
		dc.TextOutW(point.x, point.y, s1);
	}
	else if (point.x > 250 && point.x < 330 && point.y>250 && point.y < 330) {
		dc.TextOutW(point.x, point.y, s2);
	}
	else if (!(point.x > 400 && point.x < 520 && point.y>400 && point.y < 520)) {
		dc.TextOutW(point.x, point.y, _T("�����Ч"));
	}

	
	CView::OnLButtonDown(nFlags, point);
}


void CMy3ʵ��4View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	 CClientDC dc(this);
	 CMy3ʵ��4Doc* pDoc = GetDocument();
	 CString s3;
	 s3.Format(_T("%d"), pDoc->a + pDoc->b);
	 if (point.x > 400 && point.x < 520 && point.y>400 && point.y < 520) {
		dc.TextOutW(point.x, point.y, s3);
	}
	 
	CView::OnRButtonDown(nFlags, point);
}
