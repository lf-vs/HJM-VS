
// USingW32DllView.cpp : CUSingW32DllView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "USingW32Dll.h"
#endif

#include "USingW32DllDoc.h"
#include "USingW32DllView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include "wh.h"

// CUSingW32DllView

IMPLEMENT_DYNCREATE(CUSingW32DllView, CView)

BEGIN_MESSAGE_MAP(CUSingW32DllView, CView)
END_MESSAGE_MAP()

// CUSingW32DllView ����/����

CUSingW32DllView::CUSingW32DllView()
{
	// TODO: �ڴ˴���ӹ������

}

CUSingW32DllView::~CUSingW32DllView()
{
}

BOOL CUSingW32DllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUSingW32DllView ����

void CUSingW32DllView::OnDraw(CDC* pDC)
{
	CUSingW32DllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	FAC A ;
	CString s, ss;
	s = CString(pchar());
	pDC->TextOutW(100, 100, s);
	ss.Format(_T("%f"),A.convert(30.0));
	pDC->TextOutW(300, 100, ss);
}


// CUSingW32DllView ���

#ifdef _DEBUG
void CUSingW32DllView::AssertValid() const
{
	CView::AssertValid();
}

void CUSingW32DllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUSingW32DllDoc* CUSingW32DllView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUSingW32DllDoc)));
	return (CUSingW32DllDoc*)m_pDocument;
}
#endif //_DEBUG


// CUSingW32DllView ��Ϣ�������
