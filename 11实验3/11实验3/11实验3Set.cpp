
// 11ʵ��3Set.cpp : CMy11ʵ��3Set ���ʵ��
//

#include "stdafx.h"
#include "11ʵ��3.h"
#include "11ʵ��3Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy11ʵ��3Set ʵ��

// ���������� 2020��5��15��, 22:04

IMPLEMENT_DYNAMIC(CMy11ʵ��3Set, CRecordset)

CMy11ʵ��3Set::CMy11ʵ��3Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = 0;
	m_3 = L"";
	m_4 = 0;
	m_5 = L"";
	m_nFields = 6;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CMy11ʵ��3Set::GetDefaultConnect()
{
	return _T("������_11��");
}

CString CMy11ʵ��3Set::GetDefaultSQL()
{
	return _T("[ʮһ��]");
}

void CMy11ʵ��3Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Long(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Long(pFX, _T("[�ֶ�4]"), m_4);
	RFX_Text(pFX, _T("[�ֶ�5]"), m_5);

}
/////////////////////////////////////////////////////////////////////////////
// CMy11ʵ��3Set ���

#ifdef _DEBUG
void CMy11ʵ��3Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMy11ʵ��3Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

