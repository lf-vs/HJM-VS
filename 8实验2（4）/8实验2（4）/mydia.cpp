// mydia.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "8ʵ��2��4��.h"
#include "mydia.h"
#include "afxdialogex.h"


// mydia �Ի���

IMPLEMENT_DYNAMIC(mydia, CDialogEx)

mydia::mydia(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, color1(0)
	, color2(0)
	, color3(0)
{

}

mydia::~mydia()
{
}

void mydia::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, color1);
	DDX_Text(pDX, IDC_EDIT3, color2);
	DDX_Text(pDX, IDC_EDIT2, color3);
}


BEGIN_MESSAGE_MAP(mydia, CDialogEx)
END_MESSAGE_MAP()


// mydia ��Ϣ�������
