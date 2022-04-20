#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//
//int main()
//{
//	int i = 0;
//	int sun = 0;
//	int n = 0;
//	int ret = 1;
//	scanf_s("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//
//		}
//		sun += ret;
//	}
//	printf("%d\n",sun);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i <= 9; i++)
//	{
//		printf("hahaha\n");
//		arr[i] = 0;
//	}
//	//system("pause");//如果不使用system("pause");下标越界将会出错，在栈中可能会令i=0，出现循环
//	//栈区的默认使用：
//	//先使用高地址的空间，在使用低地址的空间；数组随着下标的增长，地址是由低到高变化
//	printf("%p\n",arr);
//	printf("%p\n",&i);
//	return 0;
//}





//int main()
//{
//	int i = 0;
//	int b = 0;
//	int j = 0;
//	char arr1[] = "*******************";
//	char arr2[] = "bit";
//	char* p1 = &arr1;
//	char* p2 = &arr2;
//	
//	*p1 = i;
//	*p2 = b;
//	while (*p1 != '\n')
//	{
//		*p1 = *p2;
//		i++;
//		b++;
//		
//	}
//	*p1 = *p2;
//
//	//strcpy(arr1,arr2);
//	printf("%s\n",arr2);
//
//	return 0;

//int main()
//{
//	int i, j;
//	for (i = 1; i < 4; i++)
//	{
//		for (j = i; j < 4; j++)
//		{
//			printf("%d*%d=%d",i,j,i*j);
//			printf("\n");
//		}
//	}
//}

//int main()
//{
//	int i = 5;
//	do
//	{
//		if (i % 3 == 1)
//		{
//			if (i % 5 == 2)
//			{
//				printf("*%d",i);
//				break;
//			}
//		}
//		i++;
//	} while (i != 0);
//	printf("\n");
//}

//int main()
//{
//	int k = 5;
//	while (--k)
//	{
//		printf("%d\n",k-=3);
//	}
//}

//int main()
//{
//	int i, j;
//	for (i = 3; i >= 1; i--)
//	{
//		for (j = 1; j <= 2; j++)
//		{
//			printf("%d\n",i+j);
//		}
//	}
//}

//int main()
//{
//	int k = 5, n = 0;
//	do
//	{
//		switch (k)
//		{
//		case 1:
//		case 3:
//			n += 1; k--;
//			break;
//		default:
//			n = 0; k--;
//		case 2:
//		case 4:
//			n += 2; k--;
//			break;
//		}
//		printf("%d\n",n);
//	} while (k>0 && n<5);
//	return 0;
//}

//int main()
//{
//	int y = 0;
//	while (y--);
//	printf("y=%d\n",y);
//}

//int main()
//{
//	int i;
//	for (i = 0; i <= 40; i++)
//	{
//		if (i++ % 5 == 0)
//		{
//			if (++i % 8 == 0)
//			{
//				printf("%d",i);
//			}
//		}
//	}printf("\n");
//}

//int main()
//{
//	int s;
//	scanf("%d",&s);
//	while (s>0)
//	{
//		switch (s)
//		{
//		case 1:
//			printf("%d",s+5);
//		case 2:
//			printf("%d",s+4);
//			break;
//		case 3:
//			prinft("%d",s+3);
//		default:
//			printf("%d",s+1);
//			break;
//		}
//		scanf("%d",&s);
//	}
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	int a = 0;
//	for (i = 0; i <= 432; i++)
//	{
//		if ((i%10==2) || (i%100==3) || (i%1000==4))
//		{
//			//printf("%d\n",i);
//			a = i;
//			if ((a%10==3))
//				printf("%d\n",a);
//		}
//	}
//	return 0;
//}




















	












