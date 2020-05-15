
// 6课练1View.cpp : CMy6课练1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "6课练1.h"
#endif

#include "6课练1Doc.h"
#include "6课练1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy6课练1View

IMPLEMENT_DYNCREATE(CMy6课练1View, CView)

BEGIN_MESSAGE_MAP(CMy6课练1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMy6课练1View::OnFileOpen)
END_MESSAGE_MAP()

// CMy6课练1View 构造/析构

CMy6课练1View::CMy6课练1View()
{
	// TODO: 在此处添加构造代码

}

CMy6课练1View::~CMy6课练1View()
{
}

BOOL CMy6课练1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy6课练1View 绘制

void CMy6课练1View::OnDraw(CDC* /*pDC*/)
{
	CMy6课练1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy6课练1View 诊断

#ifdef _DEBUG
void CMy6课练1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy6课练1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy6课练1Doc* CMy6课练1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy6课练1Doc)));
	return (CMy6课练1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy6课练1View 消息处理程序


void CMy6课练1View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK) {
		CString filename = cfd.GetPathName();
		CImage img;
		int w, h, sx, sy;
		CRect cr;
		GetClientRect(&cr);
		img.Load(filename);

		float cr_ratio = 1.0*cr.Width() / cr.Height();
		float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

		if (cr_ratio > img_ratio) {
			h = cr.Height();
			w = img_ratio*h;
			sx = (cr.Width() - w) / 2;
			sy = 0;
		}
		else {
			w = cr.Width();
			h = w / img_ratio;
			sx = 0;
			sy = (cr.Height() - h) / 2;
		}
		img.Draw(dc.m_hDC, sx, sy, w, h);
	}
}
