
// 5ʵ��5��1��.h : 5ʵ��5��1�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy5ʵ��5��1��App:
// �йش����ʵ�֣������ 5ʵ��5��1��.cpp
//

class CMy5ʵ��5��1��App : public CWinApp
{
public:
	CMy5ʵ��5��1��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy5ʵ��5��1��App theApp;
