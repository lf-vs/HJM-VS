#pragma once


// MyDia0 �Ի���

class MyDia0 : public CDialogEx
{
	DECLARE_DYNAMIC(MyDia0)

public:
	MyDia0(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyDia0();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit3();
	int x;
	int y;
	int a;
	int b;
};
