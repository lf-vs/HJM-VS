// L32D.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "L32D.h"


// ���ǵ���������һ��ʾ��
L32D_API int nL32D=0;

// ���ǵ���������һ��ʾ����
L32D_API int fnL32D(void)
{
    return 42;
}

L32D_API int factorial(int n)
{
	int sum = 1;
	for (int i = 1;i <= n;i++) {
		sum = sum*i;
	}
	return sum;
}

L32D_API float FAC::convert(float deg) {
	float n;
	n = deg*3.14 / 180;
	return n;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� L32D.h
CL32D::CL32D()
{
    return;
}
