
// 2ʵ��7.h : 2ʵ��7 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy2ʵ��7App:
// �йش����ʵ�֣������ 2ʵ��7.cpp
//

class CMy2ʵ��7App : public CWinApp
{
public:
	CMy2ʵ��7App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy2ʵ��7App theApp;
