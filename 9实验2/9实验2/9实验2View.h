
// 9ʵ��2View.h : CMy9ʵ��2View ��Ľӿ�
//

#pragma once


class CMy9ʵ��2View : public CView
{
protected: // �������л�����
	CMy9ʵ��2View();
	DECLARE_DYNCREATE(CMy9ʵ��2View)

// ����
public:
	CMy9ʵ��2Doc* GetDocument() const;

// ����
public:
	CRect cr;
	int n;
	CArray<CRect,CRect> a;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy9ʵ��2View();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // 9ʵ��2View.cpp �еĵ��԰汾
inline CMy9ʵ��2Doc* CMy9ʵ��2View::GetDocument() const
   { return reinterpret_cast<CMy9ʵ��2Doc*>(m_pDocument); }
#endif

