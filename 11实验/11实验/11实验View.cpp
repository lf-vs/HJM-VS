
// 11ʵ��View.cpp : CMy11ʵ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "11ʵ��.h"
#endif

#include "11ʵ��Set.h"
#include "11ʵ��Doc.h"
#include "11ʵ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy11ʵ��View

IMPLEMENT_DYNCREATE(CMy11ʵ��View, CRecordView)

BEGIN_MESSAGE_MAP(CMy11ʵ��View, CRecordView)
END_MESSAGE_MAP()

// CMy11ʵ��View ����/����

CMy11ʵ��View::CMy11ʵ��View()
	: CRecordView(IDD_MY11_FORM)
	, ID(0)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CMy11ʵ��View::~CMy11ʵ��View()
{
}

void CMy11ʵ��View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL CMy11ʵ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMy11ʵ��View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_My11ʵ��Set;
	CRecordView::OnInitialUpdate();

}


// CMy11ʵ��View ���

#ifdef _DEBUG
void CMy11ʵ��View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMy11ʵ��View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMy11ʵ��Doc* CMy11ʵ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy11ʵ��Doc)));
	return (CMy11ʵ��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy11ʵ��View ���ݿ�֧��
CRecordset* CMy11ʵ��View::OnGetRecordset()
{
	return m_pSet;
}



// CMy11ʵ��View ��Ϣ�������
