#pragma once


// ShowPhoto �Ի���

class ShowPhoto : public CDialogEx
{
	DECLARE_DYNAMIC(ShowPhoto)

public:
	ShowPhoto(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ShowPhoto();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
