
// 5ʵ��3View.cpp : CMy5ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "5ʵ��3.h"
#endif

#include "5ʵ��3Doc.h"
#include "5ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy5ʵ��3View

IMPLEMENT_DYNCREATE(CMy5ʵ��3View, CView)

BEGIN_MESSAGE_MAP(CMy5ʵ��3View, CView)
	ON_COMMAND(ID_SHOWNAME, &CMy5ʵ��3View::OnShowname)
END_MESSAGE_MAP()

// CMy5ʵ��3View ����/����

CMy5ʵ��3View::CMy5ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy5ʵ��3View::~CMy5ʵ��3View()
{
}

BOOL CMy5ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy5ʵ��3View ����

void CMy5ʵ��3View::OnDraw(CDC* /*pDC*/)
{
	CMy5ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy5ʵ��3View ���

#ifdef _DEBUG
void CMy5ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy5ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy5ʵ��3Doc* CMy5ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy5ʵ��3Doc)));
	return (CMy5ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy5ʵ��3View ��Ϣ�������


void CMy5ʵ��3View::OnShowname()
{
	// TODO: �ڴ���������������
	CString s = _T("��ĳ��");
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
}
