
// 4ʵ��1.h : 4ʵ��1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy4ʵ��1App:
// �йش����ʵ�֣������ 4ʵ��1.cpp
//

class CMy4ʵ��1App : public CWinApp
{
public:
	CMy4ʵ��1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy4ʵ��1App theApp;
