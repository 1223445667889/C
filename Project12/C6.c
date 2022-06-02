#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//int main()
//{
//	int a[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23},(*p)[4]=a,i,j,k=0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//			k = k + *(*(p + i)+j);
//	}
//	printf("%d\n",k);
//}

//int main()
//{
//	int c[6] = {10,20,30,40,50,60},*p,*s;
//	p = c;
//	s = &c[5];
//	printf("%d\n",s-p);
//}

//int main()
//{
//	int a[5] = {2,4,6,8,10},*p,**k;
//	p = a;
//	k = &p;
//	printf("%d",*(p++));
//	printf("%d\n",**k);
//}

//int main()
//{
//	int aa[3][3] = { {2},{4},{6} },i,*p=&aa[0][0];
//	for (i = 0; i < 2; i++)
//	{
//		if (i == 0)
//			aa[i][i + 1] = *p + 1;
//		else
//			++p;
//		printf("%d",*p);
//	}
//}

//int main()
//{
//	int a[10] = {11,12,13,14,15,16,17,18,19,20},*p=a,i=9;
//	printf("%d,%d,%d\n",a[p-a],p[i],*(&a[i]));
//}

//int fun(int* s, int t, int* k)
//{
//	int p;
//	for (p = 0, *k = p; p < t; p++)
//	{
//		if (s[p] > s[*k])
//			*k = p;
//	}
//}
//int main()
//{
//	int a[10] = {11,12,13,14,15,16,20,18,19,10},k;
//	fun(a,10,&k);
//	printf("%d,%d",k,a[k]);
//}

//int main()
//{
//	int a[10] = {1,3,5,7,11,13,17},*p=a;
//	printf("%d,",*(p++));
//	printf("%d\n",*(++p));
//}

//int main()
//{
//	int* p, x = 100;
//	p = &x;
//	x = *p + 10;
//	printf("%d\n",x);
//}

//void fun(int x, int y, int* z)
//{
//	*z = y - x;
//}
//int main()
//{
//	int a, b, c;
//	fun(10, 5, &a);
//	fun(7,a,&b);
//	fun(a, b, &c);
//	printf("%d,%d,%d\n",a,b,c);
//}

void fun(int* s, int n1, int n2)
{
	int i, j, t;
	i = n1, j = n2;
	while (i < j)
	{
		t = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = t;
		i++;
		j--;
	}
}
int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,0},i,*p=a;
	fun(p, 0, 3);
	fun(p, 4, 9);
	fun(p, 0, 9);
	for (i = 0; i < 10; i++)
	{
		printf("%d",*(a+i));
	}
}