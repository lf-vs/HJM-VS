
// 8ʵ��2��1��View.h : CMy8ʵ��2��1��View ��Ľӿ�
//

#pragma once


class CMy8ʵ��2��1��View : public CView
{
protected: // �������л�����
	CMy8ʵ��2��1��View();
	DECLARE_DYNCREATE(CMy8ʵ��2��1��View)

// ����
public:
	CMy8ʵ��2��1��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy8ʵ��2��1��View();
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
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 8ʵ��2��1��View.cpp �еĵ��԰汾
inline CMy8ʵ��2��1��Doc* CMy8ʵ��2��1��View::GetDocument() const
   { return reinterpret_cast<CMy8ʵ��2��1��Doc*>(m_pDocument); }
#endif

