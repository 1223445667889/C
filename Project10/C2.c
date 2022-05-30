#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 4

//int f1(char* a, char b)
//{
//	char c; c = *a; *a = b; b = c;
//}
//int f2(char* a, char b)
//{
//	char c; c = a; a = b; b = c;
//}
//int f3(char* a, char *b)
//{
//	char c; c = *a; *a = *b; *b = c;
//}
//int main()
//{
//	char t1, t2;
//	t1 = 'A'; t2 = 'B'; f3(&t1, &t2); putchar(t1); putchar(t2);
//	t1 = 'A'; t2 = 'B'; f2(t1, t2); putchar(t1); putchar(t2);
//	t1 = 'A'; t2 = 'B'; f1(&t1, t2); putchar(t1); putchar(t2);
//}

//int fun(int a[], int n, int flag)
//{
//	int i = 0, j, t;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (flag)
//			{
//				if (a[i] < a[j])
//				{
//					t = a[i];
//					a[i] = a[j];
//					a[j] = t;
//				}
//			}
//			else
//			{
//				if (a[i] > a[j])
//				{
//					t = a[i];
//					a[i] = a[j];
//					a[j] = t;
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	int c[10] = {7,9,10,8,3,5,1,6,2,4},i;
//	fun(c,4,1);
//	fun(c+4,6,0);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n",c[i]);
//	}
//}

//int fun(int a[][N])
//{
//	int i, j, x = 0;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			if (i == j)
//				x += a[N - 1 - j][i];
//		}
//	}
//	return x;
//}
//int main()
//{
//	int y;
//	int x[N][N] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,17} };
//	y = fun(x);
//	printf("%d\n",y);
//}

//int main()
//{
//	int a[] = {2,4,6,8,10},i,*p,y=1;
//	p = &a[1];
//	for (i = 0; i < 3; i++)
//	{
//		y += *(p + i);
//	}
//	printf("%d\n",y);
//}

//int main()
//{
//	int a[] = {10,20,30,40},*p=a,i;
//	for (i = 0; i <= 3; i++)
//	{
//		a[i] = *p;
//		p++;
//	}
//	printf("%d\n",a[2]);
//}

int *fun(int *s,int* t)
{
	if (*s < *t)
		s = t;
	return s;
}
int main()
{
	int i = 3, j = 5, *p = &i, *q = &j, *r;
	r = fun(p,q);
	printf("%d ,%d ,%d ,%d ,%d\n", i, j, *p, *q, *r);
}