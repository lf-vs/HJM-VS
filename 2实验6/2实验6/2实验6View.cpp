
// 2ʵ��6View.cpp : CMy2ʵ��6View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2ʵ��6.h"
#endif

#include "2ʵ��6Doc.h"
#include "2ʵ��6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy2ʵ��6View

IMPLEMENT_DYNCREATE(CMy2ʵ��6View, CView)

BEGIN_MESSAGE_MAP(CMy2ʵ��6View, CView)
END_MESSAGE_MAP()

// CMy2ʵ��6View ����/����

CMy2ʵ��6View::CMy2ʵ��6View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy2ʵ��6View::~CMy2ʵ��6View()
{
}

BOOL CMy2ʵ��6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy2ʵ��6View ����

void CMy2ʵ��6View::OnDraw(CDC* /*pDC*/)
{
	CMy2ʵ��6Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CClientDC dc(this);
	dc.TextOutW(100, 100, pDoc->s);
	CString s1;
	s1.Format(_T("%d"), pDoc->A);
	dc.TextOutW(200, 200, s1);
}


// CMy2ʵ��6View ���

#ifdef _DEBUG
void CMy2ʵ��6View::AssertValid() const
{
	CView::AssertValid();
}

void CMy2ʵ��6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy2ʵ��6Doc* CMy2ʵ��6View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy2ʵ��6Doc)));
	return (CMy2ʵ��6Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy2ʵ��6View ��Ϣ�������
