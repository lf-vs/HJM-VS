// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� L32D_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// L32D_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef L32D_EXPORTS
#define L32D_API __declspec(dllexport)
#else
#define L32D_API __declspec(dllimport)
#endif

// �����Ǵ� L32D.dll ������
class L32D_API CL32D {
public:
	CL32D(void);
	// TODO:  �ڴ�������ķ�����
};

extern L32D_API int nL32D;

L32D_API int fnL32D(void);

L32D_API int factorial(int n);

class L32D_API FAC {
public:
	float convert(float deg);
};