
// 7ʵ��3View.cpp : CMy7ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "7ʵ��3.h"
#endif

#include "7ʵ��3Doc.h"
#include "7ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy7ʵ��3View

IMPLEMENT_DYNCREATE(CMy7ʵ��3View, CView)

BEGIN_MESSAGE_MAP(CMy7ʵ��3View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy7ʵ��3View ����/����

CMy7ʵ��3View::CMy7ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������
	set = true;
	flag = 0;
}

CMy7ʵ��3View::~CMy7ʵ��3View()
{
}

BOOL CMy7ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy7ʵ��3View ����

void CMy7ʵ��3View::OnDraw(CDC* /*pDC*/)
{
	CMy7ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if (set) {
		SetTimer(1, rand() % 400 + 100, NULL);
		set = false;
	}

	CClientDC dc(this);
	this->GetClientRect(cert);
	cr.left = cert.bottom / 3;
	cr.top= cert.bottom / 3;
	cr.bottom = cert.bottom / 3 * 2;
	cr.right = cert.bottom / 3 + 50;
	dc.Ellipse(cr);
	//Invalidate();
}


// CMy7ʵ��3View ���

#ifdef _DEBUG
void CMy7ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy7ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy7ʵ��3Doc* CMy7ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy7ʵ��3Doc)));
	return (CMy7ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy7ʵ��3View ��Ϣ�������


void CMy7ʵ��3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int i = nIDEvent;
	if (n == 1)
	{
		if (cr.right > cert.right)
		{
			flag = 1;
		}
		if (cr.left < cert.left)
		{
			flag = 0;
		}
		if (flag == 1)
		{
			cr.right -= 10;
			cr.left -= 10;
		}
		if (flag == 0)
		{
			cr.left += 10;
			cr.right += 10;
		}
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}


void CMy7ʵ��3View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	CView::OnLButtonDblClk(nFlags, point);
	n = 0;
}


void CMy7ʵ��3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	n = 1;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
