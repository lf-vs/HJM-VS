
// 1������ϰ.h : 1������ϰ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy1������ϰApp:
// �йش����ʵ�֣������ 1������ϰ.cpp
//

class CMy1������ϰApp : public CWinApp
{
public:
	CMy1������ϰApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy1������ϰApp theApp;
