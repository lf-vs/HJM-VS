
// 2ʵ��6View.h : CMy2ʵ��6View ��Ľӿ�
//

#pragma once


class CMy2ʵ��6View : public CView
{
protected: // �������л�����
	CMy2ʵ��6View();
	DECLARE_DYNCREATE(CMy2ʵ��6View)

// ����
public:
	CMy2ʵ��6Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy2ʵ��6View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 2ʵ��6View.cpp �еĵ��԰汾
inline CMy2ʵ��6Doc* CMy2ʵ��6View::GetDocument() const
   { return reinterpret_cast<CMy2ʵ��6Doc*>(m_pDocument); }
#endif

