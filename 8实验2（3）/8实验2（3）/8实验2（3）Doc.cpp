
// 8ʵ��2��3��Doc.cpp : CMy8ʵ��2��3��Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "8ʵ��2��3��.h"
#endif

#include "8ʵ��2��3��Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMy8ʵ��2��3��Doc

IMPLEMENT_DYNCREATE(CMy8ʵ��2��3��Doc, CDocument)

BEGIN_MESSAGE_MAP(CMy8ʵ��2��3��Doc, CDocument)
END_MESSAGE_MAP()


// CMy8ʵ��2��3��Doc ����/����

CMy8ʵ��2��3��Doc::CMy8ʵ��2��3��Doc()
{
	// TODO: �ڴ����һ���Թ������
	cr.left = 100;
	cr.top = 200;
	cr.right = 300;
	cr.bottom = 450;
}

CMy8ʵ��2��3��Doc::~CMy8ʵ��2��3��Doc()
{
}

BOOL CMy8ʵ��2��3��Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CMy8ʵ��2��3��Doc ���л�

void CMy8ʵ��2��3��Doc::Serialize(CArchive& ar)
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
void CMy8ʵ��2��3��Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CMy8ʵ��2��3��Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CMy8ʵ��2��3��Doc::SetSearchContent(const CString& value)
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

// CMy8ʵ��2��3��Doc ���

#ifdef _DEBUG
void CMy8ʵ��2��3��Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy8ʵ��2��3��Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMy8ʵ��2��3��Doc ����
