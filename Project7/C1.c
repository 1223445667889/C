#define _CRT_SECURE_NO_WANINGS 1
#define SS 10
#include <stdio.h>
//int check_sys()
//{
//	int a = 1;
//	return  *(char*)&a;
//}
int main()
{
	//float b = 10.0;
	//unsigned n = 10;
	//double  s = 10.00;
	//int ret = check_sys();
	//if (ret == 1)
	//{
	//	printf("С��\n");
	//}
	//else
	//{
	//	printf("���\n");
	//}

	char a = -1;
	signed char b = -1;
	unsigned char c=-1;
	printf("a=%d,b=%d,c=%d", a, b, c);// 
		return 0; 
//���� - unsigned  ԭ �� �� ��ͬ
//		 signed    ������   �� ԭ �� �� ��ͬ
//                          �� ԭ �� �� ��ͬ
// ��(���ݸ�λ�����ڴ�͵�ַ��)С(���ݸ�λ�����ڴ�ߵ�ַ��)�˴洢 ���ֽڵ�˳��
//ָ�����ͣ�1��ָ�����;�����ָ������ò����ܷ��ʼ����ֽ� char*p�� *p����һ���ֽڣ�int*p�����ĸ��ֽ�
//          2, ָ�����;�����ָ��+1,-1;char*p,p+1����һ���ֽڣ�int*p��p+1�����ĸ��ֽ� 
}
//int main()
//{
//	int y = 9;
//	for (; y > 0; y--)
//	{
//		if (y % 3 == 0)
//		{
//			printf("%d",--y);
//		}
//	}
//}