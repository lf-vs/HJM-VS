
// 6ʵ��3View.h : CMy6ʵ��3View ��Ľӿ�
//

#pragma once


class CMy6ʵ��3View : public CView
{
protected: // �������л�����
	CMy6ʵ��3View();
	DECLARE_DYNCREATE(CMy6ʵ��3View)

// ����
public:
	CMy6ʵ��3Doc* GetDocument() const;

// ����
public:
	CString s;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy6ʵ��3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // 6ʵ��3View.cpp �еĵ��԰汾
inline CMy6ʵ��3Doc* CMy6ʵ��3View::GetDocument() const
   { return reinterpret_cast<CMy6ʵ��3Doc*>(m_pDocument); }
#endif

