
// 6ʵ��5View.h : CMy6ʵ��5View ��Ľӿ�
//

#pragma once


class CMy6ʵ��5View : public CView
{
protected: // �������л�����
	CMy6ʵ��5View();
	DECLARE_DYNCREATE(CMy6ʵ��5View)

// ����
public:
	CMy6ʵ��5Doc* GetDocument() const;

// ����
public:
	CString s,ss;
	CPoint cpoint;
	CArray<CString, CString>m;
	CRect cr;
	int x, flag, h;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy6ʵ��5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 6ʵ��5View.cpp �еĵ��԰汾
inline CMy6ʵ��5Doc* CMy6ʵ��5View::GetDocument() const
   { return reinterpret_cast<CMy6ʵ��5Doc*>(m_pDocument); }
#endif

