#pragma once


// Dia0 对话框

class Dia0 : public CDialogEx
{
	DECLARE_DYNAMIC(Dia0)

public:
	Dia0(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Dia0();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString s;
	int x;
	CString ss;
	afx_msg void OnBnClickedButton1();
};
