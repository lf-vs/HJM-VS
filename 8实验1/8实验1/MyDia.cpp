// MyDia.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "8ʵ��1.h"
#include "MyDia.h"
#include "afxdialogex.h"


// MyDia �Ի���

IMPLEMENT_DYNAMIC(MyDia, CDialogEx)

MyDia::MyDia(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(0)
	, b(0)
	, c(0)
{

}

MyDia::~MyDia()
{
}

void MyDia::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT3, a);
	DDX_Text(pDX, IDC_EDIT1, b);
	DDX_Text(pDX, IDC_EDIT2, c);
	DDX_Control(pDX, IDC_COMBO1, Box);
}


BEGIN_MESSAGE_MAP(MyDia, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDia::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDia ��Ϣ�������


void MyDia::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	int n = Box.GetCurSel();
	Box.GetLBText(n, s);
	//int c;
	if (s == _T("+")) {
		c = a + b;
	}
	if (s == _T("-")) {
		c = a - b;
	}
	if (s == _T("*")) {
		c = a*b;
	}
	if (s == _T("/")) {
		c = a / b;
	}
	if (s == _T("��ƽ��")) {
		c = sqrt(a);
	}
	if (s == _T("����")) {
		c = 1 / a;
	}
	UpdateData(false);
}


BOOL MyDia::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	s = "";
	Box.AddString(_T("����"));
	Box.AddString(_T("��ƽ��"));
	Box.AddString(_T("/"));
	Box.AddString(_T("*"));
	Box.AddString(_T("-"));
	Box.AddString(_T("+"));
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
