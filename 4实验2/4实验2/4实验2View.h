
// 4ʵ��2View.h : CMy4ʵ��2View ��Ľӿ�
//

#pragma once


class CMy4ʵ��2View : public CView
{
protected: // �������л�����
	CMy4ʵ��2View();
	DECLARE_DYNCREATE(CMy4ʵ��2View)

// ����
public:
	CMy4ʵ��2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy4ʵ��2View();
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

#ifndef _DEBUG  // 4ʵ��2View.cpp �еĵ��԰汾
inline CMy4ʵ��2Doc* CMy4ʵ��2View::GetDocument() const
   { return reinterpret_cast<CMy4ʵ��2Doc*>(m_pDocument); }
#endif

