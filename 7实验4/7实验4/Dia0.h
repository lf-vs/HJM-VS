#pragma once


// Dia0 �Ի���

class Dia0 : public CDialogEx
{
	DECLARE_DYNAMIC(Dia0)

public:
	Dia0(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Dia0();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString s;
	int x;
	CString ss;
	afx_msg void OnBnClickedButton1();
};
