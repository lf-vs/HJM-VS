
// 4ʵ��4View.h : CMy4ʵ��4View ��Ľӿ�
//

#pragma once


class CMy4ʵ��4View : public CView
{
protected: // �������л�����
	CMy4ʵ��4View();
	DECLARE_DYNCREATE(CMy4ʵ��4View)

// ����
public:
	CMy4ʵ��4Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy4ʵ��4View();
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
};

#ifndef _DEBUG  // 4ʵ��4View.cpp �еĵ��԰汾
inline CMy4ʵ��4Doc* CMy4ʵ��4View::GetDocument() const
   { return reinterpret_cast<CMy4ʵ��4Doc*>(m_pDocument); }
#endif

