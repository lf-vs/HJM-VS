
// USingW32Dll.h : USingW32Dll Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CUSingW32DllApp:
// �йش����ʵ�֣������ USingW32Dll.cpp
//

class CUSingW32DllApp : public CWinApp
{
public:
	CUSingW32DllApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CUSingW32DllApp theApp;
