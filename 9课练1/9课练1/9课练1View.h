
// 9����1View.h : CMy9����1View ��Ľӿ�
//

#pragma once


class CMy9����1View : public CView
{
protected: // �������л�����
	CMy9����1View();
	DECLARE_DYNCREATE(CMy9����1View)

// ����
public:
	CMy9����1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy9����1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
	afx_msg void OnFileSaveAs();
};

#ifndef _DEBUG  // 9����1View.cpp �еĵ��԰汾
inline CMy9����1Doc* CMy9����1View::GetDocument() const
   { return reinterpret_cast<CMy9����1Doc*>(m_pDocument); }
#endif

