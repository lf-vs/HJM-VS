
// 9����1View.cpp : CMy9����1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "9����1.h"
#endif

#include "9����1Doc.h"
#include "9����1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include<fstream>
#include<string>
#include<iostream>
using namespace std;

// CMy9����1View

IMPLEMENT_DYNCREATE(CMy9����1View, CView)

BEGIN_MESSAGE_MAP(CMy9����1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMy9����1View::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVE_AS, &CMy9����1View::OnFileSaveAs)
END_MESSAGE_MAP()

// CMy9����1View ����/����

CMy9����1View::CMy9����1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy9����1View::~CMy9����1View()
{
}

BOOL CMy9����1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy9����1View ����

void CMy9����1View::OnDraw(CDC* /*pDC*/)
{
	CMy9����1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy9����1View ���

#ifdef _DEBUG
void CMy9����1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy9����1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy9����1Doc* CMy9����1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy9����1Doc)));
	return (CMy9����1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy9����1View ��Ϣ�������


void CMy9����1View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CMy9����1Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK) {
		pDoc->filename = cfd.GetPathName();
		dc.TextOutW(50, 50, pDoc->filename);
	}
}


void CMy9����1View::OnFileSaveAs()
{
	// TODO: �ڴ���������������
}
