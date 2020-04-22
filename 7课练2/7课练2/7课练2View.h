
// 7课练2View.h : CMy7课练2View 类的接口
//

#pragma once


class CMy7课练2View : public CView
{
protected: // 仅从序列化创建
	CMy7课练2View();
	DECLARE_DYNCREATE(CMy7课练2View)

// 特性
public:
	CMy7课练2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy7课练2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnInput();
};

#ifndef _DEBUG  // 7课练2View.cpp 中的调试版本
inline CMy7课练2Doc* CMy7课练2View::GetDocument() const
   { return reinterpret_cast<CMy7课练2Doc*>(m_pDocument); }
#endif

