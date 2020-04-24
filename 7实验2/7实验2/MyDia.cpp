// MyDia.cpp : 实现文件
//

#include "stdafx.h"
#include "7实验2.h"
#include "MyDia.h"
#include "afxdialogex.h"


// MyDia 对话框

IMPLEMENT_DYNAMIC(MyDia, CDialogEx)

MyDia::MyDia(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, z(0)
{

}

MyDia::~MyDia()
{
}

void MyDia::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, z);
}


BEGIN_MESSAGE_MAP(MyDia, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDia::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDia 消息处理程序


void MyDia::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	z = x + y;
	UpdateData(false);
}
