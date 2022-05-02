#define _CRT_SECURE_NO_WARNING 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//int main()
//{
//	int a = 3;
//	do
//	{
//		printf("%d,",a-=2);
//	} while (!(--a));
//	printf("\n");
//}

//int main()
//{
//	int x;
//	for (x = 3; x < 6; x++)
//	{
//		printf((x%2)?("*%d"):("#%d"),x);
//	}
//	printf("\n");
//}
// 
//int main()
//{
//	int a, b;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n",a);
//}

//int main()
//{
//	int a = -2, b = 0;
//	while (a++ && ++b);
//	printf("%d,%d\n",a,b);
//}
// 
//int main()
//{
//	int a = 0, b = 0;
//	for (;a<5;a++)
//	{
//		if (a % 2 == 0) continue;
//		b += a;
//	}
//	printf("%d\n",b);
//}

//int main()
//{
//	char c;
//	while ((c = getchar()) != '#')
//		putchar(c);
//}

//int main()
//{
//	int a = 1, b = 1;
//	while (a--)
//	{
//		b--;
//	}
//	printf("%d,%d\n",a,b);
//}

//int main()
//{
//	int a = 1, b = 0;
//	for (; a < 5; a++)
//	{
//		if (a % 2 == 0) break;
//		b += a;
//	}
//	printf("%d\n",b);
//}

//int main()
//{
//	char c;
//	do
//	{
//		c = getchar();
//		putchar(c);
//	} while (c != "#");
//}

//int main()
//{
//	int i;
//	for (i = 1; i <= 6; i++)
//	{
//		if (i % 2)
//			printf("*");
//		else
//			continue;
//		printf("#");
//	}
//	printf("$\n");
//}

//int main()
//{
//	int x = 23;
//	do
//	{
//		printf("%2d\n", x--);
//	} while (!x);
//}

//int main()
//{
//	int i = 0, sum = 1;
//	do
//	{
//		sum += i++;
//	} while (i<6);
//	printf("%d\n",sum);
//}

int main()
{
	int i, data;
	scanf_s("%d", &data);
	for (i = 0; i < 5; i++)
	{
		if (i<data) continue;
		printf("%d,",i);
	}
	printf("\n");
}