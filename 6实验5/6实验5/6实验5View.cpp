
// 6ʵ��5View.cpp : CMy6ʵ��5View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "6ʵ��5.h"
#endif

#include "6ʵ��5Doc.h"
#include "6ʵ��5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy6ʵ��5View

IMPLEMENT_DYNCREATE(CMy6ʵ��5View, CView)

BEGIN_MESSAGE_MAP(CMy6ʵ��5View, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy6ʵ��5View ����/����

CMy6ʵ��5View::CMy6ʵ��5View()
{
	// TODO: �ڴ˴���ӹ������
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

CMy6ʵ��5View::~CMy6ʵ��5View()
{
}

BOOL CMy6ʵ��5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy6ʵ��5View ����

void CMy6ʵ��5View::OnDraw(CDC* pDC)
{
	CMy6ʵ��5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(cr);
	if (flag) {
		for (int i = 0;i < flag;i++)
			pDC->TextOutW(605, 203 + (i*h), m[i]);
	}
}


// CMy6ʵ��5View ���

#ifdef _DEBUG
void CMy6ʵ��5View::AssertValid() const
{
	CView::AssertValid();
}

void CMy6ʵ��5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy6ʵ��5Doc* CMy6ʵ��5View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy6ʵ��5Doc)));
	return (CMy6ʵ��5Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy6ʵ��5View ��Ϣ�������


void CMy6ʵ��5View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
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

void CMy6ʵ��5View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SetCaretPos(point);
	s.Empty();
	cpoint = point;
	CView::OnLButtonDown(nFlags, point);
}
