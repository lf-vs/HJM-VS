
// 8ʵ��2��3��.h : 8ʵ��2��3�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy8ʵ��2��3��App:
// �йش����ʵ�֣������ 8ʵ��2��3��.cpp
//

class CMy8ʵ��2��3��App : public CWinApp
{
public:
	CMy8ʵ��2��3��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy8ʵ��2��3��App theApp;
