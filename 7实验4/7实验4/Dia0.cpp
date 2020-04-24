// Dia0.cpp : 实现文件
//

#include "stdafx.h"
#include "7实验4.h"
#include "Dia0.h"
#include "afxdialogex.h"


// Dia0 对话框

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


// Dia0 消息处理程序


void Dia0::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	ss.Format(_T("%s%d"),s,x);
	UpdateData(false);
}
