
// 10ʵ��2View.cpp : CMy10ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "10ʵ��2.h"
#endif

#include "10ʵ��2Doc.h"
#include "10ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy10ʵ��2View

IMPLEMENT_DYNCREATE(CMy10ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy10ʵ��2View, CView)
END_MESSAGE_MAP()

// CMy10ʵ��2View ����/����

CMy10ʵ��2View::CMy10ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy10ʵ��2View::~CMy10ʵ��2View()
{
}

BOOL CMy10ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy10ʵ��2View ����

void CMy10ʵ��2View::OnDraw(CDC* /*pDC*/)
{
	CMy10ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy10ʵ��2View ���

#ifdef _DEBUG
void CMy10ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy10ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy10ʵ��2Doc* CMy10ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy10ʵ��2Doc)));
	return (CMy10ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy10ʵ��2View ��Ϣ�������
