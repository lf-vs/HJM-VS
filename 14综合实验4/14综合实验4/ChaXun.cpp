// ChaXun.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "14�ۺ�ʵ��4.h"
#include "ChaXun.h"
#include "afxdialogex.h"


// ChaXun �Ի���

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


// ChaXun ��Ϣ�������
