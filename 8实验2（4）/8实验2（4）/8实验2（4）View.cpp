
// 8ʵ��2��4��View.cpp : CMy8ʵ��2��4��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "8ʵ��2��4��.h"
#endif

#include "8ʵ��2��4��Doc.h"
#include "8ʵ��2��4��View.h"
#include "mydia.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy8ʵ��2��4��View

IMPLEMENT_DYNCREATE(CMy8ʵ��2��4��View, CView)

BEGIN_MESSAGE_MAP(CMy8ʵ��2��4��View, CView)
	ON_COMMAND(ID_Menu, &CMy8ʵ��2��4��View::OnMenu)
END_MESSAGE_MAP()

// CMy8ʵ��2��4��View ����/����

CMy8ʵ��2��4��View::CMy8ʵ��2��4��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy8ʵ��2��4��View::~CMy8ʵ��2��4��View()
{
}

BOOL CMy8ʵ��2��4��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy8ʵ��2��4��View ����

void CMy8ʵ��2��4��View::OnDraw(CDC* pDC)
{
	CMy8ʵ��2��4��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CBrush *oldbrush, brush;
	brush.CreateSolidBrush(RGB(c1, c2, c3));
	oldbrush = pDC->SelectObject(&brush);
	pDC->Ellipse(pDoc->cr);
	pDC->SelectObject(oldbrush);
}


// CMy8ʵ��2��4��View ���

#ifdef _DEBUG
void CMy8ʵ��2��4��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy8ʵ��2��4��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy8ʵ��2��4��Doc* CMy8ʵ��2��4��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy8ʵ��2��4��Doc)));
	return (CMy8ʵ��2��4��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy8ʵ��2��4��View ��Ϣ�������


void CMy8ʵ��2��4��View::OnMenu()
{
	// TODO: �ڴ���������������
	mydia dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {
		c1 = dlg.color1;
		c2 = dlg.color2;
		c3 = dlg.color3;
	}
	Invalidate();
}
