
// 9ʵ��1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMy9ʵ��1App: 
// �йش����ʵ�֣������ 9ʵ��1.cpp
//

class CMy9ʵ��1App : public CWinApp
{
public:
	CMy9ʵ��1App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMy9ʵ��1App theApp;