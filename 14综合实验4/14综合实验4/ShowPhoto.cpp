// ShowPhoto.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "14�ۺ�ʵ��4.h"
#include "ShowPhoto.h"
#include "afxdialogex.h"
#include "MainFrm.h"
#include "14�ۺ�ʵ��4Doc.h"
#include "14�ۺ�ʵ��4View.h"


// ShowPhoto �Ի���

IMPLEMENT_DYNAMIC(ShowPhoto, CDialogEx)

ShowPhoto::ShowPhoto(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

ShowPhoto::~ShowPhoto()
{
}

void ShowPhoto::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ShowPhoto, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// ShowPhoto ��Ϣ�������


void ShowPhoto::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CDialogEx::OnPaint()
	CMainFrame* pFrame = (CMainFrame *)(AfxGetApp()->m_pMainWnd);
	CMy14�ۺ�ʵ��4View* pView = (CMy14�ۺ�ʵ��4View*)pFrame->GetActiveView();
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
