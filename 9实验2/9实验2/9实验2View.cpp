
// 9ʵ��2View.cpp : CMy9ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "9ʵ��2.h"
#endif

#include "9ʵ��2Doc.h"
#include "9ʵ��2View.h"
#include<fstream>
#include<string>
#include<iostream>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy9ʵ��2View

IMPLEMENT_DYNCREATE(CMy9ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy9ʵ��2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_FILE_OPEN, &CMy9ʵ��2View::OnFileOpen)
END_MESSAGE_MAP()

// CMy9ʵ��2View ����/����
int flag;
CMy9ʵ��2View::CMy9ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy9ʵ��2View::~CMy9ʵ��2View()
{
}

BOOL CMy9ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy9ʵ��2View ����

void CMy9ʵ��2View::OnDraw(CDC* pDC)
{
	CMy9ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(cr);
	if (n != 0) {
		CString filename = _T("C:\\Users\\AUSU\\Desktop\\ellipse.txt");
		ofstream of(filename);
		for (int i = 0;i < n;i++) {
			pDC->Ellipse(a[i]);
			of << a[i].left << ' ' << a[i].top << ' ' << a[i].right << ' ' << a[i].bottom << endl;
		}
	}
}


// CMy9ʵ��2View ���

#ifdef _DEBUG
void CMy9ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy9ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy9ʵ��2Doc* CMy9ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy9ʵ��2Doc)));
	return (CMy9ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy9ʵ��2View ��Ϣ�������


void CMy9ʵ��2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 1;
	cr.left = point.x;
	cr.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMy9ʵ��2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag == 1)
	{
		cr.right = point.x;
		cr.bottom = point.y;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void CMy9ʵ��2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 0;
	a.Add(cr);
	n++;
	CView::OnLButtonUp(nFlags, point);
}


void CMy9ʵ��2View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	CString filename = _T("C:\\Users\\AUSU\\Desktop\\ellipse.txt");
	ifstream ifs(filename);
	string s;
	int count = 0, i = 0;
	int num[4];
	while (ifs >> s)
	{
		num[i] = atoi(s.c_str());
		i++;
		count++;
		if (count % 4 == 0)
		{
			CRect cr(num[0], num[1], num[2], num[3]);
			dc.Ellipse(cr);
			i = 0;
		}
	}
}
