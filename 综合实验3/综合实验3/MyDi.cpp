// MyDi.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�ۺ�ʵ��3.h"
#include "MyDi.h"
#include "afxdialogex.h"
#include "MainFrm.h"
#include "�ۺ�ʵ��3Doc.h"
#include "�ۺ�ʵ��3View.h"




// MyDi �Ի���

IMPLEMENT_DYNAMIC(MyDi, CDialogEx)

MyDi::MyDi(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, lon(0)
{

}

MyDi::~MyDi()
{
}

void MyDi::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, lon);
}


BEGIN_MESSAGE_MAP(MyDi, CDialogEx)
END_MESSAGE_MAP()


// MyDi ��Ϣ�������


BOOL MyDi::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	CMainFrame* pFrame = (CMainFrame *)(AfxGetApp()->m_pMainWnd);
	C�ۺ�ʵ��3View* pView = (C�ۺ�ʵ��3View*)pFrame->GetActiveView();
	lon = pView->ch;
	UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
