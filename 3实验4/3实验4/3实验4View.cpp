
// 3实验4View.cpp : CMy3实验4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3实验4.h"
#endif

#include "3实验4Doc.h"
#include "3实验4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3实验4View

IMPLEMENT_DYNCREATE(CMy3实验4View, CView)

BEGIN_MESSAGE_MAP(CMy3实验4View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMy3实验4View 构造/析构

CMy3实验4View::CMy3实验4View()
{
	// TODO: 在此处添加构造代码

}

CMy3实验4View::~CMy3实验4View()
{
}

BOOL CMy3实验4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy3实验4View 绘制

void CMy3实验4View::OnDraw(CDC* /*pDC*/)
{
	CMy3实验4Doc* pDoc = GetDocument();
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

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy3实验4View 诊断

#ifdef _DEBUG
void CMy3实验4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3实验4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3实验4Doc* CMy3实验4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3实验4Doc)));
	return (CMy3实验4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3实验4View 消息处理程序


void CMy3实验4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy3实验4Doc* pDoc = GetDocument();
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
		dc.TextOutW(point.x, point.y, _T("点击无效"));
	}

	
	CView::OnLButtonDown(nFlags, point);
}


void CMy3实验4View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	 CClientDC dc(this);
	 CMy3实验4Doc* pDoc = GetDocument();
	 CString s3;
	 s3.Format(_T("%d"), pDoc->a + pDoc->b);
	 if (point.x > 400 && point.x < 520 && point.y>400 && point.y < 520) {
		dc.TextOutW(point.x, point.y, s3);
	}
	 
	CView::OnRButtonDown(nFlags, point);
}
