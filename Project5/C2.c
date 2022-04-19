#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//Ã°ÅÝ
//void bubble_sort(int* arr, int size)
//{
//	int i = 0;
//	for (i = 0; i < size - 1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < size - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])//ÅÐ¶Ï×ó±ßÊÇ·ñ´óÓÚÓÒ±ß
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(&arr, size);
//	for (i = 0; i < size; i++)
//	{
//		printf("%d",arr[i]);
//	}
//	return 0;
//}

int sdd(int a)
{
	if (a <= 1)
	{
		return 1;
	}
	else
	{
		return a * sdd(a - 1);
	}
}
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	b = sdd(a);
	printf("%d\n",b);
	return 0;
}

