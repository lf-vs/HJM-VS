
// 8ʵ��4��13��.h : 8ʵ��4��13�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy8ʵ��4��13��App:
// �йش����ʵ�֣������ 8ʵ��4��13��.cpp
//

class CMy8ʵ��4��13��App : public CWinApp
{
public:
	CMy8ʵ��4��13��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy8ʵ��4��13��App theApp;
