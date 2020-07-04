
// 14�ۺ�ʵ��4View.cpp : CMy14�ۺ�ʵ��4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "14�ۺ�ʵ��4.h"
#endif

#include "14�ۺ�ʵ��4Set.h"
#include "14�ۺ�ʵ��4Doc.h"
#include "14�ۺ�ʵ��4View.h"
#include "ShowPhoto.h"
#include "ChaXun.h"
#include "JiLuJi.h"
#include "PXu.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy14�ۺ�ʵ��4View

IMPLEMENT_DYNCREATE(CMy14�ۺ�ʵ��4View, CRecordView)

BEGIN_MESSAGE_MAP(CMy14�ۺ�ʵ��4View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CMy14�ۺ�ʵ��4View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CMy14�ۺ�ʵ��4View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CMy14�ۺ�ʵ��4View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CMy14�ۺ�ʵ��4View::OnRecordLast)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &CMy14�ۺ�ʵ��4View::OnBnClickedButton1)
	ON_COMMAND(ID_Find, &CMy14�ۺ�ʵ��4View::OnFind)
	ON_COMMAND(ID_Sort, &CMy14�ۺ�ʵ��4View::OnSort)
	ON_COMMAND(ID_Remember, &CMy14�ۺ�ʵ��4View::OnRemember)
	ON_BN_CLICKED(IDC_BUTTON2, &CMy14�ۺ�ʵ��4View::OnBnClickedButton2)
END_MESSAGE_MAP()

// CMy14�ۺ�ʵ��4View ����/����

CMy14�ۺ�ʵ��4View::CMy14�ۺ�ʵ��4View()
	: CRecordView(IDD_MY144_FORM)
	, number(_T(""))
	, name(_T(""))
	, sex(_T(""))
	, sore(0)
	, photo(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	path = _T("E:\\myvcshiyan\\hhbby\\ABC\\");
	
}

CMy14�ۺ�ʵ��4View::~CMy14�ۺ�ʵ��4View()
{
}

void CMy14�ۺ�ʵ��4View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_4);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_5);
	
}

BOOL CMy14�ۺ�ʵ��4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMy14�ۺ�ʵ��4View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_My14�ۺ�ʵ��4Set;
	CRecordView::OnInitialUpdate();

}


// CMy14�ۺ�ʵ��4View ���

#ifdef _DEBUG
void CMy14�ۺ�ʵ��4View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMy14�ۺ�ʵ��4View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMy14�ۺ�ʵ��4Doc* CMy14�ۺ�ʵ��4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy14�ۺ�ʵ��4Doc)));
	return (CMy14�ۺ�ʵ��4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy14�ۺ�ʵ��4View ���ݿ�֧��
CRecordset* CMy14�ۺ�ʵ��4View::OnGetRecordset()
{
	return m_pSet;
}



// CMy14�ۺ�ʵ��4View ��Ϣ�������
int flag1 = 0;

void CMy14�ۺ�ʵ��4View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	GetDlgItem(IDC_STATIC1)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC1)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC1)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void CMy14�ۺ�ʵ��4View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	GetDlgItem(IDC_STATIC1)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC1)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC1)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void CMy14�ۺ�ʵ��4View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	GetDlgItem(IDC_STATIC1)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC1)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC1)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void CMy14�ۺ�ʵ��4View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	GetDlgItem(IDC_STATIC1)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC1)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC1)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void CMy14�ۺ�ʵ��4View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	GetDlgItemText(IDC_EDIT5, m_pSet->m_1);
	filename = path + m_pSet->m_1;
	CImage img;
	img.Load(filename);
	CDC* pDC = GetDlgItem(IDC_STATIC1)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC1)->GetClientRect(&rect);

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


void CMy14�ۺ�ʵ��4View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	ShowPhoto dig;
	int t = dig.DoModal();
}


void CMy14�ۺ�ʵ��4View::OnFind()
{
	// TODO: �ڴ���������������
	ChaXun dig;
	int t = dig.DoModal();
	CString s;
	if (t == IDOK)
		s = dig.find;
	m_pSet->m_strFilter = s;
	m_pSet->Requery();
	UpdateData(false);
	GetDlgItem(IDC_STATIC1)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC1)->ShowWindow(TRUE);
	CImage img;
	img.Load(filename);
	CDC* pDC = GetDlgItem(IDC_STATIC1)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC1)->GetClientRect(&rect);

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
	flag1 = 1;
}


void CMy14�ۺ�ʵ��4View::OnSort()
{
	// TODO: �ڴ���������������
	PXu dig;
	int t = dig.DoModal();
	CString s;
	if (t == IDOK)
		s = dig.orberby;
	m_pSet->m_strSort = s;
	m_pSet->Requery();
	UpdateData(false);
	GetDlgItem(IDC_STATIC1)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC1)->ShowWindow(TRUE);
	OnPaint();
	flag1 = 2;
}


void CMy14�ۺ�ʵ��4View::OnRemember()
{
	// TODO: �ڴ���������������
	JiLuJi *dig=new JiLuJi;
	dig->m_pSet = m_pSet;
	dig->Create(IDD_DIALOG3);
	dig->ShowWindow(1);
}


void CMy14�ۺ�ʵ��4View::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	if (flag1 == 1)
	{
		m_pSet->m_strFilter = _T("");
		m_pSet->Requery();
		UpdateData(false);
		GetDlgItem(IDC_STATIC1)->ShowWindow(FALSE);
		GetDlgItem(IDC_STATIC1)->ShowWindow(TRUE);
		CImage img;
		img.Load(filename);
		CDC* pDC = GetDlgItem(IDC_STATIC1)->GetDC();
		int sx, sy, w, h;
		CRect rect;
		GetDlgItem(IDC_STATIC1)->GetClientRect(&rect);

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
		flag1 = 0;
	}
	if (flag1 == 2)
	{
		m_pSet->m_strSort = _T("");
		m_pSet->Requery();
		UpdateData(false);
		GetDlgItem(IDC_STATIC1)->ShowWindow(FALSE);
		GetDlgItem(IDC_STATIC1)->ShowWindow(TRUE);
		CImage img;
		img.Load(filename);
		CDC* pDC = GetDlgItem(IDC_STATIC1)->GetDC();
		int sx, sy, w, h;
		CRect rect;
		GetDlgItem(IDC_STATIC1)->GetClientRect(&rect);

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
		flag1 = 0;
	}
}
