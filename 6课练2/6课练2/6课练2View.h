
// 6����2View.h : CMy6����2View ��Ľӿ�
//

#pragma once


class CMy6����2View : public CView
{
protected: // �������л�����
	CMy6����2View();
	DECLARE_DYNCREATE(CMy6����2View)

// ����
public:
	CMy6����2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy6����2View();
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
};

#ifndef _DEBUG  // 6����2View.cpp �еĵ��԰汾
inline CMy6����2Doc* CMy6����2View::GetDocument() const
   { return reinterpret_cast<CMy6����2Doc*>(m_pDocument); }
#endif

