
// 7ʵ��4View.cpp : CMy7ʵ��4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "7ʵ��4.h"
#endif

#include "7ʵ��4Doc.h"
#include "7ʵ��4View.h"
#include "Dia0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy7ʵ��4View

IMPLEMENT_DYNCREATE(CMy7ʵ��4View, CView)

BEGIN_MESSAGE_MAP(CMy7ʵ��4View, CView)
	ON_COMMAND(ID_Put, &CMy7ʵ��4View::OnPut)
END_MESSAGE_MAP()

// CMy7ʵ��4View ����/����

CMy7ʵ��4View::CMy7ʵ��4View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy7ʵ��4View::~CMy7ʵ��4View()
{
}

BOOL CMy7ʵ��4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy7ʵ��4View ����

void CMy7ʵ��4View::OnDraw(CDC* /*pDC*/)
{
	CMy7ʵ��4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy7ʵ��4View ���

#ifdef _DEBUG
void CMy7ʵ��4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy7ʵ��4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy7ʵ��4Doc* CMy7ʵ��4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy7ʵ��4Doc)));
	return (CMy7ʵ��4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy7ʵ��4View ��Ϣ�������


void CMy7ʵ��4View::OnPut()
{
	// TODO: �ڴ���������������
	Dia0 dlg;
	int t = dlg.DoModal();
}
