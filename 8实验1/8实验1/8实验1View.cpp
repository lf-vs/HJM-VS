
// 8ʵ��1View.cpp : CMy8ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "8ʵ��1.h"
#endif

#include "8ʵ��1Doc.h"
#include "8ʵ��1View.h"
#include "MyDia.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy8ʵ��1View

IMPLEMENT_DYNCREATE(CMy8ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy8ʵ��1View, CView)
	ON_COMMAND(ID_OnPut, &CMy8ʵ��1View::OnOnput)
END_MESSAGE_MAP()

// CMy8ʵ��1View ����/����

CMy8ʵ��1View::CMy8ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy8ʵ��1View::~CMy8ʵ��1View()
{
}

BOOL CMy8ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy8ʵ��1View ����

void CMy8ʵ��1View::OnDraw(CDC* /*pDC*/)
{
	CMy8ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy8ʵ��1View ���

#ifdef _DEBUG
void CMy8ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy8ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy8ʵ��1Doc* CMy8ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy8ʵ��1Doc)));
	return (CMy8ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy8ʵ��1View ��Ϣ�������


void CMy8ʵ��1View::OnOnput()
{
	// TODO: �ڴ���������������
	MyDia dlg;
	int t = dlg.DoModal();
}
