
// 2ʵ��1View.h : CMy2ʵ��1View ��Ľӿ�
//

#pragma once


class CMy2ʵ��1View : public CView
{
protected: // �������л�����
	CMy2ʵ��1View();
	DECLARE_DYNCREATE(CMy2ʵ��1View)

// ����
public:
	CMy2ʵ��1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy2ʵ��1View();
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
};

#ifndef _DEBUG  // 2ʵ��1View.cpp �еĵ��԰汾
inline CMy2ʵ��1Doc* CMy2ʵ��1View::GetDocument() const
   { return reinterpret_cast<CMy2ʵ��1Doc*>(m_pDocument); }
#endif

