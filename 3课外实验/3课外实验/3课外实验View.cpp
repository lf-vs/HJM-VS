
// 3����ʵ��View.cpp : CMy3����ʵ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3����ʵ��.h"
#endif

#include "3����ʵ��Doc.h"
#include "3����ʵ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3����ʵ��View

IMPLEMENT_DYNCREATE(CMy3����ʵ��View, CView)

BEGIN_MESSAGE_MAP(CMy3����ʵ��View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMy3����ʵ��View ����/����

CMy3����ʵ��View::CMy3����ʵ��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy3����ʵ��View::~CMy3����ʵ��View()
{
}

BOOL CMy3����ʵ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy3����ʵ��View ����

void CMy3����ʵ��View::OnDraw(CDC* pDC)
{
	CMy3����ʵ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->cr1);
	pDC->Rectangle(pDoc->cr2);
	pDC->Rectangle(pDoc->cr3);
	pDC->Rectangle(pDoc->cr4);
}


// CMy3����ʵ��View ���

#ifdef _DEBUG
void CMy3����ʵ��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3����ʵ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3����ʵ��Doc* CMy3����ʵ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3����ʵ��Doc)));
	return (CMy3����ʵ��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3����ʵ��View ��Ϣ�������

int ans = 0;
int a, b;
void CMy3����ʵ��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	ans=ans++;
	int r = rand() % 50 + 100;
	CString s;
	if (point.x > 20 && point.x < 200 && point.y>100 && point.y < 200) {
		a = r;
		s.Format(_T("%d"), a);
		dc.TextOutW(point.x, point.y, s);
	}
	else if (point.x > 220 && point.x < 400 && point.y>100 && point.y < 200) {
		b = r;
		s.Format(_T("%d"), b);
		dc.TextOutW(point.x, point.y, s);
	}
	else if (point.x > 620 && point.x < 800 && point.y>100 && point.y < 200) {
		if (ans % 4 == 3) { s.Format(_T("+"));dc.TextOutW(point.x, point.y, s); }
		if (ans % 4 == 2) { s.Format(_T("-")); dc.TextOutW(point.x, point.y, s);}
		if (ans % 4 == 1) { s.Format(_T("*"));dc.TextOutW(point.x, point.y, s); }
		if (ans % 4 == 0) { s.Format(_T("/"));dc.TextOutW(point.x, point.y, s); }
		
	}
	CView::OnLButtonDown(nFlags, point);
}


void CMy3����ʵ��View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	//CMy3����ʵ��Doc* pDoc = GetDocument();
	CClientDC dc(this);
	int count=0;
	int s1,s2,s3,s4;
	CString ce;
	if(nFlags)
	  count = count++;
	if (point.x > 420 && point.x < 600 && point.y>100 && point.y < 200) {
		if (count % 4 == 1) {
			s1 = a + b;
			ce.Format(_T("%d"), s1);
			dc.TextOutW(point.x, point.y, ce);
		}
		else if (count % 4 == 2) {
			s2 = a - b;
			ce.Format(_T("%d"), s2);
			dc.TextOutW(point.x, point.y, ce);
		}
		else if (count % 4 == 3) {
			s3 = a * b;
			ce.Format(_T("%d"), s3);
			dc.TextOutW(point.x, point.y, ce);
		}
		else if (count % 4 == 4 || count % 4 == 0) {
			s4 = a / b;
			ce.Format(_T("%d"), s4);
			dc.TextOutW(point.x, point.y, ce);
		}
	}
	CView::OnRButtonDown(nFlags, point);
}
