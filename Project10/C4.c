#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 4


//void f(int *p, int *q)
//{
//	p = p + 1;
//	*q = *q + 1;
//}
//int main()
//{
//	int m = 1, n = 2.,* r = &m;
//	f(r, &n);
//	printf("%d,%d",m,n);
//}

//int *fun(int *a, int *b)
//{
//	int c;
//	c = *a; *a = *b; *b = c;
//	return c;
//}
//int main()
//{
//	int x = 3, y = 5, * p = &x, * q = &y;
//	fun(p,q);
//	printf("%d,%d,",*p,*q);
//	fun(&x,&y);
//	printf("%d,%d\n",*p,*q);
//}

//void sp(int* a)
//{
//	int b = 2;
//	a = &b;
//	*a = *a * 2;
//	printf("%d,",*a);
//}
//int main()
//{
//	int k = 3, * p = &k;
//	sp(p);
//	printf("%d,%d\n",k,*p);
//}

//void f(int** s)
//{
//	int k = 7;
//	int *t = &k;
//	*s = t;
//	printf("%d,%d,%d,",k,*t,**s);
//}
//int main()
//{
//	int i = 3, * p = &i, ** r = &p;
//	f(r);
//	printf("%d,%d,%d\n",i,*p,**r);
//}

//void sp(int* a)
//{
//	int b = 2;
//	*a = *a * 2; 
//	printf("%d,",*a);
//	a = &b;
//	*a = *a * 2;
//	printf("%d,",*a);
//}
//int main()
//{
//	int k = 3;
//	sp(&k);
//	printf("%d\n",k);
//}

//int k = 7, m = 5;
//void f(int** s)
//{
//	int* t = &k;
//	s = &t;
//	*s = &m;
//	printf("%d,%d,%d\n",k,*t,**s);
//}
//int main()
//{
//	int i = 3, * p = &i, ** r = &p;
//	f(r);
//	printf("%d,%d,%d\n",i,*p,**r);
//}

//int main()
//{
//	int y = 1, x, a[] = {2,4,6,8,10},*p;
//	p = &a[1];
//	for (x = 0; x < 3; x++)
//	{
//		y = y + *(p + x);
//	}
//	printf("%d\n",y);
//}

//void fun(int* s, int n, int* k)
//{
//	int i;
//	for (i = 0, *k = i; i < n; i++)
//	{
//		if (s[i] > s[*k])
//			*k = i;
//	}
//}
//int main()
//{
//	int a[5] = {1,6,2,8,0},k;
//	fun(a,5,&k);
//	printf("%d %d\n",k,a[k]);
//}