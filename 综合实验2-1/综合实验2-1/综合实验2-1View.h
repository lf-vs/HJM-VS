
// �ۺ�ʵ��2-1View.h : C�ۺ�ʵ��21View ��Ľӿ�
//

#pragma once

class C�ۺ�ʵ��21Set;

class C�ۺ�ʵ��21View : public CRecordView
{
protected: // �������л�����
	C�ۺ�ʵ��21View();
	DECLARE_DYNCREATE(C�ۺ�ʵ��21View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY21_FORM };
#endif
	C�ۺ�ʵ��21Set* m_pSet;

// ����
public:
	C�ۺ�ʵ��21Doc* GetDocument() const;

// ����
public:
	CString filename,path;
// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~C�ۺ�ʵ��21View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString name;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // �ۺ�ʵ��2-1View.cpp �еĵ��԰汾
inline C�ۺ�ʵ��21Doc* C�ۺ�ʵ��21View::GetDocument() const
   { return reinterpret_cast<C�ۺ�ʵ��21Doc*>(m_pDocument); }
#endif

