
// 14综合实验4View.cpp : CMy14综合实验4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "14综合实验4.h"
#endif

#include "14综合实验4Set.h"
#include "14综合实验4Doc.h"
#include "14综合实验4View.h"
#include "ShowPhoto.h"
#include "ChaXun.h"
#include "JiLuJi.h"
#include "PXu.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy14综合实验4View

IMPLEMENT_DYNCREATE(CMy14综合实验4View, CRecordView)

BEGIN_MESSAGE_MAP(CMy14综合实验4View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CMy14综合实验4View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CMy14综合实验4View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CMy14综合实验4View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CMy14综合实验4View::OnRecordLast)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &CMy14综合实验4View::OnBnClickedButton1)
	ON_COMMAND(ID_Find, &CMy14综合实验4View::OnFind)
	ON_COMMAND(ID_Sort, &CMy14综合实验4View::OnSort)
	ON_COMMAND(ID_Remember, &CMy14综合实验4View::OnRemember)
	ON_BN_CLICKED(IDC_BUTTON2, &CMy14综合实验4View::OnBnClickedButton2)
END_MESSAGE_MAP()

// CMy14综合实验4View 构造/析构

CMy14综合实验4View::CMy14综合实验4View()
	: CRecordView(IDD_MY144_FORM)
	, number(_T(""))
	, name(_T(""))
	, sex(_T(""))
	, sore(0)
	, photo(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码
	path = _T("E:\\myvcshiyan\\hhbby\\ABC\\");
	
}

CMy14综合实验4View::~CMy14综合实验4View()
{
}

void CMy14综合实验4View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_4);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_5);
	
}

BOOL CMy14综合实验4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CMy14综合实验4View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_My14综合实验4Set;
	CRecordView::OnInitialUpdate();

}


// CMy14综合实验4View 诊断

#ifdef _DEBUG
void CMy14综合实验4View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMy14综合实验4View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMy14综合实验4Doc* CMy14综合实验4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy14综合实验4Doc)));
	return (CMy14综合实验4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy14综合实验4View 数据库支持
CRecordset* CMy14综合实验4View::OnGetRecordset()
{
	return m_pSet;
}



// CMy14综合实验4View 消息处理程序
int flag1 = 0;

void CMy14综合实验4View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	GetDlgItem(IDC_STATIC1)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC1)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC1)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void CMy14综合实验4View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
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


void CMy14综合实验4View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
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


void CMy14综合实验4View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	GetDlgItem(IDC_STATIC1)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC1)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC1)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void CMy14综合实验4View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
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


void CMy14综合实验4View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	ShowPhoto dig;
	int t = dig.DoModal();
}


void CMy14综合实验4View::OnFind()
{
	// TODO: 在此添加命令处理程序代码
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


void CMy14综合实验4View::OnSort()
{
	// TODO: 在此添加命令处理程序代码
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


void CMy14综合实验4View::OnRemember()
{
	// TODO: 在此添加命令处理程序代码
	JiLuJi *dig=new JiLuJi;
	dig->m_pSet = m_pSet;
	dig->Create(IDD_DIALOG3);
	dig->ShowWindow(1);
}


void CMy14综合实验4View::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
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
