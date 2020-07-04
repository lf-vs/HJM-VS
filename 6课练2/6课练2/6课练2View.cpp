
// 6����2View.cpp : CMy6����2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "6����2.h"
#endif

#include "6����2Doc.h"
#include "6����2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy6����2View

IMPLEMENT_DYNCREATE(CMy6����2View, CView)

BEGIN_MESSAGE_MAP(CMy6����2View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMy6����2View::OnFileOpen)
END_MESSAGE_MAP()

// CMy6����2View ����/����

CMy6����2View::CMy6����2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy6����2View::~CMy6����2View()
{
}

BOOL CMy6����2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy6����2View ����

void CMy6����2View::OnDraw(CDC* /*pDC*/)
{
	CMy6����2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	//CClientDC dc(this);
	//this->Invalidate();
}


// CMy6����2View ���

#ifdef _DEBUG
void CMy6����2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy6����2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy6����2Doc* CMy6����2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy6����2Doc)));
	return (CMy6����2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy6����2View ��Ϣ�������


void CMy6����2View::OnFileOpen()
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
		Invalidate();
	}
	
}
