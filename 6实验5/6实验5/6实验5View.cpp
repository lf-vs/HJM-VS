
// 6实验5View.cpp : CMy6实验5View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "6实验5.h"
#endif

#include "6实验5Doc.h"
#include "6实验5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy6实验5View

IMPLEMENT_DYNCREATE(CMy6实验5View, CView)

BEGIN_MESSAGE_MAP(CMy6实验5View, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy6实验5View 构造/析构

CMy6实验5View::CMy6实验5View()
{
	// TODO: 在此处添加构造代码
	s = "";
	ss = "";
	cpoint.x = 605;
	cpoint.y = 203;
	x = 605;
	flag = 0;h = 0;
	cr.left = 600;
	cr.top = 200;
	cr.right = 800;
	cr.bottom = 225;
}

CMy6实验5View::~CMy6实验5View()
{
}

BOOL CMy6实验5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy6实验5View 绘制

void CMy6实验5View::OnDraw(CDC* pDC)
{
	CMy6实验5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(cr);
	if (flag) {
		for (int i = 0;i < flag;i++)
			pDC->TextOutW(605, 203 + (i*h), m[i]);
	}
}


// CMy6实验5View 诊断

#ifdef _DEBUG
void CMy6实验5View::AssertValid() const
{
	CView::AssertValid();
}

void CMy6实验5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy6实验5Doc* CMy6实验5View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy6实验5Doc)));
	return (CMy6实验5Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy6实验5View 消息处理程序


void CMy6实验5View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	char c = nChar;
	TEXTMETRIC tm;
	dc.GetTextMetrics(&tm);
	h = tm.tmHeight;
	ss = s;
	s += c;
	CSize z = x += 9;
	if (x >= cr.right) {
		m.Add(ss);
		flag += 1;
		s.Empty();
		cpoint.y += tm.tmHeight;
		cr.bottom += tm.tmHeight;
		Invalidate();
		x = 605;
	}
	dc.TextOut(cpoint.x, cpoint.y, s);
	CView::OnChar(nChar, nRepCnt, nFlags);
}

void CMy6实验5View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	SetCaretPos(point);
	s.Empty();
	cpoint = point;
	CView::OnLButtonDown(nFlags, point);
}
