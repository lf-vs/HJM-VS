
// 10ʵ��1View.cpp : CMy10ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "10ʵ��1.h"
#endif

#include "10ʵ��1Doc.h"
#include "10ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy10ʵ��1View

IMPLEMENT_DYNCREATE(CMy10ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy10ʵ��1View, CView)
END_MESSAGE_MAP()

// CMy10ʵ��1View ����/����

CMy10ʵ��1View::CMy10ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy10ʵ��1View::~CMy10ʵ��1View()
{
}

BOOL CMy10ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy10ʵ��1View ����

void CMy10ʵ��1View::OnDraw(CDC* /*pDC*/)
{
	CMy10ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy10ʵ��1View ���

#ifdef _DEBUG
void CMy10ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy10ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy10ʵ��1Doc* CMy10ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy10ʵ��1Doc)));
	return (CMy10ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy10ʵ��1View ��Ϣ�������
