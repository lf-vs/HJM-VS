
// 5ʵ��4View.cpp : CMy5ʵ��4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "5ʵ��4.h"
#endif

#include "5ʵ��4Doc.h"
#include "5ʵ��4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy5ʵ��4View

IMPLEMENT_DYNCREATE(CMy5ʵ��4View, CView)

BEGIN_MESSAGE_MAP(CMy5ʵ��4View, CView)
END_MESSAGE_MAP()

// CMy5ʵ��4View ����/����

CMy5ʵ��4View::CMy5ʵ��4View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth=BM.bmWidth;
	m_nHeight=BM.bmHeight;
}

CMy5ʵ��4View::~CMy5ʵ��4View()
{
}

BOOL CMy5ʵ��4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy5ʵ��4View ����

void CMy5ʵ��4View::OnDraw(CDC* pDC)
{
	CMy5ʵ��4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	 pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);

}


// CMy5ʵ��4View ���

#ifdef _DEBUG
void CMy5ʵ��4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy5ʵ��4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy5ʵ��4Doc* CMy5ʵ��4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy5ʵ��4Doc)));
	return (CMy5ʵ��4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy5ʵ��4View ��Ϣ�������
