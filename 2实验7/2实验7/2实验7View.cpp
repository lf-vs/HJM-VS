
// 2实验7View.cpp : CMy2实验7View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2实验7.h"
#endif

#include "2实验7Doc.h"
#include "2实验7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy2实验7View

IMPLEMENT_DYNCREATE(CMy2实验7View, CView)

BEGIN_MESSAGE_MAP(CMy2实验7View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMy2实验7View 构造/析构

CMy2实验7View::CMy2实验7View()
{
	// TODO: 在此处添加构造代码

}

CMy2实验7View::~CMy2实验7View()
{
}

BOOL CMy2实验7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy2实验7View 绘制

void CMy2实验7View::OnDraw(CDC* /*pDC*/)
{
	CMy2实验7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy2实验7View 诊断

#ifdef _DEBUG
void CMy2实验7View::AssertValid() const
{
	CView::AssertValid();
}

void CMy2实验7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy2实验7Doc* CMy2实验7View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy2实验7Doc)));
	return (CMy2实验7Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy2实验7View 消息处理程序


void CMy2实验7View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy2实验7Doc* pDoc = GetDocument();
	pDoc->count=pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void CMy2实验7View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy2实验7Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("左建点击了 %d 次"), pDoc->count);
	CClientDC dc(this);
	dc.TextOutW(0, 0, s);
	CView::OnRButtonDown(nFlags, point);
}
