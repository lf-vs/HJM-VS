
// 9ʵ��2.h : 9ʵ��2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy9ʵ��2App:
// �йش����ʵ�֣������ 9ʵ��2.cpp
//

class CMy9ʵ��2App : public CWinApp
{
public:
	CMy9ʵ��2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy9ʵ��2App theApp;
