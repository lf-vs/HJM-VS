
// 5ʵ��3View.h : CMy5ʵ��3View ��Ľӿ�
//

#pragma once


class CMy5ʵ��3View : public CView
{
protected: // �������л�����
	CMy5ʵ��3View();
	DECLARE_DYNCREATE(CMy5ʵ��3View)

// ����
public:
	CMy5ʵ��3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy5ʵ��3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowname();
};

#ifndef _DEBUG  // 5ʵ��3View.cpp �еĵ��԰汾
inline CMy5ʵ��3Doc* CMy5ʵ��3View::GetDocument() const
   { return reinterpret_cast<CMy5ʵ��3Doc*>(m_pDocument); }
#endif

