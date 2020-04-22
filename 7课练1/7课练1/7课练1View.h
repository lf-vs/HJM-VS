
// 7课练1View.h : CMy7课练1View 类的接口
//

#pragma once


class CMy7课练1View : public CView
{
protected: // 仅从序列化创建
	CMy7课练1View();
	DECLARE_DYNCREATE(CMy7课练1View)

// 特性
public:
	CMy7课练1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy7课练1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOnput();
};

#ifndef _DEBUG  // 7课练1View.cpp 中的调试版本
inline CMy7课练1Doc* CMy7课练1View::GetDocument() const
   { return reinterpret_cast<CMy7课练1Doc*>(m_pDocument); }
#endif

