
// 5实验4View.cpp : CMy5实验4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "5实验4.h"
#endif

#include "5实验4Doc.h"
#include "5实验4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy5实验4View

IMPLEMENT_DYNCREATE(CMy5实验4View, CView)

BEGIN_MESSAGE_MAP(CMy5实验4View, CView)
END_MESSAGE_MAP()

// CMy5实验4View 构造/析构

CMy5实验4View::CMy5实验4View()
{
	// TODO: 在此处添加构造代码
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth=BM.bmWidth;
	m_nHeight=BM.bmHeight;
}

CMy5实验4View::~CMy5实验4View()
{
}

BOOL CMy5实验4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy5实验4View 绘制

void CMy5实验4View::OnDraw(CDC* pDC)
{
	CMy5实验4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	 pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);

}


// CMy5实验4View 诊断

#ifdef _DEBUG
void CMy5实验4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy5实验4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy5实验4Doc* CMy5实验4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy5实验4Doc)));
	return (CMy5实验4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy5实验4View 消息处理程序
