// JiLuJi.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "14�ۺ�ʵ��4.h"
#include "14�ۺ�ʵ��4Set.h"
#include "JiLuJi.h"
#include "afxdialogex.h"


// JiLuJi �Ի���

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


// JiLuJi ��Ϣ�������


BOOL JiLuJi::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
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
				  // �쳣: OCX ����ҳӦ���� FALSE
}
