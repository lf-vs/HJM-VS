#include "stdafx.h"
#include "win32.h"

char* pchar() {
	return "�Ӿ�̬ȡ�õ��ַ�����";
}
/*
int F1::factorial(int n) {
	int sum = 1;
	for (int i = 1;i <= n;i++) {
		sum = sum*i;
	}
	return sum;
}*/

int factorial(int n) {
	int sum = 1;
	for (int i = 1;i <= n;i++) {
		sum = sum*i;
	}
	return sum;
}