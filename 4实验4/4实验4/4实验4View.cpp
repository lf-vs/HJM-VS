
// 4ʵ��4View.cpp : CMy4ʵ��4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "4ʵ��4.h"
#endif

#include "4ʵ��4Doc.h"
#include "4ʵ��4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy4ʵ��4View

IMPLEMENT_DYNCREATE(CMy4ʵ��4View, CView)

BEGIN_MESSAGE_MAP(CMy4ʵ��4View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMy4ʵ��4View ����/����

CMy4ʵ��4View::CMy4ʵ��4View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy4ʵ��4View::~CMy4ʵ��4View()
{
}

BOOL CMy4ʵ��4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy4ʵ��4View ����

void CMy4ʵ��4View::OnDraw(CDC* pDC)
{
	CMy4ʵ��4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
	  pDC->Ellipse(pDoc->cr);
	if (pDoc->set) {
		int i = 0;
		SetTimer(i, 100, NULL);
		pDoc->set = false;
	}
	  
}


// CMy4ʵ��4View ���

#ifdef _DEBUG
void CMy4ʵ��4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy4ʵ��4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy4ʵ��4Doc* CMy4ʵ��4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy4ʵ��4Doc)));
	return (CMy4ʵ��4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy4ʵ��4View ��Ϣ�������
int flag = 1;
void CMy4ʵ��4View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy4ʵ��4Doc* pDoc = GetDocument();
	CRect rect;
	GetClientRect(&rect);
	int i = nIDEvent;
		if (pDoc->cr.bottom >= rect.bottom)
			flag = 0;
		if (flag == 1) {
			pDoc->cr.top += 10;
			pDoc->cr.bottom += 10;
		}
		else {
			pDoc->cr.top -= 10;
			pDoc->cr.bottom -= 10;
		}
		Invalidate();
	
	CView::OnTimer(nIDEvent);
}
