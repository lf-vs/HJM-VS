
// 2实验6View.cpp : CMy2实验6View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2实验6.h"
#endif

#include "2实验6Doc.h"
#include "2实验6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy2实验6View

IMPLEMENT_DYNCREATE(CMy2实验6View, CView)

BEGIN_MESSAGE_MAP(CMy2实验6View, CView)
END_MESSAGE_MAP()

// CMy2实验6View 构造/析构

CMy2实验6View::CMy2实验6View()
{
	// TODO: 在此处添加构造代码

}

CMy2实验6View::~CMy2实验6View()
{
}

BOOL CMy2实验6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy2实验6View 绘制

void CMy2实验6View::OnDraw(CDC* /*pDC*/)
{
	CMy2实验6Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CClientDC dc(this);
	dc.TextOutW(100, 100, pDoc->s);
	CString s1;
	s1.Format(_T("%d"), pDoc->A);
	dc.TextOutW(200, 200, s1);
}


// CMy2实验6View 诊断

#ifdef _DEBUG
void CMy2实验6View::AssertValid() const
{
	CView::AssertValid();
}

void CMy2实验6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy2实验6Doc* CMy2实验6View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy2实验6Doc)));
	return (CMy2实验6Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy2实验6View 消息处理程序
