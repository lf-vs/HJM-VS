
// 3课外实验View.cpp : CMy3课外实验View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3课外实验.h"
#endif

#include "3课外实验Doc.h"
#include "3课外实验View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3课外实验View

IMPLEMENT_DYNCREATE(CMy3课外实验View, CView)

BEGIN_MESSAGE_MAP(CMy3课外实验View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMy3课外实验View 构造/析构

CMy3课外实验View::CMy3课外实验View()
{
	// TODO: 在此处添加构造代码

}

CMy3课外实验View::~CMy3课外实验View()
{
}

BOOL CMy3课外实验View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy3课外实验View 绘制

void CMy3课外实验View::OnDraw(CDC* pDC)
{
	CMy3课外实验Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(pDoc->cr1);
	pDC->Rectangle(pDoc->cr2);
	pDC->Rectangle(pDoc->cr3);
	pDC->Rectangle(pDoc->cr4);
}


// CMy3课外实验View 诊断

#ifdef _DEBUG
void CMy3课外实验View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3课外实验View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3课外实验Doc* CMy3课外实验View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3课外实验Doc)));
	return (CMy3课外实验Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3课外实验View 消息处理程序

int ans = 0;
int a, b;
void CMy3课外实验View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
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


void CMy3课外实验View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	//CMy3课外实验Doc* pDoc = GetDocument();
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
