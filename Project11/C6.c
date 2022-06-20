#define _CRT_SECURE_NO_WARNING 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//int sum(int* array, int len)
//{
//	if (len == 0)
//		return array[0];
//	else
//		return array[0] + sum(array + 1, len - 1);
//}
//int main()
//{
//	int array[5] = {1,2,3,4,5};
//	int res = sum(array,4);
//	printf("%d\n",res);
//}

//int fun(char* s)
//{
//	char* p = s;
//	while (*p++ != '\0')
//		return(p-s);
//}
//main()
//{
//	char* p = "01234";
//	printf("%d\n",fun(p));
//}

//int main()
//{
//	char s[10] = "verygood", * ps = s;
//	ps += 4;
//	ps = "nace";
//	puts(s);
//}
//
//int fun(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return(p-s);
//}
//int main()
//{
//	char* p = "01234";
//	printf("%d\n",fun(p));
//}

//void fun(int* p1, int* s)
//{
//	int* t;
//	t = (int*)malloc(2 * sizeof(int));
//	*t = *p1 + *p1++;
//	*(t + 1) = *p1 + *p1;
//	s = t;
//}
//int main()
//{
//	int a[2] = { 1,2 }, b[2] = {0};
//	fun(a, b);
//	printf("%d,%d\n", b[0], b[1]);
//}

//int fun(int n)
//{
//	int* p;
//	p = (int*)malloc(sizeof(int));
//	*p = n;
//	return *p;
//}
//int main()
//{
//	int a;
//	a = fun(10);
//	printf("%d\n", a + fun(10));
//}

//int main()
//{
//	char c[2][5] = {"6938","8254"},*p[2];
//	int i, j, s = 0;
//	for (i = 0; i < 2; i++)
//		p[i] = c[i];
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; p[i][j] > 0; j += 2)
//		{
//			s = 10 * s + p[i][j] - '0';
//		}
//	}
//	printf("%d\n",s);
//}

//void fun(double* p1, double* p2, double* s)
//{
//	s = (double*)calloc(1, sizeof(double));
//	*s = *p1 + *(p2 + 1);
//}
//int main()
//{
//	double a[2] = { 1.1,2.2 }, b[2] = {10.0,20.0},*s=a;
//	fun(a, b, s);
//	printf("%5.2f\n",*s);
//}