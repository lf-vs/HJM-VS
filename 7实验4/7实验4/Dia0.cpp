// Dia0.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "7ʵ��4.h"
#include "Dia0.h"
#include "afxdialogex.h"


// Dia0 �Ի���

IMPLEMENT_DYNAMIC(Dia0, CDialogEx)

Dia0::Dia0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s(_T(""))
	, x(0)
	, ss(_T(""))
{

}

Dia0::~Dia0()
{
}

void Dia0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, s);
	DDX_Text(pDX, IDC_EDIT2, x);
	DDX_Text(pDX, IDC_EDIT3, ss);
}


BEGIN_MESSAGE_MAP(Dia0, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Dia0::OnBnClickedButton1)
END_MESSAGE_MAP()


// Dia0 ��Ϣ�������


void Dia0::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	ss.Format(_T("%s%d"),s,x);
	UpdateData(false);
}
