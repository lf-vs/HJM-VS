
// 7ʵ��3View.h : CMy7ʵ��3View ��Ľӿ�
//

#pragma once


class CMy7ʵ��3View : public CView
{
protected: // �������л�����
	CMy7ʵ��3View();
	DECLARE_DYNCREATE(CMy7ʵ��3View)

// ����
public:
	CMy7ʵ��3Doc* GetDocument() const;

// ����
public:
	CRect cr, cert;
	bool set;
	int n, flag;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy7ʵ��3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 7ʵ��3View.cpp �еĵ��԰汾
inline CMy7ʵ��3Doc* CMy7ʵ��3View::GetDocument() const
   { return reinterpret_cast<CMy7ʵ��3Doc*>(m_pDocument); }
#endif

