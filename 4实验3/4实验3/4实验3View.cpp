
// 4实验3View.cpp : CMy4实验3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "4实验3.h"
#endif

#include "4实验3Doc.h"
#include "4实验3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy4实验3View

IMPLEMENT_DYNCREATE(CMy4实验3View, CView)

BEGIN_MESSAGE_MAP(CMy4实验3View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy4实验3View 构造/析构

CMy4实验3View::CMy4实验3View()
{
	// TODO: 在此处添加构造代码

}

CMy4实验3View::~CMy4实验3View()
{
}

BOOL CMy4实验3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy4实验3View 绘制

void CMy4实验3View::OnDraw(CDC* pDC)
{
	CMy4实验3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(pDoc->cr);
}


// CMy4实验3View 诊断

#ifdef _DEBUG
void CMy4实验3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy4实验3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy4实验3Doc* CMy4实验3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy4实验3Doc)));
	return (CMy4实验3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy4实验3View 消息处理程序


void CMy4实验3View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy4实验3Doc* pDoc = GetDocument();
	CRect rect;
	GetClientRect(&rect);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->cr.left > 0) {
			pDoc->cr.left -= 5;
			pDoc->cr.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (pDoc->cr.right <= rect.right - rect.left) {
			pDoc->cr.left += 5;
			pDoc->cr.right += 5;
		}
		break;
	case VK_DOWN:
		if (pDoc->cr.bottom <= rect.bottom - rect.top) {
			pDoc->cr.top += 5;
			pDoc->cr.bottom += 5;
		}
		break;
	case VK_UP:
		if (pDoc->cr.top > 0) {
			pDoc->cr.top -= 5;
			pDoc->cr.bottom -= 5;
		}
		break;
	case VK_HOME:
		if (pDoc->cr.left > 0) {
			pDoc->cr.left -= 20;
			pDoc->cr.top -= 20;
		}
		break;
	case VK_END:
		if (pDoc->cr.right <= rect.right - rect.left) {
			pDoc->cr.right -= 20;
			pDoc->cr.bottom -= 20;
		}
		break;
	}
	InvalidateRect(NULL, TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CMy4实验3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy4实验3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->cr.left = 400;
	pDoc->cr.top = 200;
	pDoc->cr.right = 600;
	pDoc->cr.bottom = 450;
	dc.Rectangle(pDoc->cr);
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
