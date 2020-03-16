
// （四）实验1View.cpp : C（四）实验1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "（四）实验1.h"
#endif

#include "（四）实验1Doc.h"
#include "（四）实验1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C（四）实验1View

IMPLEMENT_DYNCREATE(C（四）实验1View, CView)

BEGIN_MESSAGE_MAP(C（四）实验1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C（四）实验1View 构造/析构

C（四）实验1View::C（四）实验1View()
{
	// TODO: 在此处添加构造代码

}

C（四）实验1View::~C（四）实验1View()
{
}

BOOL C（四）实验1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C（四）实验1View 绘制

void C（四）实验1View::OnDraw(CDC* /*pDC*/)
{
	C（四）实验1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C（四）实验1View 诊断

#ifdef _DEBUG
void C（四）实验1View::AssertValid() const
{
	CView::AssertValid();
}

void C（四）实验1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C（四）实验1Doc* C（四）实验1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C（四）实验1Doc)));
	return (C（四）实验1Doc*)m_pDocument;
}
#endif //_DEBUG


// C（四）实验1View 消息处理程序


void C（四）实验1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C（四）实验1Doc* pDoc = GetDocument();
	SetCapture();
	pDoc->A = point.x;
	pDoc->B = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void C（四）实验1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C（四）实验1Doc* pDoc = GetDocument();
	ReleaseCapture();
	pDoc->C = point.x;
	pDoc->D = point.y;
	CClientDC dc(this);
	CRect cr(pDoc->A, pDoc->B, pDoc->C, pDoc->D);
	dc.Rectangle(cr);
	
	CView::OnLButtonUp(nFlags, point);
}


void C（四）实验1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s;
	s.Format(_T("X:%d Y:%d"), point.x, point.y);
	CClientDC dc(this);
	dc.TextOutW(0, 0, s);
	CView::OnMouseMove(nFlags, point);
}
