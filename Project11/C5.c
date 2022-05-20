#define _CRT_SECURE_NO_WARNING 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//void fun(int a[], int n)
//{
//	int i = 0, j = 0, k = n / 2, b[10] = {0};
//	for (i = n / 2 - 1; i >= 0; i--)
//	{
//		b[i] = a[j];
//		b[k] = a[j + 1];
//		j += 2;
//		k++;
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
//		printf("%d,",c[i]);
//	}
//}

//int  sum(int a, int b)
//{
//	return a + b - 2;
//}
//int main()
//{
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d",sum(i,3));
//	}
//}

//int sub(double a, double b)
//{
//	return (int)(a-b);
//}
//int main()
//{
//	printf("%d\n",sub(3.8,2.1));
//}

//int fun(int x, int y)
//{
//	static int m = 0, i = 2;
//	i += m + 1;
//	m = i + x + y;
//	return m;
//}
//int main()
//{
//	int j = 1, m = 1, k;
//	k = fun(j, m);
//	printf("%d\nn",k);
//	k = fun(j, m);
//	printf("%d\n",k);
//}

//int fun()
//{
//	static int x = 1;
//	x *= 2;
//	return x;
//}
//int main()
//{
//	int i, s = 1;
//	for (i = 1; i <= 3; i++)
//	{
//		s *= fun();
//	}
//	printf("%d\n",s);
//}

//int f(int n)
//{
//	static int a = 1;
//	n += a++;
//	return n;
//}
//int main()
//{
//	int a = 3, s = 0;
//	s = f(a);
//	s = s + f(a);
//	printf("%d\n",s);
//}

//void fun2(char a, char b)
//{
//	printf("%c %c",a,b);
//}
//char a = 'A', b = 'B';
//void fun1()
//{
//	a = 'C';
//	b = 'D';
//}
//int main()
//{
//	fun1();
//	printf("%c %c",a,b);
//	fun2('E','F');
//}

//int f(int x)
//{
//	int y;
//	if (x == 0 || x == 1)
//		return (3);
//	y = x * x - f(x - 2);
//	return y;
//}
//int main()
//{
//	int z;
//	z = f(3);
//	printf("%d\n",z);
//}

int f(int m)
{
	static int n = 0;
	n += m;
	return n;
}
int main()
{
	int n = 0;
	printf("%d,",f(++n));
	printf("%d\n",f(n++));
}