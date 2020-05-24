// mydia.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�ۺ�ʵ��2-1.h"
#include "mydia.h"
#include "afxdialogex.h"
#include "MainFrm.h"
#include "�ۺ�ʵ��2-1Doc.h"
#include "�ۺ�ʵ��2-1View.h"

// mydia �Ի���

IMPLEMENT_DYNAMIC(mydia, CDialogEx)

mydia::mydia(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

mydia::~mydia()
{
}

void mydia::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(mydia, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// mydia ��Ϣ�������


void mydia::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CDialogEx::OnPaint()
	CMainFrame* pFrame = (CMainFrame *)(AfxGetApp()->m_pMainWnd);
	C�ۺ�ʵ��21View* pView = (C�ۺ�ʵ��21View*)pFrame->GetActiveView();
	CImage img;
	img.Load(pView->filename);
	CDC* pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

	if (rect_ratio > img_ratio) {
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else {
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	//InvalidateRect(rect);
	ReleaseDC(pDC);
}
