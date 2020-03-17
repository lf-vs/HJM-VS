
// 4实验1View.cpp : CMy4实验1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "4实验1.h"
#endif

#include "4实验1Doc.h"
#include "4实验1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy4实验1View

IMPLEMENT_DYNCREATE(CMy4实验1View, CView)

BEGIN_MESSAGE_MAP(CMy4实验1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy4实验1View 构造/析构

CMy4实验1View::CMy4实验1View()
{
	// TODO: 在此处添加构造代码

}

CMy4实验1View::~CMy4实验1View()
{
}

BOOL CMy4实验1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy4实验1View 绘制

void CMy4实验1View::OnDraw(CDC* /*pDC*/)
{
	CMy4实验1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy4实验1View 诊断

#ifdef _DEBUG
void CMy4实验1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy4实验1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy4实验1Doc* CMy4实验1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy4实验1Doc)));
	return (CMy4实验1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy4实验1View 消息处理程序


void CMy4实验1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy4实验1Doc* pDoc = GetDocument();
	SetCapture();
	pDoc->A = point.x;
	pDoc->B = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMy4实验1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy4实验1Doc* pDoc = GetDocument();
	ReleaseCapture();
	pDoc->C = point.x;
	pDoc->D = point.y;
	CClientDC dc(this);
	CRect cr(pDoc->A, pDoc->B, pDoc->C, pDoc->D);
	dc.Rectangle(cr);
	CView::OnLButtonUp(nFlags, point);
}


void CMy4实验1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s;
	s.Format(_T("X:%d Y:%d"), point.x, point.y);
	CClientDC dc(this);
	dc.TextOutW(0, 0, s);
	CView::OnMouseMove(nFlags, point);
}
