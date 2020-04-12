
// 6实验3View.cpp : CMy6实验3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "6实验3.h"
#endif

#include "6实验3Doc.h"
#include "6实验3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy6实验3View

IMPLEMENT_DYNCREATE(CMy6实验3View, CView)

BEGIN_MESSAGE_MAP(CMy6实验3View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CMy6实验3View 构造/析构

CMy6实验3View::CMy6实验3View()
{
	// TODO: 在此处添加构造代码
	s = "";
}

CMy6实验3View::~CMy6实验3View()
{
}

BOOL CMy6实验3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy6实验3View 绘制

void CMy6实验3View::OnDraw(CDC* pDC)
{
	CMy6实验3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(pDoc->cr);
}


// CMy6实验3View 诊断

#ifdef _DEBUG
void CMy6实验3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy6实验3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy6实验3Doc* CMy6实验3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy6实验3Doc)));
	return (CMy6实验3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy6实验3View 消息处理程序


void CMy6实验3View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy6实验3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	s = s + (char) nChar;
	dc.TextOutW(pDoc->cr.left+10, pDoc->cr.top+10, s);
	CView::OnChar(nChar, nRepCnt, nFlags);
}
