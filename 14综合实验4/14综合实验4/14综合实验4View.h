
// 14�ۺ�ʵ��4View.h : CMy14�ۺ�ʵ��4View ��Ľӿ�
//

#pragma once

class CMy14�ۺ�ʵ��4Set;

class CMy14�ۺ�ʵ��4View : public CRecordView
{
protected: // �������л�����
	CMy14�ۺ�ʵ��4View();
	DECLARE_DYNCREATE(CMy14�ۺ�ʵ��4View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY144_FORM };
#endif
	CMy14�ۺ�ʵ��4Set* m_pSet;

// ����
public:
	CMy14�ۺ�ʵ��4Doc* GetDocument() const;

// ����
public:
	CString path,filename;
// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CMy14�ۺ�ʵ��4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString number;
	CString name;
	CString sex;
	long sore;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	CString photo;
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnFind();
	afx_msg void OnSort();
	afx_msg void OnRemember();
	afx_msg void OnBnClickedButton2();
};

#ifndef _DEBUG  // 14�ۺ�ʵ��4View.cpp �еĵ��԰汾
inline CMy14�ۺ�ʵ��4Doc* CMy14�ۺ�ʵ��4View::GetDocument() const
   { return reinterpret_cast<CMy14�ۺ�ʵ��4Doc*>(m_pDocument); }
#endif

