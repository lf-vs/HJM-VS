
// 7����1View.cpp : CMy7����1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "7����1.h"
#endif

#include "7����1Doc.h"
#include "7����1View.h"
#include "MyDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy7����1View

IMPLEMENT_DYNCREATE(CMy7����1View, CView)

BEGIN_MESSAGE_MAP(CMy7����1View, CView)
	ON_COMMAND(ID_OnPut, &CMy7����1View::OnOnput)
END_MESSAGE_MAP()

// CMy7����1View ����/����

CMy7����1View::CMy7����1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy7����1View::~CMy7����1View()
{
}

BOOL CMy7����1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy7����1View ����

void CMy7����1View::OnDraw(CDC* /*pDC*/)
{
	CMy7����1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy7����1View ���

#ifdef _DEBUG
void CMy7����1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy7����1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy7����1Doc* CMy7����1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy7����1Doc)));
	return (CMy7����1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy7����1View ��Ϣ�������


void CMy7����1View::OnOnput()
{
	// TODO: �ڴ���������������
	CString s;
	CClientDC dc(this);
	MyDialog dlg;
	int t = dlg.DoModal();
	if (t == IDOK) {
		s.Format(_T("�����˳��Ի���"));
		dc.TextOutW(100, 100, s);
	}
}
