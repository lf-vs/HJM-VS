
// 11ʵ��3View.h : CMy11ʵ��3View ��Ľӿ�
//

#pragma once

class CMy11ʵ��3Set;

class CMy11ʵ��3View : public CRecordView
{
protected: // �������л�����
	CMy11ʵ��3View();
	DECLARE_DYNCREATE(CMy11ʵ��3View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY113_FORM };
#endif
	CMy11ʵ��3Set* m_pSet;

// ����
public:
	CMy11ʵ��3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CMy11ʵ��3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString file;
	long number;
	CString name;
	long age;
	CString xingb;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // 11ʵ��3View.cpp �еĵ��԰汾
inline CMy11ʵ��3Doc* CMy11ʵ��3View::GetDocument() const
   { return reinterpret_cast<CMy11ʵ��3Doc*>(m_pDocument); }
#endif

