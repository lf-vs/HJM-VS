
// 5ʵ��5��1��View.cpp : CMy5ʵ��5��1��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "5ʵ��5��1��.h"
#endif

#include "5ʵ��5��1��Doc.h"
#include "5ʵ��5��1��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy5ʵ��5��1��View

IMPLEMENT_DYNCREATE(CMy5ʵ��5��1��View, CView)

BEGIN_MESSAGE_MAP(CMy5ʵ��5��1��View, CView)
	ON_COMMAND(ID_SHOW, &CMy5ʵ��5��1��View::OnShow)
	ON_COMMAND(ID_ShowRectangle, &CMy5ʵ��5��1��View::OnShowrectangle)
	ON_COMMAND(ID_ShowEllipse, &CMy5ʵ��5��1��View::OnShowellipse)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy5ʵ��5��1��View ����/����

CMy5ʵ��5��1��View::CMy5ʵ��5��1��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy5ʵ��5��1��View::~CMy5ʵ��5��1��View()
{
}

BOOL CMy5ʵ��5��1��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy5ʵ��5��1��View ����

void CMy5ʵ��5��1��View::OnDraw(CDC* /*pDC*/)
{
	CMy5ʵ��5��1��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy5ʵ��5��1��View ���

#ifdef _DEBUG
void CMy5ʵ��5��1��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy5ʵ��5��1��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy5ʵ��5��1��Doc* CMy5ʵ��5��1��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy5ʵ��5��1��Doc)));
	return (CMy5ʵ��5��1��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy5ʵ��5��1��View ��Ϣ�������

int set;
CRect cr;
void CMy5ʵ��5��1��View::OnShow()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	set = 1;
	CPen pen(PS_SOLID, 5, RGB(0, 0, 0));
	CPen* oldPen = dc.SelectObject(&pen);
}


void CMy5ʵ��5��1��View::OnShowrectangle()
{
	// TODO: �ڴ���������������
	set = 2;
	//GetClientRect(&cr);
}


void CMy5ʵ��5��1��View::OnShowellipse()
{
	// TODO: �ڴ���������������
	set = 3;
}

CPoint point1,point2;
void CMy5ʵ��5��1��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	point1.x = point.x;
	point1.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMy5ʵ��5��1��View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	point2.x = point.x;
	point2.y = point.y;
	switch (set) {
	case 1:
		dc.MoveTo(point2.x, point2.y);
		dc.LineTo(point1.x, point1.y);
		break;
	case 2:
		cr.left = point1.x;
		cr.top = point1.y;
		cr.right = point2.x;
		cr.bottom = point2.y;
		dc.Rectangle(cr);
		break;
	case 3:
		cr.left = point1.x;
		cr.top = point1.y;
		cr.right = point2.x;
		cr.bottom = point2.y;
		dc.Ellipse(cr);
		break;
	}
	CView::OnLButtonUp(nFlags, point);
}


void CMy5ʵ��5��1��View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnMouseMove(nFlags, point);
}
