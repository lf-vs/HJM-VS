
// 2实验5View.cpp : CMy2实验5View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2实验5.h"
#endif

#include "2实验5Doc.h"
#include "2实验5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy2实验5View

IMPLEMENT_DYNCREATE(CMy2实验5View, CView)

BEGIN_MESSAGE_MAP(CMy2实验5View, CView)
END_MESSAGE_MAP()

// CMy2实验5View 构造/析构

CMy2实验5View::CMy2实验5View()
{
	// TODO: 在此处添加构造代码

}

CMy2实验5View::~CMy2实验5View()
{
}

BOOL CMy2实验5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy2实验5View 绘制

void CMy2实验5View::OnDraw(CDC* /*pDC*/)
{
	CMy2实验5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s1,s2;
	s1.Format(_T("我是***"));
	int A = 10;
	s2.Format(_T("%d"),A);
	CClientDC dc(this);
	dc.TextOutW(100, 200, s1);
	dc.TextOutW(200, 300, s2);
}


// CMy2实验5View 诊断

#ifdef _DEBUG
void CMy2实验5View::AssertValid() const
{
	CView::AssertValid();
}

void CMy2实验5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy2实验5Doc* CMy2实验5View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy2实验5Doc)));
	return (CMy2实验5Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy2实验5View 消息处理程序
