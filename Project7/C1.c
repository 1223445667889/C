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
	//	printf("小段\n");
	//}
	//else
	//{
	//	printf("大段\n");
	//}

	char a = -1;
	signed char b = -1;
	unsigned char c=-1;
	printf("a=%d,b=%d,c=%d", a, b, c);// 
		return 0; 
//整数 - unsigned  原 反 补 相同
//		 signed    分正负   正 原 反 补 相同
//                          负 原 反 补 不同
// 大(数据高位放在内存低地址处)小(数据高位放在内存高地址处)端存储 （字节的顺序）
//指针类型：1，指针类型决定了指针解引用操作能访问几个字节 char*p； *p访问一个字节；int*p访问四个字节
//          2, 指针类型决定了指针+1,-1;char*p,p+1跳过一个字节；int*p，p+1跳过四个字节 
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