
// 3ʵ��3View.cpp : CMy3ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3ʵ��3.h"
#endif

#include "3ʵ��3Doc.h"
#include "3ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3ʵ��3View

IMPLEMENT_DYNCREATE(CMy3ʵ��3View, CView)

BEGIN_MESSAGE_MAP(CMy3ʵ��3View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy3ʵ��3View ����/����

CMy3ʵ��3View::CMy3ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy3ʵ��3View::~CMy3ʵ��3View()
{
}

BOOL CMy3ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy3ʵ��3View ����

void CMy3ʵ��3View::OnDraw(CDC* /*pDC*/)
{
	CMy3ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy3ʵ��3View ���

#ifdef _DEBUG
void CMy3ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3ʵ��3Doc* CMy3ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3ʵ��3Doc)));
	return (CMy3ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3ʵ��3View ��Ϣ�������


void CMy3ʵ��3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy3ʵ��3Doc* pDoc = GetDocument();
	int C = pDoc->A + pDoc->B;
	CString s;
	s.Format(_T("A+B=%d"), C);
	CClientDC dc(this);
	dc.TextOutW(point.x, point.y, s);
	CView::OnLButtonDown(nFlags, point);
}
