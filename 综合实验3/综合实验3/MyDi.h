#pragma once


// MyDi �Ի���

class MyDi : public CDialogEx
{
	DECLARE_DYNAMIC(MyDi)

public:
	MyDi(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyDi();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	long lon;
	virtual BOOL OnInitDialog();
};
