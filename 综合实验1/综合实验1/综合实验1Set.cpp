
// �ۺ�ʵ��1Set.cpp : C�ۺ�ʵ��1Set ���ʵ��
//

#include "stdafx.h"
#include "�ۺ�ʵ��1.h"
#include "�ۺ�ʵ��1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ۺ�ʵ��1Set ʵ��

// ���������� 2020��5��13��, 7:11

IMPLEMENT_DYNAMIC(C�ۺ�ʵ��1Set, CRecordset)

C�ۺ�ʵ��1Set::C�ۺ�ʵ��1Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_nFields = 2;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString C�ۺ�ʵ��1Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x56fe\x7247;DBQ=E:\\myvcshiyan\\hhbby\\Pic.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString C�ۺ�ʵ��1Set::GetDefaultSQL()
{
	return _T("[ͼƬ����Ϣ]");
}

void C�ۺ�ʵ��1Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);

}
/////////////////////////////////////////////////////////////////////////////
// C�ۺ�ʵ��1Set ���

#ifdef _DEBUG
void C�ۺ�ʵ��1Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void C�ۺ�ʵ��1Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

