
// �ۺ�ʵ��2-1View.cpp : C�ۺ�ʵ��21View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ۺ�ʵ��2-1.h"
#endif

#include "�ۺ�ʵ��2-1Set.h"
#include "�ۺ�ʵ��2-1Doc.h"
#include "�ۺ�ʵ��2-1View.h"
#include "mydia.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ۺ�ʵ��21View

IMPLEMENT_DYNCREATE(C�ۺ�ʵ��21View, CRecordView)

BEGIN_MESSAGE_MAP(C�ۺ�ʵ��21View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &C�ۺ�ʵ��21View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &C�ۺ�ʵ��21View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &C�ۺ�ʵ��21View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &C�ۺ�ʵ��21View::OnRecordLast)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &C�ۺ�ʵ��21View::OnBnClickedButton1)
END_MESSAGE_MAP()

// C�ۺ�ʵ��21View ����/����

C�ۺ�ʵ��21View::C�ۺ�ʵ��21View()
	: CRecordView(IDD_MY21_FORM)
	, name(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	path = _T("E:\\myvcshiyan\\hhbby\\ABC\\");
}

C�ۺ�ʵ��21View::~C�ۺ�ʵ��21View()
{
}

void C�ۺ�ʵ��21View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL C�ۺ�ʵ��21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void C�ۺ�ʵ��21View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_�ۺ�ʵ��21Set;
	CRecordView::OnInitialUpdate();

}


// C�ۺ�ʵ��21View ���

#ifdef _DEBUG
void C�ۺ�ʵ��21View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C�ۺ�ʵ��21View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C�ۺ�ʵ��21Doc* C�ۺ�ʵ��21View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ۺ�ʵ��21Doc)));
	return (C�ۺ�ʵ��21Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ۺ�ʵ��21View ���ݿ�֧��
CRecordset* C�ۺ�ʵ��21View::OnGetRecordset()
{
	return m_pSet;
}



// C�ۺ�ʵ��21View ��Ϣ�������


void C�ۺ�ʵ��21View::OnRecordFirst()
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


void C�ۺ�ʵ��21View::OnRecordPrev()
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


void C�ۺ�ʵ��21View::OnRecordNext()
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


void C�ۺ�ʵ��21View::OnRecordLast()
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


void C�ۺ�ʵ��21View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	GetDlgItemText(IDC_EDIT1, m_pSet->m_1);
	filename = path + m_pSet->m_1;
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
	//InvalidateRect(rect);
	ReleaseDC(pDC);
}


void C�ۺ�ʵ��21View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	mydia dig;
	int t = dig.DoModal();
}
