
// 10ʵ��1View.h : CMy10ʵ��1View ��Ľӿ�
//

#pragma once


class CMy10ʵ��1View : public CView
{
protected: // �������л�����
	CMy10ʵ��1View();
	DECLARE_DYNCREATE(CMy10ʵ��1View)

// ����
public:
	CMy10ʵ��1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy10ʵ��1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 10ʵ��1View.cpp �еĵ��԰汾
inline CMy10ʵ��1Doc* CMy10ʵ��1View::GetDocument() const
   { return reinterpret_cast<CMy10ʵ��1Doc*>(m_pDocument); }
#endif

