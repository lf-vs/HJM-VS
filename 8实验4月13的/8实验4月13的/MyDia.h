#pragma once
#include "afxwin.h"


// MyDia �Ի���

class MyDia : public CDialogEx
{
	DECLARE_DYNAMIC(MyDia)

public:
	MyDia(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyDia();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString ss;
	virtual BOOL OnInitDialog();
	CListBox h;
	bool set;
};
