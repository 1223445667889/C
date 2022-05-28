#define _CRT_SECURE_NO_WANINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define N 3
//
//int main()
//{
//	int a[10] = {0},i=0,*p=a;
//	while (p < a + 9)
//	{
//		*p = ++i;
//		p += 2;
//	}
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d",a[i]);
//	}
//}

//int fun(int a[],int n ,int x)
//{
//	int* p = a;
//	while (p < a + n && *p != x)
//		p++;
//		if (p < a + n)
//			return p - a;
//		else
//			return -1;
//}
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n",fun(a,10,10));
//}

//int main()
//{
//	int a[3][3] = { {1,3,5},{7,9,11},{13,15,17} };
//	int(*p)[3] = a, i, j, n = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			n += *(*(p + i) + j);
//		}
//	}
//	printf("%d\n",n);
//}

//int main()
//{
//	int a[4], p, x, i;
//	for (i = 3; i > 0; i--)
//		a[i - 1] = i * 2 - 1;
//	scanf_s("%d", &x);
//	i = 0;
//	while (a[i] < x)
//		i++;
//	p = i;
//	for (i = 3; i > p; i--)
//		a[i] = a[i - 1];
//	a[p] = x;
//	for (i = 0; i < 4; i++)
//		printf("%3d",a[i]);
//}

//void change(char* array, int len)
//{
//	for (len--; len >= 0; len--)
//	{
//		array[len] += 1;
//	}
//}
//int main()
//{
//	int i;
//	char array[5] = "ABCD";
//	change(array, 4);
//	for (i = 0; i < 4; i++)
//	{
//		printf("%c",array[i]);
//	}
//}

//void fun(int x[][N], int* r1, int* r2)
//{
//	int i, j;
//	*r1 = *r2 = 0;
//	for (i = 0; i < N; i++)
//	{
//		j = N - (i + 1);
//		if (x[*r1][*r2] < x[i][j])
//		{
//			*r1 = i;
//			*r2 = j;
//		}
//	}
//}
//int main()
//{
//	int a[N][N] = {1,5,7,9,2,6,4,3,8},i,j;
//	fun(a, &i, &j);
//	printf("%d\n",a[i][j]);
//}

//int main()
//{
//	int i, k=0, a[10];
//	for (i = 0; i < 10; i++)
//		a[i] = i;
//	for (i = 0; i < 4; i++)
//		k += a[i] + i;
//	printf("%d\n",k);
//}

//int fun(int* b, int n)
//{
//	int i, r = 1;
//	for (i = 0; i <= n; i++)
//		r = r * b[i];
//	return r;
//}
//int main()
//{
//	int x, a[] = { 2,3,4,5,6,7,8,9 };
//	x = fun(a, 3);
//	printf("%d\n",x);
//}