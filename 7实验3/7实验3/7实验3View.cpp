
// 7实验3View.cpp : CMy7实验3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "7实验3.h"
#endif

#include "7实验3Doc.h"
#include "7实验3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy7实验3View

IMPLEMENT_DYNCREATE(CMy7实验3View, CView)

BEGIN_MESSAGE_MAP(CMy7实验3View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy7实验3View 构造/析构

CMy7实验3View::CMy7实验3View()
{
	// TODO: 在此处添加构造代码
	set = true;
	flag = 0;
}

CMy7实验3View::~CMy7实验3View()
{
}

BOOL CMy7实验3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy7实验3View 绘制

void CMy7实验3View::OnDraw(CDC* /*pDC*/)
{
	CMy7实验3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	if (set) {
		SetTimer(1, rand() % 400 + 100, NULL);
		set = false;
	}

	CClientDC dc(this);
	this->GetClientRect(cert);
	cr.left = cert.bottom / 3;
	cr.top= cert.bottom / 3;
	cr.bottom = cert.bottom / 3 * 2;
	cr.right = cert.bottom / 3 + 50;
	dc.Ellipse(cr);
	//Invalidate();
}


// CMy7实验3View 诊断

#ifdef _DEBUG
void CMy7实验3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy7实验3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy7实验3Doc* CMy7实验3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy7实验3Doc)));
	return (CMy7实验3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy7实验3View 消息处理程序


void CMy7实验3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int i = nIDEvent;
	if (n == 1)
	{
		if (cr.right > cert.right)
		{
			flag = 1;
		}
		if (cr.left < cert.left)
		{
			flag = 0;
		}
		if (flag == 1)
		{
			cr.right -= 10;
			cr.left -= 10;
		}
		if (flag == 0)
		{
			cr.left += 10;
			cr.right += 10;
		}
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}


void CMy7实验3View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	CView::OnLButtonDblClk(nFlags, point);
	n = 0;
}


void CMy7实验3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	n = 1;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
