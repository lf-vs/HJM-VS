
// 2ʵ��7View.h : CMy2ʵ��7View ��Ľӿ�
//

#pragma once


class CMy2ʵ��7View : public CView
{
protected: // �������л�����
	CMy2ʵ��7View();
	DECLARE_DYNCREATE(CMy2ʵ��7View)

// ����
public:
	CMy2ʵ��7Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy2ʵ��7View();
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

#ifndef _DEBUG  // 2ʵ��7View.cpp �еĵ��԰汾
inline CMy2ʵ��7Doc* CMy2ʵ��7View::GetDocument() const
   { return reinterpret_cast<CMy2ʵ��7Doc*>(m_pDocument); }
#endif

