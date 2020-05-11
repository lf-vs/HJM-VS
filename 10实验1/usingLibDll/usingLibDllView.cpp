
// usingLibDllView.cpp : CusingLibDllView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "usingLibDll.h"
#endif

#include "usingLibDllDoc.h"
#include "usingLibDllView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include "win32.h"

// CusingLibDllView

IMPLEMENT_DYNCREATE(CusingLibDllView, CView)

BEGIN_MESSAGE_MAP(CusingLibDllView, CView)
END_MESSAGE_MAP()

// CusingLibDllView ����/����

CusingLibDllView::CusingLibDllView()
{
	// TODO: �ڴ˴���ӹ������

}

CusingLibDllView::~CusingLibDllView()
{
}

BOOL CusingLibDllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CusingLibDllView ����

void CusingLibDllView::OnDraw(CDC* pDC)
{
	CusingLibDllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s,ss;
	s = CString(pchar());
	pDC->TextOutW(100, 100, s);
	//int a;
	//a = factorial(5);
	ss.Format(_T("%d"), factorial(10));
	pDC->TextOutW(300, 100, ss);
}


// CusingLibDllView ���

#ifdef _DEBUG
void CusingLibDllView::AssertValid() const
{
	CView::AssertValid();
}

void CusingLibDllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CusingLibDllDoc* CusingLibDllView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CusingLibDllDoc)));
	return (CusingLibDllDoc*)m_pDocument;
}
#endif //_DEBUG


// CusingLibDllView ��Ϣ�������
