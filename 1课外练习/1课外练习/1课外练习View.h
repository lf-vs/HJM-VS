
// 1������ϰView.h : CMy1������ϰView ��Ľӿ�
//

#pragma once


class CMy1������ϰView : public CView
{
protected: // �������л�����
	CMy1������ϰView();
	DECLARE_DYNCREATE(CMy1������ϰView)

// ����
public:
	CMy1������ϰDoc* GetDocument() const;

// ����
public:
	CString s2;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy1������ϰView();
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

#ifndef _DEBUG  // 1������ϰView.cpp �еĵ��԰汾
inline CMy1������ϰDoc* CMy1������ϰView::GetDocument() const
   { return reinterpret_cast<CMy1������ϰDoc*>(m_pDocument); }
#endif

