
// 2ʵ��2View.cpp : CMy2ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2ʵ��2.h"
#endif

#include "2ʵ��2Doc.h"
#include "2ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy2ʵ��2View

IMPLEMENT_DYNCREATE(CMy2ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy2ʵ��2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy2ʵ��2View ����/����

CMy2ʵ��2View::CMy2ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������
	ca.SetSize(100);
}

CMy2ʵ��2View::~CMy2ʵ��2View()
{
}

BOOL CMy2ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy2ʵ��2View ����

void CMy2ʵ��2View::OnDraw(CDC* pDC)
{
	CMy2ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	for (int i = 0;i < ca.GetSize();i++) {
		pDC->Ellipse(ca.GetAt(i));
	}
}


// CMy2ʵ��2View ���

#ifdef _DEBUG
void CMy2ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy2ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy2ʵ��2Doc* CMy2ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy2ʵ��2Doc)));
	return (CMy2ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy2ʵ��2View ��Ϣ�������


void CMy2ʵ��2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int t = rand() % 50 + 100;
	CRect cr(point.x, point.y, point.x+t, point.y+t);
	ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
