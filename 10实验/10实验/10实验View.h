
// 10ʵ��View.h : CMy10ʵ��View ��Ľӿ�
//

#pragma once


class CMy10ʵ��View : public CView
{
protected: // �������л�����
	CMy10ʵ��View();
	DECLARE_DYNCREATE(CMy10ʵ��View)

// ����
public:
	CMy10ʵ��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy10ʵ��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 10ʵ��View.cpp �еĵ��԰汾
inline CMy10ʵ��Doc* CMy10ʵ��View::GetDocument() const
   { return reinterpret_cast<CMy10ʵ��Doc*>(m_pDocument); }
#endif

