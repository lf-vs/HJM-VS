
// 4ʵ��1View.h : CMy4ʵ��1View ��Ľӿ�
//

#pragma once


class CMy4ʵ��1View : public CView
{
protected: // �������л�����
	CMy4ʵ��1View();
	DECLARE_DYNCREATE(CMy4ʵ��1View)

// ����
public:
	CMy4ʵ��1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy4ʵ��1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 4ʵ��1View.cpp �еĵ��԰汾
inline CMy4ʵ��1Doc* CMy4ʵ��1View::GetDocument() const
   { return reinterpret_cast<CMy4ʵ��1Doc*>(m_pDocument); }
#endif

