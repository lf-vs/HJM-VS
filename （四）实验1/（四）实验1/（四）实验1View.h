
// ���ģ�ʵ��1View.h : C���ģ�ʵ��1View ��Ľӿ�
//

#pragma once


class C���ģ�ʵ��1View : public CView
{
protected: // �������л�����
	C���ģ�ʵ��1View();
	DECLARE_DYNCREATE(C���ģ�ʵ��1View)

// ����
public:
	C���ģ�ʵ��1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C���ģ�ʵ��1View();
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

#ifndef _DEBUG  // ���ģ�ʵ��1View.cpp �еĵ��԰汾
inline C���ģ�ʵ��1Doc* C���ģ�ʵ��1View::GetDocument() const
   { return reinterpret_cast<C���ģ�ʵ��1Doc*>(m_pDocument); }
#endif

