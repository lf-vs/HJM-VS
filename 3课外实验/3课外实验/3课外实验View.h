
// 3����ʵ��View.h : CMy3����ʵ��View ��Ľӿ�
//

#pragma once


class CMy3����ʵ��View : public CView
{
protected: // �������л�����
	CMy3����ʵ��View();
	DECLARE_DYNCREATE(CMy3����ʵ��View)

// ����
public:
	CMy3����ʵ��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy3����ʵ��View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 3����ʵ��View.cpp �еĵ��԰汾
inline CMy3����ʵ��Doc* CMy3����ʵ��View::GetDocument() const
   { return reinterpret_cast<CMy3����ʵ��Doc*>(m_pDocument); }
#endif

