#define _CRT_SECURE_NO_WANINGS 1
#include <stdio.h>
#include <string.h>
#define N 4

//void fun(int A[][N])
//{
//	int B[N][N], i, j;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			B[i][j] = A[N - 1 - j][i];
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			A[i][j] = B[i][j];
//		}
//	}
//}
//int main()
//{
//	int X[N][N] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} },i;
//	fun(X);
//	for (i = 0; i < N; i++)
//	{
//		printf("%d,",X[i][i]);
//	}
//}

//void fun(int a[],int n)
//{
//	int i, j = 0, k = n - 1, b[10] = {0};
//	for (i = 0; i < n / 2; i++)
//	{
//		b[i] = a[j];
//		b[k] = a[j + 1];
//		j += 2;
//		k--;
//	}
//	for (i = 0; i < n; i++)
//	{
//		a[i] = b[i];
//	}
//}
//int main()
//{
//	int c[10] = {10,9,8,7,6,5,4,3,2,1},i;
//	fun(c,10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n",c[i]);
//	}
//}

//int m1(int x, int y)
//{
//	return x <= y ? x : y;
//}
//int m2(int x, int y)
//{
//	return x <= y ? y : x;
//}
//int fun(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int x = 2, y = 3, z = 1;
//	printf("%d\n",fun(m1(x,y),m2(y,z)));
//}

//int f(int x)
//{
//	return x * 2;
//}
//int main()
//{
//	int n = 1, m;
//	m = f(f(f(n)));
//	printf("%d\n", m);
//}

//void fun(int a[], int n)
//{
//	int i, t;
//	for (i = 0; i < n / 2; i++)
//	{
//		t = a[i];
//		a[i] = a[n - 1 - i];
//		a[n - 1 - i] = t;
//	}
//}
//int main()
//{
//	int k[10] = {1,2,3,4,5,6,7,8,9,10},i;
//	fun(k, 5);
//	for (i = 2; i < 8; i++)
//	{
//		printf("%d",k[i]);
//	}
//}

//void fun(int a[][N], int b[])
//{
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		b[i] = a[i][i]-a[i][N-1-i];
//	}
//}
//int main()
//{
//	int x[N][N] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} },y[N],i;
//	fun(x,y);
//	for (i = 0; i < N; i++)
//	{
//		printf("%d,",y[i]);
//	}
//}

//int fun(int x, int y)
//{
//	if (x != y)
//		return ((x + y) / 2);
//	else
//		return (x);
//}
//int main() 
//{
//	int a = 4, b = 5, c = 6;
//	printf("%d\n",fun(2*a,fun(b,c)));
//}

int f(int x, int y)
{
	return ((y - x) * x);
}
int main()
{
	int a = 3, b = 4, c = 5, d;
	d = f(f(a, b), f(a, c));
	printf("%d\n",d);
}