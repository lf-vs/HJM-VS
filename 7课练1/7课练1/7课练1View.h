
// 7����1View.h : CMy7����1View ��Ľӿ�
//

#pragma once


class CMy7����1View : public CView
{
protected: // �������л�����
	CMy7����1View();
	DECLARE_DYNCREATE(CMy7����1View)

// ����
public:
	CMy7����1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy7����1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOnput();
};

#ifndef _DEBUG  // 7����1View.cpp �еĵ��԰汾
inline CMy7����1Doc* CMy7����1View::GetDocument() const
   { return reinterpret_cast<CMy7����1Doc*>(m_pDocument); }
#endif

