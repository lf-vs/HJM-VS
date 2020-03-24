
// 5实验5（1）View.cpp : CMy5实验5（1）View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "5实验5（1）.h"
#endif

#include "5实验5（1）Doc.h"
#include "5实验5（1）View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy5实验5（1）View

IMPLEMENT_DYNCREATE(CMy5实验5（1）View, CView)

BEGIN_MESSAGE_MAP(CMy5实验5（1）View, CView)
	ON_COMMAND(ID_SHOW, &CMy5实验5（1）View::OnShow)
	ON_COMMAND(ID_ShowRectangle, &CMy5实验5（1）View::OnShowrectangle)
	ON_COMMAND(ID_ShowEllipse, &CMy5实验5（1）View::OnShowellipse)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy5实验5（1）View 构造/析构

CMy5实验5（1）View::CMy5实验5（1）View()
{
	// TODO: 在此处添加构造代码

}

CMy5实验5（1）View::~CMy5实验5（1）View()
{
}

BOOL CMy5实验5（1）View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy5实验5（1）View 绘制

void CMy5实验5（1）View::OnDraw(CDC* /*pDC*/)
{
	CMy5实验5（1）Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy5实验5（1）View 诊断

#ifdef _DEBUG
void CMy5实验5（1）View::AssertValid() const
{
	CView::AssertValid();
}

void CMy5实验5（1）View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy5实验5（1）Doc* CMy5实验5（1）View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy5实验5（1）Doc)));
	return (CMy5实验5（1）Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy5实验5（1）View 消息处理程序

int set;
CRect cr;
void CMy5实验5（1）View::OnShow()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	set = 1;
	CPen pen(PS_SOLID, 5, RGB(0, 0, 0));
	CPen* oldPen = dc.SelectObject(&pen);
}


void CMy5实验5（1）View::OnShowrectangle()
{
	// TODO: 在此添加命令处理程序代码
	set = 2;
	//GetClientRect(&cr);
}


void CMy5实验5（1）View::OnShowellipse()
{
	// TODO: 在此添加命令处理程序代码
	set = 3;
}

CPoint point1,point2;
void CMy5实验5（1）View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	point1.x = point.x;
	point1.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMy5实验5（1）View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	point2.x = point.x;
	point2.y = point.y;
	switch (set) {
	case 1:
		dc.MoveTo(point2.x, point2.y);
		dc.LineTo(point1.x, point1.y);
		break;
	case 2:
		cr.left = point1.x;
		cr.top = point1.y;
		cr.right = point2.x;
		cr.bottom = point2.y;
		dc.Rectangle(cr);
		break;
	case 3:
		cr.left = point1.x;
		cr.top = point1.y;
		cr.right = point2.x;
		cr.bottom = point2.y;
		dc.Ellipse(cr);
		break;
	}
	CView::OnLButtonUp(nFlags, point);
}


void CMy5实验5（1）View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnMouseMove(nFlags, point);
}
