
// 3ʵ��4View.h : CMy3ʵ��4View ��Ľӿ�
//

#pragma once


class CMy3ʵ��4View : public CView
{
protected: // �������л�����
	CMy3ʵ��4View();
	DECLARE_DYNCREATE(CMy3ʵ��4View)

// ����
public:
	CMy3ʵ��4Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy3ʵ��4View();
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

#ifndef _DEBUG  // 3ʵ��4View.cpp �еĵ��԰汾
inline CMy3ʵ��4Doc* CMy3ʵ��4View::GetDocument() const
   { return reinterpret_cast<CMy3ʵ��4Doc*>(m_pDocument); }
#endif

