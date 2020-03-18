
// 2实验6View.h : CMy2实验6View 类的接口
//

#pragma once


class CMy2实验6View : public CView
{
protected: // 仅从序列化创建
	CMy2实验6View();
	DECLARE_DYNCREATE(CMy2实验6View)

// 特性
public:
	CMy2实验6Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy2实验6View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 2实验6View.cpp 中的调试版本
inline CMy2实验6Doc* CMy2实验6View::GetDocument() const
   { return reinterpret_cast<CMy2实验6Doc*>(m_pDocument); }
#endif

