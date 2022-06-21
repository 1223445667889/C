#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 4

//void fun(int* p1, int* p2, int* s)
//{
//	s = (int*)calloc(1, sizeof(int));
//	*s = *p1 + *p2;
//	free(s);
//}
//int main()
//{
//	int a[2] = { 1,2 }, b[2] = {40,50},*q=a;
//	fun(a, b, q);
//	printf("%d\n",*q);
//}

//struct tt
//{
//	int x;
//	struct tt* y;
//}s[2] = {1,0,2,0};
//int main()
//{
//	struct tt* p = s;
//	p->y = s;
//	printf("%d",++p->x);
//}

//struct tt
//{
//	int x;
//	struct tt* y;
//}s[3] = {1,0,2,0,3,0};
//int main()
//{
//	struct tt* p = s + 1;
//	p->y = s;
//	printf("%d,",p->x);
//	p = p->y;
//	printf("%d\n",p->x);
//}

//struct ball
//{
//	char color[10];
//	int dim;
//};
//int main()
//{
//	struct ball list[2] = { {"white",2},{"yellow",3} };
//	printf("%s:%d\n",(list+1)->color,list->dim);
//}

void fun(double* p1, double* p2, double* s)
{
	s = (double*)calloc(1, sizeof(double));
	*s = *p1 + *p2;
}
int main()
{
	double a[2] = { 1.1,2.2 }, b[2] = {10.0,20.0},*q=NULL;
	fun(a, b, q);
	printf("%5.2f\n",*q);
}