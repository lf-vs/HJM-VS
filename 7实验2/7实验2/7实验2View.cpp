
// 7ʵ��2View.cpp : CMy7ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "7ʵ��2.h"
#endif

#include "7ʵ��2Doc.h"
#include "7ʵ��2View.h"
#include "MyDia.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy7ʵ��2View

IMPLEMENT_DYNCREATE(CMy7ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy7ʵ��2View, CView)
	ON_COMMAND(ID_OnPut, &CMy7ʵ��2View::OnOnput)
END_MESSAGE_MAP()

// CMy7ʵ��2View ����/����

CMy7ʵ��2View::CMy7ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy7ʵ��2View::~CMy7ʵ��2View()
{
}

BOOL CMy7ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy7ʵ��2View ����

void CMy7ʵ��2View::OnDraw(CDC* /*pDC*/)
{
	CMy7ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy7ʵ��2View ���

#ifdef _DEBUG
void CMy7ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy7ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy7ʵ��2Doc* CMy7ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy7ʵ��2Doc)));
	return (CMy7ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy7ʵ��2View ��Ϣ�������


void CMy7ʵ��2View::OnOnput()
{
	// TODO: �ڴ���������������
	MyDia dlg;
	int t = dlg.DoModal();
}
