
// 3ʵ��4Doc.cpp : CMy3ʵ��4Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3ʵ��4.h"
#endif

#include "3ʵ��4Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMy3ʵ��4Doc

IMPLEMENT_DYNCREATE(CMy3ʵ��4Doc, CDocument)

BEGIN_MESSAGE_MAP(CMy3ʵ��4Doc, CDocument)
END_MESSAGE_MAP()


// CMy3ʵ��4Doc ����/����

CMy3ʵ��4Doc::CMy3ʵ��4Doc()
{
	// TODO: �ڴ����һ���Թ������
	 a = rand() % 50 + 5;
	 b = rand() % 50 + 5;
	 k1 = 50,  h1 = 50,  t1 = 200, b1 = 200;
	 k2 = 250, h2 = 250, t2 = 330, b2 = 330;
	 k3 = 400, h3 = 400, t3 = 520, b3 = 520;
}

CMy3ʵ��4Doc::~CMy3ʵ��4Doc()
{
}

BOOL CMy3ʵ��4Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CMy3ʵ��4Doc ���л�

void CMy3ʵ��4Doc::Serialize(CArchive& ar)
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
void CMy3ʵ��4Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CMy3ʵ��4Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CMy3ʵ��4Doc::SetSearchContent(const CString& value)
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

// CMy3ʵ��4Doc ���

#ifdef _DEBUG
void CMy3ʵ��4Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy3ʵ��4Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMy3ʵ��4Doc ����
