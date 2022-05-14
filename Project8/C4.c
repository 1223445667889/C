#define _CRT_SECURE_NO_WANINGS 1
#include <stdio.h>
#include <string.h>
#define N 3

//int m1(int x, int y)
//{
//	if (x <= y)
//		return 2 * x + 1;
//	else
//		return y;
//}
//int m2(int x, int y)
//{
//	if (x <= y)
//		return 2 * x + 1;
//	else
//		return x;
//}
//int main()
//{
//	int i, t1 = 10, t2 = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		t1 = m1(i,t1);
//		t2 = m2(i, t2);
//	}
//	printf("t1=%d t2=%d\n",t1,t2);
//}

//void fun(int x, int y, int* c, int* d)
//{
//	*c = x + y;
//	*d = x - y;
//}
//int main()
//{
//	int a = 4, b = 3, c = 0, d = 0;
//	fun(a, b, &c, &d);
//	printf("%d %d\n",c,d);
//}

//void fun(int* p, int* q)
//{
//	int t;
//	t = *p; *p = *q; *q = t; *q = *p;
//}
//int main()
//{
//	int a = 0, b = 9;
//	fun(&a,&b);
//	printf("%d %d\n",a,b);
//}

//char fun(char* c)
//{
//	if (*c <= 'Z' && *c >= 'A')
//	{
//		*c -= 'A' - 'a';
//	}
//	return *c;
//}
//int main()
//{
//	char s[81],*p=s;
//	gets(s);
//	while (*p)
//	{
//		*p = fun(p);
//		putchar(*p);
//		p++;
//	}
//}

//int f(int x)
//{
//	return x * x + 1;
//}
//int main()
//{
//	int a, b = 0;
//	for (a = 0; a < 3; a += 1)
//	{
//		b += f(a);
//		putchar('A'+b);
//	}
//}

//void fun(int a[][N], int b[])
//{
//	int i, j;
//	for (i = 0; i < N; i++)
//	{
//		b[i] = a[i][0];
//		for (j = 1; j < N; j++)
//		{
//			if (b[i] < a[i][j])
//				b[i] = a[i][j];
//		}
//	}
//}
//int main()
//{
//	int x[N][N] = { 1,2,3,4,5,6,7,8,9 }, y[N], i;
//	fun(x, y);
//	for (i = 0; i < N; i++)
//	{
//		printf("%d\n", y[i]);
//	}
//}

//int k = 5;
//void f(int* s)
//{
//	*s = k;
//}
//int main()
//{
//	int m = 3, * p = &m;
//	f(p);
//	printf("%d,%d",m,*p);
//}