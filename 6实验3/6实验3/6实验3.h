
// 6ʵ��3.h : 6ʵ��3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy6ʵ��3App:
// �йش����ʵ�֣������ 6ʵ��3.cpp
//

class CMy6ʵ��3App : public CWinApp
{
public:
	CMy6ʵ��3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy6ʵ��3App theApp;
