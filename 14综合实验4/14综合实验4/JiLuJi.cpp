// JiLuJi.cpp : 实现文件
//

#include "stdafx.h"
#include "14综合实验4.h"
#include "14综合实验4Set.h"
#include "JiLuJi.h"
#include "afxdialogex.h"


// JiLuJi 对话框

IMPLEMENT_DYNAMIC(JiLuJi, CDialogEx)

JiLuJi::JiLuJi(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG3, pParent)
{
	m_pSet = NULL;
}

JiLuJi::~JiLuJi()
{
}

void JiLuJi::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, list);
}


BEGIN_MESSAGE_MAP(JiLuJi, CDialogEx)
END_MESSAGE_MAP()


// JiLuJi 消息处理程序


BOOL JiLuJi::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	m_pSet->MoveFirst();
	list.ResetContent();
	CString s;
	int n = m_pSet->GetODBCFieldCount();
	while (!m_pSet->IsEOF())
	{
		s.Empty();

		for (int i = 0; i < n; i++)
		{
			CString temp;
			m_pSet->GetFieldValue((short)i, temp);
			s += temp;
			s += _T("    ");
		}
		list.AddString(s);
		m_pSet->MoveNext();
	}

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
