
// 10ʵ��.h : 10ʵ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy10ʵ��App:
// �йش����ʵ�֣������ 10ʵ��.cpp
//

class CMy10ʵ��App : public CWinApp
{
public:
	CMy10ʵ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy10ʵ��App theApp;
