
// 2ʵ��5View.cpp : CMy2ʵ��5View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2ʵ��5.h"
#endif

#include "2ʵ��5Doc.h"
#include "2ʵ��5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy2ʵ��5View

IMPLEMENT_DYNCREATE(CMy2ʵ��5View, CView)

BEGIN_MESSAGE_MAP(CMy2ʵ��5View, CView)
END_MESSAGE_MAP()

// CMy2ʵ��5View ����/����

CMy2ʵ��5View::CMy2ʵ��5View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy2ʵ��5View::~CMy2ʵ��5View()
{
}

BOOL CMy2ʵ��5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy2ʵ��5View ����

void CMy2ʵ��5View::OnDraw(CDC* /*pDC*/)
{
	CMy2ʵ��5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s1,s2;
	s1.Format(_T("����***"));
	int A = 10;
	s2.Format(_T("%d"),A);
	CClientDC dc(this);
	dc.TextOutW(100, 200, s1);
	dc.TextOutW(200, 300, s2);
}


// CMy2ʵ��5View ���

#ifdef _DEBUG
void CMy2ʵ��5View::AssertValid() const
{
	CView::AssertValid();
}

void CMy2ʵ��5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy2ʵ��5Doc* CMy2ʵ��5View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy2ʵ��5Doc)));
	return (CMy2ʵ��5Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy2ʵ��5View ��Ϣ�������
