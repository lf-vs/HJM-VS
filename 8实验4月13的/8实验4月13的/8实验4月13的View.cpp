
// 8ʵ��4��13��View.cpp : CMy8ʵ��4��13��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "8ʵ��4��13��.h"
#endif

#include "8ʵ��4��13��Doc.h"
#include "8ʵ��4��13��View.h"
#include "MyDia.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy8ʵ��4��13��View

IMPLEMENT_DYNCREATE(CMy8ʵ��4��13��View, CView)

BEGIN_MESSAGE_MAP(CMy8ʵ��4��13��View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_Menu, &CMy8ʵ��4��13��View::OnMenu)
END_MESSAGE_MAP()

// CMy8ʵ��4��13��View ����/����

CMy8ʵ��4��13��View::CMy8ʵ��4��13��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy8ʵ��4��13��View::~CMy8ʵ��4��13��View()
{
}

BOOL CMy8ʵ��4��13��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy8ʵ��4��13��View ����

void CMy8ʵ��4��13��View::OnDraw(CDC* /*pDC*/)
{
	CMy8ʵ��4��13��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy8ʵ��4��13��View ���

#ifdef _DEBUG
void CMy8ʵ��4��13��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy8ʵ��4��13��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy8ʵ��4��13��Doc* CMy8ʵ��4��13��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy8ʵ��4��13��Doc)));
	return (CMy8ʵ��4��13��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy8ʵ��4��13��View ��Ϣ�������

CString s;

void CMy8ʵ��4��13��View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CFileDialog cfd(true);
	int t = cfd.DoModal();
	if (t == IDOK) {
		s = cfd.GetPathName();
		dc.TextOutW(100, 100, s);
	}

	CView::OnLButtonDblClk(nFlags, point);
}


void CMy8ʵ��4��13��View::OnMenu()
{
	// TODO: �ڴ���������������
	MyDia *dlg = new MyDia;
	UpdateData(true);
	dlg->ss = s;
	dlg->set = true;
	dlg->Create(IDD_DIALOG1);
	dlg->ShowWindow(1);
	UpdateData(false);
}
