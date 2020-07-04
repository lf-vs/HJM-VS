// PXu.cpp : 实现文件
//

#include "stdafx.h"
#include "14综合实验4.h"
#include "PXu.h"
#include "afxdialogex.h"


// PXu 对话框

IMPLEMENT_DYNAMIC(PXu, CDialogEx)

PXu::PXu(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG4, pParent)
	, orberby(_T(""))
{

}

PXu::~PXu()
{
}

void PXu::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, orberby);
}


BEGIN_MESSAGE_MAP(PXu, CDialogEx)
END_MESSAGE_MAP()


// PXu 消息处理程序
