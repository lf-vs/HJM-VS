
// 2ʵ��4View.cpp : CMy2ʵ��4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2ʵ��4.h"
#endif

#include "2ʵ��4Doc.h"
#include "2ʵ��4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy2ʵ��4View

IMPLEMENT_DYNCREATE(CMy2ʵ��4View, CView)

BEGIN_MESSAGE_MAP(CMy2ʵ��4View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy2ʵ��4View ����/����

CMy2ʵ��4View::CMy2ʵ��4View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy2ʵ��4View::~CMy2ʵ��4View()
{
}

BOOL CMy2ʵ��4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy2ʵ��4View ����

void CMy2ʵ��4View::OnDraw(CDC* pDC)
{
	CMy2ʵ��4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect cr;
	this->GetClientRect(&cr);
	CBrush newBrush((COLORREF)0x0000FF00);
	CBrush*oldBrush = pDC->SelectObject(&newBrush);
	pDC->Ellipse(cr);
	pDC->SelectObject(oldBrush);
}


// CMy2ʵ��4View ���

#ifdef _DEBUG
void CMy2ʵ��4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy2ʵ��4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy2ʵ��4Doc* CMy2ʵ��4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy2ʵ��4Doc)));
	return (CMy2ʵ��4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy2ʵ��4View ��Ϣ�������


void CMy2ʵ��4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
}
