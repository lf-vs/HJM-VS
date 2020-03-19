
// 4实验4View.cpp : CMy4实验4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "4实验4.h"
#endif

#include "4实验4Doc.h"
#include "4实验4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy4实验4View

IMPLEMENT_DYNCREATE(CMy4实验4View, CView)

BEGIN_MESSAGE_MAP(CMy4实验4View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMy4实验4View 构造/析构

CMy4实验4View::CMy4实验4View()
{
	// TODO: 在此处添加构造代码

}

CMy4实验4View::~CMy4实验4View()
{
}

BOOL CMy4实验4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy4实验4View 绘制

void CMy4实验4View::OnDraw(CDC* pDC)
{
	CMy4实验4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
	  pDC->Ellipse(pDoc->cr);
	if (pDoc->set) {
		int i = 0;
		SetTimer(i, 100, NULL);
		pDoc->set = false;
	}
	  
}


// CMy4实验4View 诊断

#ifdef _DEBUG
void CMy4实验4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy4实验4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy4实验4Doc* CMy4实验4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy4实验4Doc)));
	return (CMy4实验4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy4实验4View 消息处理程序
int flag = 1;
void CMy4实验4View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy4实验4Doc* pDoc = GetDocument();
	CRect rect;
	GetClientRect(&rect);
	int i = nIDEvent;
		if (pDoc->cr.bottom >= rect.bottom)
			flag = 0;
		if (flag == 1) {
			pDoc->cr.top += 10;
			pDoc->cr.bottom += 10;
		}
		else {
			pDoc->cr.top -= 10;
			pDoc->cr.bottom -= 10;
		}
		Invalidate();
	
	CView::OnTimer(nIDEvent);
}
