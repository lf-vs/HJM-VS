// MyDia.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�ۺ�ʵ��3.h"
#include "MyDia.h"
#include "afxdialogex.h"


// MyDia �Ի���

IMPLEMENT_DYNAMIC(MyDia, CDialogEx)

MyDia::MyDia(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, lo(0)
{

}

MyDia::~MyDia()
{
}

void MyDia::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, lo);
}


BEGIN_MESSAGE_MAP(MyDia, CDialogEx)
END_MESSAGE_MAP()


// MyDia ��Ϣ�������
