#pragma once
#include "afxwin.h"


// JiLuJi �Ի���

class JiLuJi : public CDialogEx
{
	DECLARE_DYNAMIC(JiLuJi)

public:
	JiLuJi(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~JiLuJi();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif
	CMy14�ۺ�ʵ��4Set* m_pSet;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CListBox list;
	virtual BOOL OnInitDialog();
};
