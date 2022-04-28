#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	int y = 9;
//	for (;y>0;y--)
//	{
//		if (y % 3 == 0)
//			printf("%d",--y);
//	}
//}

//int main()
//{
//	int i, j, m = 1;
//	for (i=1;i<3;i++)
//	{
//		for (j = 3; j > 0; j--)
//		{
//			if (i * j > 3) break;
//			m *= i * j;
//		}
//	}
//	printf("m=%d\n",m);
//}

//int main()
//{
//	int c = 0, k;
//	for (k = 1; k < 3; k++)
//	{
//		switch (k)
//		{
//		default: c += k;
//		case 2: c++; break;
//		case 4: c += 2; break;
//		}
//	}
//	printf("%d\n",c);
//}

//int main()
//{
//	int y = 10;
//	while (y--);
//	printf("y=%d\n",y);
//}

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
//	} while (i!=0);
//	printf("\n");
//}

//int main()
//{
//	int k = 5;
//	while (--k)
//		printf("%d",k-=3);
//}

//int main()
//{
//	int i, j;
//	for (i = 3; i >= 1; i--)
//	{
//		for (j = 1; j <= 2; j++)
//			printf("%d",i+j);
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
//			n += 1;
//			k--;
//			break;
//		default:
//			n = 0; 
//			k--;
//		case 2:
//		case 4:
//			n += 2;
//			k--;
//			break;
//		}
//		printf("%d",n);
//	} while (k > 0 && n < 5);
//}

//int main()
//{
//	int i;
//	for (i = 1; i <= 40; i++)
//	{
//		if (i++ % 5 == 0)
//		{
//			if (++i % 8 == 0)
//				printf("%d",i);
//		}
//	}
//}

//int main()
//{
//	int s;
//	scanf_s("%d", &s);
//	while (s > 0)
//	{
//		switch (s)
//		{
//		case 1:
//			printf("%d",s+5);
//		case 2:
//			printf("%d",s+4);
//			break;
//		case 3:
//			printf("%d",s+3);
//		default:
//			printf("%d",s+1);
//			break;
//		}
//		scanf_s("%d",&s);
//	}
//}

//int main()
//{
//	int a = 7;
//	while (a--);
//	printf("%d\n",a);
//}

//int main()
//{
//	char b, c; int i;
//	b = 'a'; c = 'A';
//	for (i = 0; i < 6; i++)
//	{
//		if (i % 2) putchar(i + b);
//		else putchar(i + c);
//	}
//}

//int main()
//{
//	int i, j, x = 0;
//	for (i = 0; i < 2; i++)
//	{
//		x++;
//		for (j = 0; j <= 3; j++)
//		{
//			if (j % 2) continue;
//			x++;
//		}
//		x++;
//	}
//	printf("x=%d\n",x);
//}