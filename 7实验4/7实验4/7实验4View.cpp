
// 7实验4View.cpp : CMy7实验4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "7实验4.h"
#endif

#include "7实验4Doc.h"
#include "7实验4View.h"
#include "Dia0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy7实验4View

IMPLEMENT_DYNCREATE(CMy7实验4View, CView)

BEGIN_MESSAGE_MAP(CMy7实验4View, CView)
	ON_COMMAND(ID_Put, &CMy7实验4View::OnPut)
END_MESSAGE_MAP()

// CMy7实验4View 构造/析构

CMy7实验4View::CMy7实验4View()
{
	// TODO: 在此处添加构造代码

}

CMy7实验4View::~CMy7实验4View()
{
}

BOOL CMy7实验4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy7实验4View 绘制

void CMy7实验4View::OnDraw(CDC* /*pDC*/)
{
	CMy7实验4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy7实验4View 诊断

#ifdef _DEBUG
void CMy7实验4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy7实验4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy7实验4Doc* CMy7实验4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy7实验4Doc)));
	return (CMy7实验4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy7实验4View 消息处理程序


void CMy7实验4View::OnPut()
{
	// TODO: 在此添加命令处理程序代码
	Dia0 dlg;
	int t = dlg.DoModal();
}
