
// ���ģ�ʵ��1.h : ���ģ�ʵ��1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C���ģ�ʵ��1App:
// �йش����ʵ�֣������ ���ģ�ʵ��1.cpp
//

class C���ģ�ʵ��1App : public CWinApp
{
public:
	C���ģ�ʵ��1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C���ģ�ʵ��1App theApp;
