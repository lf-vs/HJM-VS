
// USingW32DllView.h : CUSingW32DllView ��Ľӿ�
//

#pragma once


class CUSingW32DllView : public CView
{
protected: // �������л�����
	CUSingW32DllView();
	DECLARE_DYNCREATE(CUSingW32DllView)

// ����
public:
	CUSingW32DllDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CUSingW32DllView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // USingW32DllView.cpp �еĵ��԰汾
inline CUSingW32DllDoc* CUSingW32DllView::GetDocument() const
   { return reinterpret_cast<CUSingW32DllDoc*>(m_pDocument); }
#endif

