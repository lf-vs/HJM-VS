
// 14综合实验4View.h : CMy14综合实验4View 类的接口
//

#pragma once

class CMy14综合实验4Set;

class CMy14综合实验4View : public CRecordView
{
protected: // 仅从序列化创建
	CMy14综合实验4View();
	DECLARE_DYNCREATE(CMy14综合实验4View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY144_FORM };
#endif
	CMy14综合实验4Set* m_pSet;

// 特性
public:
	CMy14综合实验4Doc* GetDocument() const;

// 操作
public:
	CString path,filename;
// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CMy14综合实验4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
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

#ifndef _DEBUG  // 14综合实验4View.cpp 中的调试版本
inline CMy14综合实验4Doc* CMy14综合实验4View::GetDocument() const
   { return reinterpret_cast<CMy14综合实验4Doc*>(m_pDocument); }
#endif

