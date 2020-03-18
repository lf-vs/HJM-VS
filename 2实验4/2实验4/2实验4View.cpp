
// 2实验4View.cpp : CMy2实验4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2实验4.h"
#endif

#include "2实验4Doc.h"
#include "2实验4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy2实验4View

IMPLEMENT_DYNCREATE(CMy2实验4View, CView)

BEGIN_MESSAGE_MAP(CMy2实验4View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy2实验4View 构造/析构

CMy2实验4View::CMy2实验4View()
{
	// TODO: 在此处添加构造代码

}

CMy2实验4View::~CMy2实验4View()
{
}

BOOL CMy2实验4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy2实验4View 绘制

void CMy2实验4View::OnDraw(CDC* pDC)
{
	CMy2实验4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CRect cr;
	this->GetClientRect(&cr);
	CBrush newBrush((COLORREF)0x0000FF00);
	CBrush*oldBrush = pDC->SelectObject(&newBrush);
	pDC->Ellipse(cr);
	pDC->SelectObject(oldBrush);
}


// CMy2实验4View 诊断

#ifdef _DEBUG
void CMy2实验4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy2实验4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy2实验4Doc* CMy2实验4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy2实验4Doc)));
	return (CMy2实验4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy2实验4View 消息处理程序


void CMy2实验4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
}
