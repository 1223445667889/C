#define _CRT_SECURE_NO_WANINGS 1
#include <stdio.h>
#include <string.h>

//void fun(int a[], int n)
//{
//	int i, j = 0, k = n - 1, b[10] = {0};
//	for (i = 0; i < n/2; i++)
//	{
//		b[i] = a[j];
//		b[k]=a[j + 1];
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
//	int c[10] = { 10,9,8,7,6,5,4,3,2,1 }, i;
//	fun(c, 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d,",c[i]);
//		printf("\n");
//	}
//}

int k = 5;
void f(int* s)
{
	s = &k;
}
int main()
{
	int m = 3, * p = &m;
	f(p);
	printf("%d,%d\n",m,*p);
}