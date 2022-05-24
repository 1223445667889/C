#define _CRT_SECURE_NO_WANINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int fun(int a, int b)
//{
//	static int m = 0, i = 2;
//	i += m + 1;
//	m = i + a + b;
//	return m;
//}
//int main()
//{
//	int k = 4, m = 1, p;
//	p = fun(k, m);
//	printf("%d,",p);
//	p = fun(k, m);
//	printf("%d\n",p);
//}

//void convert(char ch)
//{
//	if (ch < 'D')
//	{
//		convert(ch + 1);
//	}
//	printf("%c",ch);
//}
//int main()
//{
//	convert('A');
//}

//int sum(int data)
//{
//	static int init = 0;
//	return init += data;
//}
//int main()
//{
//	int i;
//	for (i = 1; i <= 5; i++)
//	{
//		printf("%d,",sum(i));
//	}
//}

//int* sum(int data)
//{
//	static int init = 0;
//	init += data;
//	return &init;
//}
//int main()
//{
//	int i, * p;
//	for (i = 1; i <= 4; i++)
//	{
//		sum(i);
//	}
//	p = sum(0);
//	printf("%d\n",*p);
//}

//void b(int);
//void a(int i)
//{
//	printf("*");
//	if (i > 0)
//		b(i - 1);
//}
//void b(int i)
//{
//	printf("#");
//	if (i > 0)
//		b(--i);
//}
//int main()
//{
//	a(3);
//}

//int fun(int n)
//{
//	static int t = 1;
//	int i = 1;
//	for (; i <= n; i++)
//		t *= i;
//	return t;
//}
//int main()
//{
//	int t = 1, i;
//	for (i = 2; i < 4; i++)
//		t += fun(i);
//	printf("%d\n", t);
//}

//void fun(int n)
//{
//	int i;
//	if ((i = n / 10) != 0)
//		fun(i);
//	putchar(n%10+'0');
//}
//int main()
//{
//	fun(256);
//}

struct computer
{
	char CPU[10];
};
int main()
{
	struct computer pc1, pc2;
	strcpy(pc1.CPU, "3.2G");
	strcpy(pc2.CPU, "???");
	pc1 = pc2;
	printf("%s\n",pc1.CPU);
}