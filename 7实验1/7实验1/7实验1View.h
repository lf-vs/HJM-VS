
// 7ʵ��1View.h : CMy7ʵ��1View ��Ľӿ�
//

#pragma once


class CMy7ʵ��1View : public CView
{
protected: // �������л�����
	CMy7ʵ��1View();
	DECLARE_DYNCREATE(CMy7ʵ��1View)

// ����
public:
	CMy7ʵ��1Doc* GetDocument() const;

// ����
public:
	CRect cr;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy7ʵ��1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 7ʵ��1View.cpp �еĵ��԰汾
inline CMy7ʵ��1Doc* CMy7ʵ��1View::GetDocument() const
   { return reinterpret_cast<CMy7ʵ��1Doc*>(m_pDocument); }
#endif

