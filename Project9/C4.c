#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 4

//int fun(int a, int b)
//{
//	int t;
//	t = a;
//	a = b;
//	b = t;
//}
//int main()
//{
//	int c[10] = {1,2,3,4,5,6,7,8,9,0},i;
//	for (i = 0; i < 10; i+=2)
//	{
//		fun(c[i], c[i + 1]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d,",c[i]);
//	}
//}

//double f(double x)
//{
//	return x * x + 1;
//}
//int main()
//{
//	double a = 0.0; int i;
//	for (i = 0; i < 30; i+=10)
//	{
//		a += f((double)i);
//	}
//	printf("%3.0lf\n", a);
//}

//void fun(int a[][N], int b[])
//{
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		b[i] = a[i][i];
//	}
//}
//int main()
//{
//	int x[][N] = { {1,2,3},{4},{5,6,7,8},{9,10} }, y[N], i;
//	fun(x,y);
//	for (i = 0; i < N; i++)
//	{
//		printf("%d,",y[i]);
//	}
//}

//void f(int b[], int n, int flag)
//{
//	int i, j, t;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (flag ? b[i] > b[j]:b[i] < b[j])
//			{
//				t = b[i];
//				b[i] = b[j];
//				b[j] = t;
//			}
//		}
//	}
//}
//int main()
//{
//	int a[10] = {5,4,3,2,1,6,7,8,9,10},i;
//	f(&a[2], 5, 0);
//	f(a, 5, 1);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d,",a[i]);
//	}
//}

//int fun1(double a)
//{
//	return (int)(a *= a);
//}
//int fun2(double x, double y)
//{
//	double a = 0, b = 0;
//	a = fun1(x);
//	b = fun1(y);
//	return (int)(a + b);
//}
//int main()
//{
//	double w;
//	w = fun2(1.1, 2.0);
//	printf("%4.2lf",w);
//}

//void f(int b[])
//{
//	int i;
//	for (i = 2; i < 6; i++)
//	{
//		b[i] *= 2;
//	}
//}
//int main()
//{
//	int a[10] = {1,2,3,4,5,6,7,8,9,10},i;
//	f(a);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d,",a[i]);
//	}
//}

//int fun(char s[])
//{
//	int n = 0;
//	while (*s <= '9' && *s >= '0')
//	{
//		n = 10 * n + *s - '0';
//		s++;
//		return (n);
//	}
//}
//int main()
//{
//	char s[10] = { '6','1','*','4','*','9','*','0','*' };
//	printf("%d\n",fun(s));
//}

void fun(int* a, int n)
{
	int i, j, t;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}
int main()
{
	int c[10] = {1,2,3,4,5,6,7,8,9,0},i;
	fun(c+4,6);
	for (i = 0; i < 10; i++)
	{
		printf("%d,",c[i]);
	}
}