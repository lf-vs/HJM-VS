
// 8ʵ��2��4��View.h : CMy8ʵ��2��4��View ��Ľӿ�
//

#pragma once


class CMy8ʵ��2��4��View : public CView
{
protected: // �������л�����
	CMy8ʵ��2��4��View();
	DECLARE_DYNCREATE(CMy8ʵ��2��4��View)

// ����
public:
	CMy8ʵ��2��4��Doc* GetDocument() const;

// ����
public:
	int c1, c2, c3;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy8ʵ��2��4��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMenu();
};

#ifndef _DEBUG  // 8ʵ��2��4��View.cpp �еĵ��԰汾
inline CMy8ʵ��2��4��Doc* CMy8ʵ��2��4��View::GetDocument() const
   { return reinterpret_cast<CMy8ʵ��2��4��Doc*>(m_pDocument); }
#endif

