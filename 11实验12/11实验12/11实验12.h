
// 11ʵ��12.h : 11ʵ��12 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy11ʵ��12App:
// �йش����ʵ�֣������ 11ʵ��12.cpp
//

class CMy11ʵ��12App : public CWinApp
{
public:
	CMy11ʵ��12App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy11ʵ��12App theApp;
