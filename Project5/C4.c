#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//int change(int* data)
//{
//	return (*data)++;
//}
//int main()
//{
//	int data = 123;
//	change(&data);
//	printf("%d,",data);
//	data = change(&data);
//	printf("%d,",data);
//}

//void change(int* array, int len)
//{
//	for (; len >= 0; len--)
//	{
//		array[len] += 2;
//	}
//}
//int main()
//{
//	int i, array[5] = {1,2};
//	change(array,4);
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d,",array[i]);
//	}
//}

//int main()
//{
//	char* p1 = 0;
//	int* p2 = 0;
//	double* p3 = 0;
//	printf("%d,&d,%d\n",sizeof(p1),sizeof(p2),sizeof(p3));
//}

//int main()
//{
//	int i, * ptr;
//	int array[3] = {8,2,4};
//	for (ptr = array, i = 0; i < 2; i++)
//	{
//		printf("%d,",*ptr++);
//	}
//}

//void fun(int* x, int s, int e)
//{
//	int i, j, t;
//	for (i = s, j = e; i < j; i++, j--)
//	{
//		t = *(x + i);
//		*(x + i) = *(x + j);
//		*(x + j) = t;
//	}
//}
//int main()
//{
//	int m[] = {0,1,2,3,4,5,6,7,8,9},k;
//	fun(m,0,3);
//	fun(m+4,0,5);
//	fun(m,0,9);
//	for (k = 0; k < 10; k++)
//	{
//		printf("%d",m[k]);
//	}
//}

//int main()
//{
//	int a[3][2] = {1,2,3,4,5,6},*ps[3],k;
//	for (k = 0; k < 3; k++)
//	{
//		ps[k] = a[k];
//		printf("%d",*(ps[k]+1));
//	}
//}

//void calc(float x, float y, float* sum)
//{
//	*sum = x +y;
//}
//int main()
//{
//	float x, y, add;
//	scanf_s("%f%f",&x,&y);
//	calc(x, y, &add);
//	printf("x+y=%f\n",add);
//}

//void fun(int *x, int s, int n)
//{
//	int i;
//	for (i = s; i >= n; i--)
//	{
//		*(x + i + 3) = *(x+i);
//	}
//}
//int main()
//{
//	int m[] = {0,1,2,3,4,5,6,7,8,9},k;
//	fun(m,10-4,3);
//	for (k = 0; k < 10;k++);
//	{
//		printf("%d",m[k]);
//	}
//}

//void swap(char* x, char* y)
//{
//	char t;
//	t = *x; *x = *y; *y = t;
//}
//int main()
//{
//	char* s1 = "abc", * s2 = "123";
//	swap(s1, s2);
//	printf("%s,%s\n",s1,s2);
//}