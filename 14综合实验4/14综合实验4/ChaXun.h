#pragma once


// ChaXun �Ի���

class ChaXun : public CDialogEx
{
	DECLARE_DYNAMIC(ChaXun)

public:
	ChaXun(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ChaXun();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString find;
};
