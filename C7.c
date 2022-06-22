#define _CRT_SECURE_NO_WARNING 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//int* f(int* s, int* t)
//{
//	if (*s < *t)
//		s = t;
//	return s;
//}
//int main()
//{
//	int i = 3, j = 5, * p = &i, * q = &j, * r;
//	r = f(p,q);
//	printf("%d,%d,%d,%d,%d\n",i,j,*p,*q,*r);
//}

//int* f(int* s)
//{
//	s[1] += 6;
//	*s = 7;
//	s += 2;
//	return s;
//}
//int main()
//{
//	int a[5] = {1,2,3,4,5},*p=a;
//	p = f(p);
//	printf("%d,%d,%d\n",a[0],a[1],*p);
//}

//int* f(int* s, int* t)
//{
//	if (*s < *t)
//		*s = *t;
//	return s;
//}
//int main()
//{
//	int i = 3, j = 5, * p = &i, * q = &j, * r;
//	r = f(p,q);
//	printf("%d,%d,%d,%d,%d\n",i,j,*p,*q,*r);
//}

//#define S(x) 4*(x)*x+1
//int main()
//{
//	int k = 5, j = 2;
//	printf("%d\n",S(k+j));
//}

//#define USB(a) (a)-(a)
//int main()
//{
//	int a = 2, b = 3, c = 5, d;
//	d = USB(a + b) * c;
//	printf("%d\n",d);
//}

//#define f(x) x*x*x
//int main()
//{
//	int a = 3, s, t;
//	s = f(a + 1);
//	t = f((a+1));
//	printf("%d,%d\n",s,t);
//}