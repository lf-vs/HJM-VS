// ChaXun.cpp : 实现文件
//

#include "stdafx.h"
#include "14综合实验4.h"
#include "ChaXun.h"
#include "afxdialogex.h"


// ChaXun 对话框

IMPLEMENT_DYNAMIC(ChaXun, CDialogEx)

ChaXun::ChaXun(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, find(_T(""))
{

}

ChaXun::~ChaXun()
{
}

void ChaXun::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, find);
}


BEGIN_MESSAGE_MAP(ChaXun, CDialogEx)
END_MESSAGE_MAP()


// ChaXun 消息处理程序
