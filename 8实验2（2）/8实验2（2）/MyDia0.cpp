// MyDia0.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "8ʵ��2��2��.h"
#include "MyDia0.h"
#include "afxdialogex.h"


// MyDia0 �Ի���

IMPLEMENT_DYNAMIC(MyDia0, CDialogEx)

MyDia0::MyDia0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, a(0)
	, b(0)
{

}

MyDia0::~MyDia0()
{
}

void MyDia0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT4, a);
	DDX_Text(pDX, IDC_EDIT3, b);
}


BEGIN_MESSAGE_MAP(MyDia0, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT3, &MyDia0::OnEnChangeEdit3)
END_MESSAGE_MAP()


// MyDia0 ��Ϣ�������


void MyDia0::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
