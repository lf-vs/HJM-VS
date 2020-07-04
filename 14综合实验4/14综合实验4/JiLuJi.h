#pragma once
#include "afxwin.h"


// JiLuJi 对话框

class JiLuJi : public CDialogEx
{
	DECLARE_DYNAMIC(JiLuJi)

public:
	JiLuJi(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~JiLuJi();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif
	CMy14综合实验4Set* m_pSet;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListBox list;
	virtual BOOL OnInitDialog();
};
