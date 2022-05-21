#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 4

//int fun()
//{
//	static int x = 1;
//	x *= 2;
//	return x;
//}
//int main()
//{
//	int i, s = 1;
//	for (i = 1; i <= 2; i++)
//	{
//		s = fun();
//		printf("%d\n",s);
//	}
//}

//int a = 4;
//int f(int n)
//{
//	int t = 0;
//	static int a = 5;
//	if (n % 2)
//	{
//		int a = 6;
//		t += a++;
//	}
//	else
//	{
//		int a = 7;
//		t += a++;
//	}
//	return t + a++;
//}
//int main()
//{
//	int s = a, i = 0;
//	for (; i < 2; i++)
//	{
//		s += f(i);
//		printf("%d\n",s);
//	}
//}

//int fun(char p[][10])
//{
//	int n = 0, i;
//	for (i = 0; i < 7; i++)
//	{
//		if (p[i][0] == 'T')
//			n++;
//		return n;
//	}
//}
//int main()
//{
//	char str[][10] = { "Mon","Tue","Wed","Thu","Fri","Sat","Sun" };
//	printf("%d\n", fun(str));
//}

//int main()
//{
//	char w[20], a[5][10] = { "abcdef","ghijkl","mnopq","rstuv","wxyz" };
//	int p[6][2] = { {0,1},{1,5},{0,0},{0,2},{1,4},{4,4} },i;
//	for (i = 0; i < 6; i++)
//	{
//		w[i] = a[p[i][0]][p[i][1]];
//	}
//	puts(w);
//}

//void f(int x)
//{
//	if (x >= 10)
//	{
//		printf("%d-",x%10);
//		f(x / 10);
//	}
//	else
//	{
//		printf("%d",x);
//	}
//}
//int main()
//{
//	int z = 123456;
//	f(z);
//}

//int a = 2;
//int f(int m)
//{
//	static int n = 0;
//	n++;
//	a++;
//	return n + m + a;
//}
//int main()
//{
//	int k;
//	for (k = 0; k < 4; k++)
//	{
//		printf("%d,",f(k));
//	}
//}

int f(int a[], int n)
{
	if (n > 1)
	{
		int t;
		t = f(a, n - 1);
		return t > a[n - 1] ? t : a[n - 1];
	}
	else
	{
		return a[0];
	}
}
int main()
{
	int a[] = { 8,2,9,1,3,6,4,7,5 };
	printf("%d\n",f(a,9));
}