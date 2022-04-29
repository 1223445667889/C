#define _CRT_SECURE_NO_WARNING 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//int main()
//{
//	int a = 1, b = 2;
//	for (; a < 8; a++)
//	{
//		b += a;
//		a += 2;
//	}
//	printf("%d,%d\n",a,b);
//}

//int main()
//{
//	int i, j, m = 55;
//	for (i = 1; i <= 3; i++)
//	{
//		for (j = 3; j <= i; j++)
//		{
//			m %= j;
//			printf("%d\n",m);
//		}
//	}
//}

//int main()
//{
//	int x = 8;
//	for (; x > 0; x--)
//	{
//		if (x % 3)
//		{
//			printf("%d,", x--);
//			continue;
//		}
//		printf("%d,",--x);
//	}
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d,",i);
//	} while (i++);
//	printf("%d\n",i);
//}

//int main()
//{
//	int i, n;
//	for (i = 0; i < 8; i++)
//	{
//		n = rand() % 5;
//		switch (n)
//		{
//		case 1:
//		case 3:
//			printf("%d\n", n);
//			break;
//		case 2:
//		case 4:
//			printf("%d\n",n);
//			continue;
//		case 0:
//			exit(0);
//		}
//		printf("%d\n",n);
//	}
//}

//int main()
//{
//	int s = 0, n;
//	for (n = 0; n < 4; n++)
//	{
//		switch (n)
//		{
//		default:
//			s += 4;
//		case 1:
//			s += 1;
//		case 2:
//			s += 2;
//		case 3:
//			s += 3;
//		}
//	}
//	printf("%d\n",s);
//}

//int main()
//{
//	int a = -2, b = 0;
//	while (a++)
//	{
//		++b;
//	}
//	printf("%d,%d\n",a,b);
//}

//int main()
//{
//	int a = 6, b = 0, c = 0;
//	for (; a;)
//	{
//		b += a;
//		a -= ++c;
//	}
//	printf("%d.%d,%d\n",a,b,c);
//}

//int main()
//{
//	int s = 0, n;
//	for (n = 0; n < 4; n++)
//	{
//		switch (n)
//		{
//		default:
//			s += 4;
//		case 1:
//			s += 1;
//			break;
//		case 2:
//			s += 2;
//			break;
//		case 3:
//			s += 3;
//		}
//	}
//	printf("%d\n",s);
//}

//int main()
//{
//	int a = -2, b = 0;
//	do
//	{
//		++b;
//	} while (a++);
//	printf("%d,%d\n",a,b);
//}

//int main()
//{
//	int a = 6, b = 0, c = 0;
//	for (; a && (b == 0);)
//	{
//		b += a;
//		a -= c++;
//	}
//	printf("%d,%d,%d\n",a,b,c);
//}

int main()
{
	int i, sum = 0;
	for (i = 1; i < 6; i++)
	{
		sum+=i;
		printf("%d\n",sum);
	}
}