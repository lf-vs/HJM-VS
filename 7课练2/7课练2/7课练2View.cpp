
// 7����2View.cpp : CMy7����2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "7����2.h"
#endif

#include "7����2Doc.h"
#include "7����2View.h"
#include "MyDia.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy7����2View

IMPLEMENT_DYNCREATE(CMy7����2View, CView)

BEGIN_MESSAGE_MAP(CMy7����2View, CView)
	ON_COMMAND(ID_InPut, &CMy7����2View::OnInput)
END_MESSAGE_MAP()

// CMy7����2View ����/����

CMy7����2View::CMy7����2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy7����2View::~CMy7����2View()
{
}

BOOL CMy7����2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy7����2View ����

void CMy7����2View::OnDraw(CDC* /*pDC*/)
{
	CMy7����2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy7����2View ���

#ifdef _DEBUG
void CMy7����2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy7����2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy7����2Doc* CMy7����2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy7����2Doc)));
	return (CMy7����2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy7����2View ��Ϣ�������


void CMy7����2View::OnInput()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	MyDia dlg;
	int t = dlg.DoModal();
	if (t == IDOK) {
		CString ss1, ss2,h1,h2;
		ss1 = dlg.s2;
		ss2 = dlg.s1;
		h1.Format(_T("������ĵ�һ��Ϊ��%s,�ڶ���Ϊ��%s"), ss1,ss2);
		dc.TextOutW(100, 100, h1);
	}
}
