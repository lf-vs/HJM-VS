
// 4实验2View.cpp : CMy4实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "4实验2.h"
#endif

#include "4实验2Doc.h"
#include "4实验2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy4实验2View

IMPLEMENT_DYNCREATE(CMy4实验2View, CView)

BEGIN_MESSAGE_MAP(CMy4实验2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy4实验2View 构造/析构

CMy4实验2View::CMy4实验2View()
{
	// TODO: 在此处添加构造代码

}

CMy4实验2View::~CMy4实验2View()
{
}

BOOL CMy4实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy4实验2View 绘制

void CMy4实验2View::OnDraw(CDC* /*pDC*/)
{
	CMy4实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy4实验2View 诊断

#ifdef _DEBUG
void CMy4实验2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy4实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy4实验2Doc* CMy4实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy4实验2Doc)));
	return (CMy4实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy4实验2View 消息处理程序


void CMy4实验2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy4实验2Doc* pDoc = GetDocument();
	pDoc->a=point.x;
	CView::OnLButtonDown(nFlags, point);
}


void CMy4实验2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy4实验2Doc* pDoc = GetDocument();
	pDoc->b = point.x;
	CView::OnLButtonUp(nFlags, point);
}


void CMy4实验2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CMy4实验2Doc* pDoc = GetDocument();
	int i = abs(pDoc->b - pDoc->a);
	if(nFlags)
	  pDoc->count = pDoc->count++;
	CString s;
	s.Format(_T("MouseMove发生了 %d 次，横向移动%d个像素发生一次"), pDoc->count,i);
	dc.TextOutW(200, 500, s);
	CView::OnMouseMove(nFlags, point);
}
