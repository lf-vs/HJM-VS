
// 11ʵ��3View.cpp : CMy11ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "11ʵ��3.h"
#endif

#include "11ʵ��3Set.h"
#include "11ʵ��3Doc.h"
#include "11ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy11ʵ��3View

IMPLEMENT_DYNCREATE(CMy11ʵ��3View, CRecordView)

BEGIN_MESSAGE_MAP(CMy11ʵ��3View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CMy11ʵ��3View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CMy11ʵ��3View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CMy11ʵ��3View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CMy11ʵ��3View::OnRecordLast)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CMy11ʵ��3View ����/����

CMy11ʵ��3View::CMy11ʵ��3View()
	: CRecordView(IDD_MY113_FORM)
	, file(_T(""))
	, number(0)
	, name(_T(""))
	, age(0)
	, xingb(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CMy11ʵ��3View::~CMy11ʵ��3View()
{
}

void CMy11ʵ��3View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_4);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_5);
}

BOOL CMy11ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMy11ʵ��3View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_My11ʵ��3Set;
	CRecordView::OnInitialUpdate();

}


// CMy11ʵ��3View ���

#ifdef _DEBUG
void CMy11ʵ��3View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMy11ʵ��3View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMy11ʵ��3Doc* CMy11ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy11ʵ��3Doc)));
	return (CMy11ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy11ʵ��3View ���ݿ�֧��
CRecordset* CMy11ʵ��3View::OnGetRecordset()
{
	return m_pSet;
}



// CMy11ʵ��3View ��Ϣ�������


void CMy11ʵ��3View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void CMy11ʵ��3View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void CMy11ʵ��3View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void CMy11ʵ��3View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	InvalidateRect(cr);
}



void CMy11ʵ��3View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	CString filename;
	filename = m_pSet->m_1;
	CImage img;
	img.Load(filename);
	CDC* pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

	if (rect_ratio > img_ratio) {
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else {
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
}
