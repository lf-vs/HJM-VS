
// �ۺ�ʵ��3.h : �ۺ�ʵ��3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�ۺ�ʵ��3App:
// �йش����ʵ�֣������ �ۺ�ʵ��3.cpp
//

class C�ۺ�ʵ��3App : public CWinApp
{
public:
	C�ۺ�ʵ��3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�ۺ�ʵ��3App theApp;
