
// 5ʵ��5��1��View.h : CMy5ʵ��5��1��View ��Ľӿ�
//

#pragma once


class CMy5ʵ��5��1��View : public CView
{
protected: // �������л�����
	CMy5ʵ��5��1��View();
	DECLARE_DYNCREATE(CMy5ʵ��5��1��View)

// ����
public:
	CMy5ʵ��5��1��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy5ʵ��5��1��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShow();
	afx_msg void OnShowrectangle();
	afx_msg void OnShowellipse();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 5ʵ��5��1��View.cpp �еĵ��԰汾
inline CMy5ʵ��5��1��Doc* CMy5ʵ��5��1��View::GetDocument() const
   { return reinterpret_cast<CMy5ʵ��5��1��Doc*>(m_pDocument); }
#endif

