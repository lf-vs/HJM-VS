
// 8ʵ��2��2��View.cpp : CMy8ʵ��2��2��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "8ʵ��2��2��.h"
#endif

#include "8ʵ��2��2��Doc.h"
#include "8ʵ��2��2��View.h"
#include "MyDia0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy8ʵ��2��2��View

IMPLEMENT_DYNCREATE(CMy8ʵ��2��2��View, CView)

BEGIN_MESSAGE_MAP(CMy8ʵ��2��2��View, CView)
	ON_COMMAND(ID_Onput, &CMy8ʵ��2��2��View::OnOnput)
END_MESSAGE_MAP()

// CMy8ʵ��2��2��View ����/����

CMy8ʵ��2��2��View::CMy8ʵ��2��2��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy8ʵ��2��2��View::~CMy8ʵ��2��2��View()
{
}

BOOL CMy8ʵ��2��2��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy8ʵ��2��2��View ����

void CMy8ʵ��2��2��View::OnDraw(CDC* /*pDC*/)
{
	CMy8ʵ��2��2��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy8ʵ��2��2��View ���

#ifdef _DEBUG
void CMy8ʵ��2��2��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy8ʵ��2��2��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy8ʵ��2��2��Doc* CMy8ʵ��2��2��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy8ʵ��2��2��Doc)));
	return (CMy8ʵ��2��2��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy8ʵ��2��2��View ��Ϣ�������


void CMy8ʵ��2��2��View::OnOnput()
{
	// TODO: �ڴ���������������
	MyDia0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK) {
		int X, Y, A, B;
		X = dlg.x;
		Y= dlg.y;
		A= dlg.a;
		B= dlg.b;
		CRect cr(X - A, Y - B, X + A, Y + B);
		GetDC()->Ellipse(cr);
	}
}
