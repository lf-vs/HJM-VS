
// 11ʵ��12View.h : CMy11ʵ��12View ��Ľӿ�
//

#pragma once

class CMy11ʵ��12Set;

class CMy11ʵ��12View : public CRecordView
{
protected: // �������л�����
	CMy11ʵ��12View();
	DECLARE_DYNCREATE(CMy11ʵ��12View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY1112_FORM };
#endif
	CMy11ʵ��12Set* m_pSet;

// ����
public:
	CMy11ʵ��12Doc* GetDocument() const;

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
	virtual ~CMy11ʵ��12View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit4();
	long Number;
	CString name;
	long age;
	CString xingb;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // 11ʵ��12View.cpp �еĵ��԰汾
inline CMy11ʵ��12Doc* CMy11ʵ��12View::GetDocument() const
   { return reinterpret_cast<CMy11ʵ��12Doc*>(m_pDocument); }
#endif

