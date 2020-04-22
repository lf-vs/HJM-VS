
// 6实验5View.h : CMy6实验5View 类的接口
//

#pragma once


class CMy6实验5View : public CView
{
protected: // 仅从序列化创建
	CMy6实验5View();
	DECLARE_DYNCREATE(CMy6实验5View)

// 特性
public:
	CMy6实验5Doc* GetDocument() const;

// 操作
public:
	CString s,ss;
	CPoint cpoint;
	CArray<CString, CString>m;
	CRect cr;
	int x, flag, h;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy6实验5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 6实验5View.cpp 中的调试版本
inline CMy6实验5Doc* CMy6实验5View::GetDocument() const
   { return reinterpret_cast<CMy6实验5Doc*>(m_pDocument); }
#endif

