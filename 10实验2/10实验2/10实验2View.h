
// 10ʵ��2View.h : CMy10ʵ��2View ��Ľӿ�
//

#pragma once


class CMy10ʵ��2View : public CView
{
protected: // �������л�����
	CMy10ʵ��2View();
	DECLARE_DYNCREATE(CMy10ʵ��2View)

// ����
public:
	CMy10ʵ��2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy10ʵ��2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 10ʵ��2View.cpp �еĵ��԰汾
inline CMy10ʵ��2Doc* CMy10ʵ��2View::GetDocument() const
   { return reinterpret_cast<CMy10ʵ��2Doc*>(m_pDocument); }
#endif

