
// 6ʵ��4View.h : CMy6ʵ��4View ��Ľӿ�
//

#pragma once


class CMy6ʵ��4View : public CView
{
protected: // �������л�����
	CMy6ʵ��4View();
	DECLARE_DYNCREATE(CMy6ʵ��4View)

// ����
public:
	CMy6ʵ��4Doc* GetDocument() const;

// ����
public:
	CString s;
	CPoint cpoint;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy6ʵ��4View();
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

#ifndef _DEBUG  // 6ʵ��4View.cpp �еĵ��԰汾
inline CMy6ʵ��4Doc* CMy6ʵ��4View::GetDocument() const
   { return reinterpret_cast<CMy6ʵ��4Doc*>(m_pDocument); }
#endif

