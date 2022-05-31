#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 4

//int main()
//{
//	int m = 1, n = 2, * p = &m, * q = &n, * r;
//	r = p;
//	p = q;
//	q = r;
//	printf("%d%d%d%d\n",m,n,*p,*q);
//}

//int main()
//{
//	int i, s = 0, t[] = {1,2,3,4,5,6,7,8,9};
//	for (i = 0; i < 9; i += 2)
//	{
//		s += *(t + i);
//		printf("%d\n",s);
//	}
//}

//void f(int* q)
//{
//	int i = 0;
//	for (; i < 5; i++)
//	{
//		(*q)++;
//	}
//}
//int main()
//{
//	int a[5] = {1,2,3,4,5},i;
//	f(a);
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,",a[i]);
//	}
//}

//int fun(int(*s)[N], int n, int k)
//{
//	int m, i;
//	m = s[0][k];
//	for (i = 1; i < n; i++)
//	{
//		if (s[i][k] > m)
//		{
//			m = s[i][k];
//		}
//	}
//	return m;
//}
//int main()
//{
//	int a[N][N] = { {1,2,3,4},{11,12,13,14},{21,22,23,24},{31,32,33,34} };
//	printf("%d\n",fun(a,4,0));
//}

//void fun(int* c, int d)
//{
//	*c = *c + 1;
//	d = d + 1;
//	printf("%c,%c\n",*c,d);
//}
//int main()
//{
//	char b = 'a', a = 'A';
//	fun(&b,a);
//	printf("%c,%c\n",b,a);
//}

//void fun(char* c)
//{
//	while (*c)
//	{
//		if (*c >= 'a' && *c <= 'z')
//			*c = *c - ('a' - 'A');
//		c++;
//	}
//}
//int main()
//{
//	char s[81];
//	gets(s);
//	fun(s);
//	puts(s);
//}

//void fun(int* s, int n1, int n2)
//{
//	int i, j, t;
//	i = n1;
//	j = n2;
//	while (i < j)
//	{
//		t = s[i];
//		s[i] = s[j];
//		s[j] = t;
//		i++;
//		j--;
//	}
//}
//int main()
//{
//	int a[10] = {1,2,3,4,5,6,7,8,9,0},k;
//	fun(a, 0, 3);
//	fun(a,4,9);
//	fun(a,0,9);
//	for (k = 0; k < 10; k++)
//	{
//		printf("%d",a[k]);
//	}
//}

//int main()
//{
//
//	int a = 1, b = 3, c = 5;
//	int* p1 = &a, * p2 = &b, * p = &c;
//	*p = *p1 * (*p2);
//	printf("%d\n",c);
//}