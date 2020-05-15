
// 6����1View.cpp : CMy6����1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "6����1.h"
#endif

#include "6����1Doc.h"
#include "6����1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy6����1View

IMPLEMENT_DYNCREATE(CMy6����1View, CView)

BEGIN_MESSAGE_MAP(CMy6����1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMy6����1View::OnFileOpen)
END_MESSAGE_MAP()

// CMy6����1View ����/����

CMy6����1View::CMy6����1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy6����1View::~CMy6����1View()
{
}

BOOL CMy6����1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy6����1View ����

void CMy6����1View::OnDraw(CDC* /*pDC*/)
{
	CMy6����1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy6����1View ���

#ifdef _DEBUG
void CMy6����1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy6����1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy6����1Doc* CMy6����1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy6����1Doc)));
	return (CMy6����1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy6����1View ��Ϣ�������


void CMy6����1View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK) {
		CString filename = cfd.GetPathName();
		CImage img;
		int w, h, sx, sy;
		CRect cr;
		GetClientRect(&cr);
		img.Load(filename);

		float cr_ratio = 1.0*cr.Width() / cr.Height();
		float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

		if (cr_ratio > img_ratio) {
			h = cr.Height();
			w = img_ratio*h;
			sx = (cr.Width() - w) / 2;
			sy = 0;
		}
		else {
			w = cr.Width();
			h = w / img_ratio;
			sx = 0;
			sy = (cr.Height() - h) / 2;
		}
		img.Draw(dc.m_hDC, sx, sy, w, h);
	}
}
