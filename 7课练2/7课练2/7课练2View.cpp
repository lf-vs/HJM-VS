
// 7课练2View.cpp : CMy7课练2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "7课练2.h"
#endif

#include "7课练2Doc.h"
#include "7课练2View.h"
#include "MyDia.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy7课练2View

IMPLEMENT_DYNCREATE(CMy7课练2View, CView)

BEGIN_MESSAGE_MAP(CMy7课练2View, CView)
	ON_COMMAND(ID_InPut, &CMy7课练2View::OnInput)
END_MESSAGE_MAP()

// CMy7课练2View 构造/析构

CMy7课练2View::CMy7课练2View()
{
	// TODO: 在此处添加构造代码

}

CMy7课练2View::~CMy7课练2View()
{
}

BOOL CMy7课练2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy7课练2View 绘制

void CMy7课练2View::OnDraw(CDC* /*pDC*/)
{
	CMy7课练2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy7课练2View 诊断

#ifdef _DEBUG
void CMy7课练2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy7课练2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy7课练2Doc* CMy7课练2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy7课练2Doc)));
	return (CMy7课练2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy7课练2View 消息处理程序


void CMy7课练2View::OnInput()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	MyDia dlg;
	int t = dlg.DoModal();
	if (t == IDOK) {
		CString ss1, ss2,h1,h2;
		ss1 = dlg.s2;
		ss2 = dlg.s1;
		h1.Format(_T("交换后的第一个为：%s,第二个为：%s"), ss1,ss2);
		dc.TextOutW(100, 100, h1);
	}
}
