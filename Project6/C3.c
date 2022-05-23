#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int  fun(int a, int b)
//{
//	int static m = 0, i = 2;
//	i = i + m + 1;
//	m = i + a + b;
//	return m;
//}
//int main()
//{
//	int k = 4, m = 1, p;
//	p = fun(k, m);
//	printf("%d,", p);
//	p = fun(k, m);
//	printf("%d\n", p);
//}

//void fun(int n, int* s)
//{
//	int f;
//	if (n == 1)
//		*s = n + 1;
//	else
//		fun(n - 1, &f),
//		*s=f;
//}
//int main()
//{
//	int x = 0;
//	fun(4, &x);
//	printf("%d\n",x);
//}

//void fun(int* s)
//{
//	static int j = 0;
//	do
//	{
//		s[j] += s[j + 1];
//	} while (++j < 2);
//}
//int main()
//{
//	int i, a[10] = {1,2,3,4,5};
//	for (i = 1; i < 3; i++)
//		fun(a);
//	for (i = 1; i < 5; i++)
//		printf("%d",a[i]);
//}

//void fun(int p)
//{
//	int d = 5;
//	d += p++;
//	printf("%d",d);
//}
//int main()
//{
//	int a = 3, d=1;
//	fun(a);
//	d += a++;
//	printf("%d\n",d);
//}

//int fun(int a)
//{
//	int b = 0;
//	static int c = 3;
//	a = (c++, b++);
//	return (a);
//}
//int main()
//{
//	int a = 2, i, k = 0;
//	for (i = 0; i < 2; i++)
//	{
//		k = fun(a++);
//		printf("%d\n",k);
//	}
//}

//int a = 1, b = 2;
//void fun1(int a,int b)
//{
//	printf("%d %d\n", a, b);
//}
//void fun2()
//{
//	a = 3, b = 4;
//}
//int main()
//{
//	fun1(5, 6);
//	fun2();
//	printf("%d %d\n",a,b);
//}


//void fun(int n)
//{
//	static int num = 1;
//	num += n;
//	printf("%d,", num);
//}
//int main()
//{
//	fun(3);
//	fun(4);
//}

//void f(int x[], int n)
//{
//	if (n > 1)
//	{
//		printf("%d,", x[n - 1]);
//		f(x, n - 1);
//	}
//	else
//		printf("%d,",x[0]);
//}
//int main()
//{
//	int a[6] = {1,2,3,4,5,6};
//	f(a, 6);
//}

//int a = 2;
//int  f()
//{
//	static int n = 0;
//	int m = 0;
//	n++, a++, m++;
//	return n + m + a;
//}
//int main()
//{
//	int k;
//	for (k = 0; k < 3; k++)
//		printf("%d,", f());
//}

int main()
{
	int i = 1, j = 3;
	printf("%d,",i++);
	{
		int i = 0;
		i += j * 2;
		printf("%d,%d,",i,j);
	}
	printf("%d,%d\n",i,j);
}