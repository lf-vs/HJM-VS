
// 1������ϰView.cpp : CMy1������ϰView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "1������ϰ.h"
#endif

#include "1������ϰDoc.h"
#include "1������ϰView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy1������ϰView

IMPLEMENT_DYNCREATE(CMy1������ϰView, CView)

BEGIN_MESSAGE_MAP(CMy1������ϰView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy1������ϰView ����/����

CMy1������ϰView::CMy1������ϰView()
{
	// TODO: �ڴ˴���ӹ������
	s2 = "��Ϊÿ���˶��ڸ�������ս��";
}

CMy1������ϰView::~CMy1������ϰView()
{
}

BOOL CMy1������ϰView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy1������ϰView ����

void CMy1������ϰView::OnDraw(CDC* pDC)
{
	CMy1������ϰDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy1������ϰView ���

#ifdef _DEBUG
void CMy1������ϰView::AssertValid() const
{
	CView::AssertValid();
}

void CMy1������ϰView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy1������ϰDoc* CMy1������ϰView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy1������ϰDoc)));
	return (CMy1������ϰDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy1������ϰView ��Ϣ�������


void CMy1������ϰView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy1������ϰDoc* pDoc = GetDocument();
	CString s=pDoc->s1+ s2;
	//s.Format(__T());
	CClientDC dc(this);
	dc.TextOutW(point.x, point.y, s);
	CView::OnLButtonDown(nFlags, point);
}
