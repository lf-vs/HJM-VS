
// 11ʵ��View.h : CMy11ʵ��View ��Ľӿ�
//

#pragma once

class CMy11ʵ��Set;

class CMy11ʵ��View : public CRecordView
{
protected: // �������л�����
	CMy11ʵ��View();
	DECLARE_DYNCREATE(CMy11ʵ��View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY11_FORM };
#endif
	CMy11ʵ��Set* m_pSet;

// ����
public:
	CMy11ʵ��Doc* GetDocument() const;

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
	virtual ~CMy11ʵ��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString name;
	CString number;
	CString age;
	CString phone;
};

#ifndef _DEBUG  // 11ʵ��View.cpp �еĵ��԰汾
inline CMy11ʵ��Doc* CMy11ʵ��View::GetDocument() const
   { return reinterpret_cast<CMy11ʵ��Doc*>(m_pDocument); }
#endif

