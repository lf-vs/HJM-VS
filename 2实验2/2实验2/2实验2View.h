
// 2ʵ��2View.h : CMy2ʵ��2View ��Ľӿ�
//

#pragma once


class CMy2ʵ��2View : public CView
{
protected: // �������л�����
	CMy2ʵ��2View();
	DECLARE_DYNCREATE(CMy2ʵ��2View)

// ����
public:
	CMy2ʵ��2Doc* GetDocument() const;

// ����
public:
	CArray<CRect, CRect> ca;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy2ʵ��2View();
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

#ifndef _DEBUG  // 2ʵ��2View.cpp �еĵ��԰汾
inline CMy2ʵ��2Doc* CMy2ʵ��2View::GetDocument() const
   { return reinterpret_cast<CMy2ʵ��2Doc*>(m_pDocument); }
#endif

