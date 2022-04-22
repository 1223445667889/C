#define _CRT_SECURE_NO_WANINGS 1
#include <stdio.h>
#include <string.h>


//void fun(int x,int y ,int *c,int*d)
//{
//	*c = x + y;
//	*d = x - y;
//	x--;
//	y--;
//	--*c;
//	--*d;
//}
//int main()
//{
//	int a = 4, b = 3, c = 0, d = 0;
//	fun(a, b, &c, &d);
//	printf("%d %d %d %d\n",a,b,c,d);
//}

//void fun(int* p, int* q)
//{
//	int t;
//	t = *p;
//	*p = *q;
//	*q = t;
//	*q = *p;
//}
//int main()
//{
//	int a = 0, b = 9;
//	fun(&a, &b);
//	printf("%d %d\n",a,b);
//}

//char fun(char* c)
////´óÐ´×ÖÄ¸×ªÐ¡Ð´×ÖÄ¸
//{
//	int a = *c;
//	if (*c <= 'Z' && *c >= 'A')
//		*c -= 'A' - 'a';
//	else if (*c >= '0' && *c <= '9')
//		*c -= '9' - '0';
//	return *c;
//}
//int main()
//{
//	char s[81], * p = s;
//	gets(s);
//	while (*p)
//	{
//		*p = fun(p);
//		putchar(*p);
//		p++;
//	}
//	printf("\n");
//}

//int f(int x);
//int main()
//{
//	int a, b = 0;
//	for (a = 0; a <= 3; a++)
//	{
//		b += f(a);
//		putchar('A' + b);
//	}
//}
//int f(int x)
//{
//	return x*x+1;
//}

//#define N 3
//void fun(int a[][N], int b[])
//{
//	int i, j;
//	for (i = 0; i < N; i++)
//	{
//		b[i] = a[i][0];
//		for (j = 1; j < N; j++)
//		{
//			if (b[i] < a[i][j])
//			{
//				b[i] = a[i][j];
//			}
//		}
//	}
//}
//int main()
//{
//	int x[N][N] = { 1,2,3,4,5,6,7,8,9 }, y[N], i;
//	fun(x, y);
//	for (i = 0; i < N; i++)
//	{
//		printf("%d, ",y[i]);
//		printf("\n");
//	}
//}

//int k = 5;
//void f(int* s)
//{
//	*s = k;
//}
//int main()
//{
//	int m =  3, *p = &m;
//	f(p);
//	printf("%d,%d",m,*p);
//}

//#define N 4
//void fun(int a[N][N])
//{
//	int b[N][N], i, j;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			b[i][j] = a[N - 1 - j][i];
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			a[i][j] =b[i][j];
//		}
//	}
//}
//int main()
//{
//	int x[N][N] = { {1,2,3,4},{5,6,7,8}, {9,10,11,12}, {13,14,15,16} }, i;
//	fun(x);
//	for (i = 0; i < N; i++)
//	{
//		printf("%d,",x[i][i]);
//		printf("\n");
//	}
//}