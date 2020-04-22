
// 7课练1View.cpp : CMy7课练1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "7课练1.h"
#endif

#include "7课练1Doc.h"
#include "7课练1View.h"
#include "MyDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy7课练1View

IMPLEMENT_DYNCREATE(CMy7课练1View, CView)

BEGIN_MESSAGE_MAP(CMy7课练1View, CView)
	ON_COMMAND(ID_OnPut, &CMy7课练1View::OnOnput)
END_MESSAGE_MAP()

// CMy7课练1View 构造/析构

CMy7课练1View::CMy7课练1View()
{
	// TODO: 在此处添加构造代码

}

CMy7课练1View::~CMy7课练1View()
{
}

BOOL CMy7课练1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy7课练1View 绘制

void CMy7课练1View::OnDraw(CDC* /*pDC*/)
{
	CMy7课练1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy7课练1View 诊断

#ifdef _DEBUG
void CMy7课练1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy7课练1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy7课练1Doc* CMy7课练1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy7课练1Doc)));
	return (CMy7课练1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy7课练1View 消息处理程序


void CMy7课练1View::OnOnput()
{
	// TODO: 在此添加命令处理程序代码
	CString s;
	CClientDC dc(this);
	MyDialog dlg;
	int t = dlg.DoModal();
	if (t == IDOK) {
		s.Format(_T("你已退出对话框"));
		dc.TextOutW(100, 100, s);
	}
}
