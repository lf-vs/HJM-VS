
// 6ʵ��4View.cpp : CMy6ʵ��4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "6ʵ��4.h"
#endif

#include "6ʵ��4Doc.h"
#include "6ʵ��4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy6ʵ��4View

IMPLEMENT_DYNCREATE(CMy6ʵ��4View, CView)

BEGIN_MESSAGE_MAP(CMy6ʵ��4View, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy6ʵ��4View ����/����

CMy6ʵ��4View::CMy6ʵ��4View()
{
	// TODO: �ڴ˴���ӹ������
	s = "";
}

CMy6ʵ��4View::~CMy6ʵ��4View()
{
}

BOOL CMy6ʵ��4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy6ʵ��4View ����

void CMy6ʵ��4View::OnDraw(CDC* /*pDC*/)
{
	CMy6ʵ��4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy6ʵ��4View ���

#ifdef _DEBUG
void CMy6ʵ��4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy6ʵ��4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy6ʵ��4Doc* CMy6ʵ��4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy6ʵ��4Doc)));
	return (CMy6ʵ��4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy6ʵ��4View ��Ϣ�������


void CMy6ʵ��4View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	s = s + (char)nChar;
	dc.TextOutW(cpoint.x,cpoint.y,s);
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void CMy6ʵ��4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SetCaretPos(point);
	s.Empty();
	cpoint = point;
	CView::OnLButtonDown(nFlags, point);
}
