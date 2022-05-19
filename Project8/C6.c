#define _CRT_SECURE_NO_WANINGS 1
#include <stdio.h>
#include <string.h>
#define N 4
//char f(char x)
//{
//	return (x*x+'a');
//}
//int main()
//{
//	char a, b = 0;
//	for (a = 0; a < 4; a += 1)
//	{
//		b = f(a);
//		putchar(b);
//	}
//}

//void fun(int a[][N], int b[], int flag)
//{
//	int i, j;
//	for (i = 0; i < N; i++)
//	{
//		b[i] = a[i][0];
//		for (j = 1; j < N; j++)
//		{
//			if (flag ? (b[i] > a[i][j]) : (b[i] < a[i][j]))
//			{
//				b[i] = a[i][j];
//			}
//		}
//	}
//}
//int main()
//{
//	int x[N][N] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16},y[N],i;
//	fun(x,y,1);
//	for (i = 0; i < N; i++)
//	{
//		printf("%d,",y[i]);
//	}
//	fun(x, y, 0);
//	for (i = 0; i < N; i++)
//	{
//		printf("%d,", y[i]);
//	}
//}

//void fun(int a[], int n)
//{
//	int t=0, i, j;
//	for (i = 1; i < n; i+=2)
//	{
//		for (j = i+2; j < n; j+=2)
//		{
//			if (a[i] > a[j])
//			{
//				t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//		}
//	}
//
//}
//int main()
//{
//	int c[10] = {10,9,8,7,6,5,4,3,2,1},i;
//	fun(c,10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d,",c[i]);
//	}
//}
//
//char f(char x)
//{
//	return x * x % 10 + '0';
//}
//int main()
//{
//	char a;
//	int b = 0;
//	for (a = 0; a < 5; a++)
//	{
//		b = f(a);
//		putchar(b);
//	}
//}

//int fun(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int x = 6, y = 7, z = 8, r;
//	r = fun(fun(x,y),z--);
//	printf("%d\n",r);
//}

//int funa(int a, int b)
//{
//	return a + b;
//}
//int funb(int a, int b)
//{
//	return a - b;
//}
//int sss(int(*t), int x, int y)
//{
//	return ((*t),(x, y));
//}
//int main()
//{
//	int x;
//	x = sss(funa, 9, 3);
//	x += sss(funb, 8, 3);
//	printf("%d\n",x);
//}

//void fun(int a, int b, int c)
//{
//	a = b;
//	b = c;
//	c = a;
//}
//int main()
//{
//	int a = 10, b = 20, c = 30;
//	fun(a,b,c);
//	printf("%d,%d,%d\n",c,b,a);
//}

//void fun(int a[][N])
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
//			a[i][j] = b[i][j];
//		}
//	}
//}
//int main()
//{
//	int x[N][N] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} },i;
//	fun(x);
//	fun(x);
//	for (i = 0; i < N; i++)
//	{
//		printf("%d,",x[i][i]);
//	}
//}