
// 3����ʵ��Doc.cpp : CMy3����ʵ��Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3����ʵ��.h"
#endif

#include "3����ʵ��Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMy3����ʵ��Doc

IMPLEMENT_DYNCREATE(CMy3����ʵ��Doc, CDocument)

BEGIN_MESSAGE_MAP(CMy3����ʵ��Doc, CDocument)
END_MESSAGE_MAP()


// CMy3����ʵ��Doc ����/����

CMy3����ʵ��Doc::CMy3����ʵ��Doc()
{
	// TODO: �ڴ����һ���Թ������
	cr1.left = 20,  cr1.top = 100, cr1.right = 200, cr1.bottom = 200;
	cr2.left = 220, cr2.top = 100, cr2.right = 400, cr2.bottom = 200;
	cr3.left = 420, cr3.top = 100, cr3.right = 600, cr3.bottom = 200;
	cr4.left = 620, cr4.top = 100, cr4.right = 800, cr4.bottom = 200;
}

CMy3����ʵ��Doc::~CMy3����ʵ��Doc()
{
}

BOOL CMy3����ʵ��Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CMy3����ʵ��Doc ���л�

void CMy3����ʵ��Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CMy3����ʵ��Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// ������������֧��
void CMy3����ʵ��Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CMy3����ʵ��Doc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CMy3����ʵ��Doc ���

#ifdef _DEBUG
void CMy3����ʵ��Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy3����ʵ��Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMy3����ʵ��Doc ����
