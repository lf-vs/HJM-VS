// PXu.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "14�ۺ�ʵ��4.h"
#include "PXu.h"
#include "afxdialogex.h"


// PXu �Ի���

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


// PXu ��Ϣ�������
