
// 5ʵ��4View.h : CMy5ʵ��4View ��Ľӿ�
//

#pragma once


class CMy5ʵ��4View : public CView
{
protected: // �������л�����
	CMy5ʵ��4View();
	DECLARE_DYNCREATE(CMy5ʵ��4View)

// ����
public:
	CMy5ʵ��4Doc* GetDocument() const;

// ����
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy5ʵ��4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 5ʵ��4View.cpp �еĵ��԰汾
inline CMy5ʵ��4Doc* CMy5ʵ��4View::GetDocument() const
   { return reinterpret_cast<CMy5ʵ��4Doc*>(m_pDocument); }
#endif

