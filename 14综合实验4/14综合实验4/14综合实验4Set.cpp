
// 14�ۺ�ʵ��4Set.cpp : CMy14�ۺ�ʵ��4Set ���ʵ��
//

#include "stdafx.h"
#include "14�ۺ�ʵ��4.h"
#include "14�ۺ�ʵ��4Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy14�ۺ�ʵ��4Set ʵ��

// ���������� 2020��5��27��, 9:09

IMPLEMENT_DYNAMIC(CMy14�ۺ�ʵ��4Set, CRecordset)

CMy14�ۺ�ʵ��4Set::CMy14�ۺ�ʵ��4Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_4 = L"";
	m_5 = 0;
	m_nFields = 6;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CMy14�ۺ�ʵ��4Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x56fe\x7247;DBQ=E:\\myvcshiyan\\hhbby\\Pic.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CMy14�ۺ�ʵ��4Set::GetDefaultSQL()
{
	return _T("[ͼƬ����Ϣ]");
}

void CMy14�ۺ�ʵ��4Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Text(pFX, _T("[�ֶ�4]"), m_4);
	RFX_Long(pFX, _T("[�ֶ�5]"), m_5);

}
/////////////////////////////////////////////////////////////////////////////
// CMy14�ۺ�ʵ��4Set ���

#ifdef _DEBUG
void CMy14�ۺ�ʵ��4Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMy14�ۺ�ʵ��4Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

