
// 2ʵ��3View.cpp : CMy2ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2ʵ��3.h"
#endif

#include "2ʵ��3Doc.h"
#include "2ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy2ʵ��3View

IMPLEMENT_DYNCREATE(CMy2ʵ��3View, CView)

BEGIN_MESSAGE_MAP(CMy2ʵ��3View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy2ʵ��3View ����/����

CMy2ʵ��3View::CMy2ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy2ʵ��3View::~CMy2ʵ��3View()
{
}

BOOL CMy2ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy2ʵ��3View ����

void CMy2ʵ��3View::OnDraw(CDC* /*pDC*/)
{
	CMy2ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy2ʵ��3View ���

#ifdef _DEBUG
void CMy2ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy2ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy2ʵ��3Doc* CMy2ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy2ʵ��3Doc)));
	return (CMy2ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy2ʵ��3View ��Ϣ�������


void CMy2ʵ��3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect cr;
	this->GetClientRect(&cr);
	CClientDC dc(this);
	dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}
