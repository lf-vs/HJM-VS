
// 10ʵ��View.cpp : CMy10ʵ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "10ʵ��.h"
#endif

#include "10ʵ��Doc.h"
#include "10ʵ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy10ʵ��View

IMPLEMENT_DYNCREATE(CMy10ʵ��View, CView)

BEGIN_MESSAGE_MAP(CMy10ʵ��View, CView)
END_MESSAGE_MAP()

// CMy10ʵ��View ����/����

CMy10ʵ��View::CMy10ʵ��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy10ʵ��View::~CMy10ʵ��View()
{
}

BOOL CMy10ʵ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy10ʵ��View ����

void CMy10ʵ��View::OnDraw(CDC* /*pDC*/)
{
	CMy10ʵ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy10ʵ��View ���

#ifdef _DEBUG
void CMy10ʵ��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy10ʵ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy10ʵ��Doc* CMy10ʵ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy10ʵ��Doc)));
	return (CMy10ʵ��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy10ʵ��View ��Ϣ�������
