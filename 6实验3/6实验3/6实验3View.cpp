
// 6ʵ��3View.cpp : CMy6ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "6ʵ��3.h"
#endif

#include "6ʵ��3Doc.h"
#include "6ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy6ʵ��3View

IMPLEMENT_DYNCREATE(CMy6ʵ��3View, CView)

BEGIN_MESSAGE_MAP(CMy6ʵ��3View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CMy6ʵ��3View ����/����

CMy6ʵ��3View::CMy6ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������
	s = "";
}

CMy6ʵ��3View::~CMy6ʵ��3View()
{
}

BOOL CMy6ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy6ʵ��3View ����

void CMy6ʵ��3View::OnDraw(CDC* pDC)
{
	CMy6ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->cr);
}


// CMy6ʵ��3View ���

#ifdef _DEBUG
void CMy6ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy6ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy6ʵ��3Doc* CMy6ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy6ʵ��3Doc)));
	return (CMy6ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy6ʵ��3View ��Ϣ�������


void CMy6ʵ��3View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy6ʵ��3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	s = s + (char) nChar;
	dc.TextOutW(pDoc->cr.left+10, pDoc->cr.top+10, s);
	CView::OnChar(nChar, nRepCnt, nFlags);
}
