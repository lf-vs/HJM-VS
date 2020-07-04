#pragma once


// PXu 对话框

class PXu : public CDialogEx
{
	DECLARE_DYNAMIC(PXu)

public:
	PXu(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~PXu();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif
	
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString orberby;
};
