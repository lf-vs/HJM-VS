
// 3����ʵ��.h : 3����ʵ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy3����ʵ��App:
// �йش����ʵ�֣������ 3����ʵ��.cpp
//

class CMy3����ʵ��App : public CWinApp
{
public:
	CMy3����ʵ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy3����ʵ��App theApp;
