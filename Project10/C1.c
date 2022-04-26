#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	int x = 1, y = 2, z = 3;
//	if (x > y)
//		if (y < z)
//		{
//			printf("%d", ++z);
//		}
//		else
//			printf("%d",++y);
//	printf("%d\n",x++);
//}

//int main()
//{
//	int a = 1, b = 2, c = 3, d = 4;
//	if ((a == 2) || (b == 1))
//		c = 2;
//	if ((c == 3) && (d == -1))
//		a = 5;
//	printf("%d,%d,%d,%d\n", a, b, c, d);
//}

//int main()
//{
//	int a = 1, b = 2, c = 3, d = 4, r = 0;
//	if (a != 1); else r = 1;
//	if (b == 2) r += 2;
//	else; if (c != 3) r += 3;
//	else; if (d == 4) r += 4;
//	printf("%d\n",r);
//}

//int main()
//{
//	int a = 1, b = 2, c = 3, d = 4;
//	if ((a = 2) && (b = 1)) c = 2;
//	if ((c == 3) || (d = -1)) a = 5;
//	printf("%d,%d,%d,%d\n",a,b,c,d);
//}

//int main()
//{
//	int a = 1, b = 2, c = 3, d = 4, r = 0;
//	if (a != 1); else r = 1;
//	if (b == 2) r += 2;
//	if (c != 3); r += 3;
//	if (d == 4) r += 4;
//	printf("%d\n", r);
//}

//int main()
//{
//	int x = 1, y = 0,a = 0,b = 0;
//	switch (x)
//	{
//		case 1:
//			switch (y)
//			{
//			case 0:
//				a++; break;
//			case 1:
//				b++; break;
//			}
//		case 2:
//			a++; b++; break;
//	}
//	printf("a=%d,b=%d\n",a,b);
//}
//
//int main()
//{
//	int k, j, s;
//	for (k = 2; k < 6; k++, k++)
//	{
//		s = 1;
//		for (j = k; j < 6; j++)
//		{
//			s += j;
//		}
//	}
//	printf("%d\n",s);
//}

//int main()
//{
//	double x = 2.0, y;
//	if (x < 0.0)
//	{
//		y == 0.0;
//	}
//	else if ((x < 5.0) && (!x))
//	{
//		y = 1.0 / (x + 2.0);
//	}
//	else if (x < 10.0)
//	{
//		y = 1.0 / x;
//	}
//	else
//	{
//		y = 10.0;
//	}
//	printf("%lf\n",y);
//}

//int main()
//{
//	int a, b;
//	for (a = 0; a < 3; a++)
//	{
//		scanf_s("%d",&b);
//		switch (b)
//		{
//		case 1: 
//			printf("%d,", ++b);
//		case 2:
//			printf("%d,",++b);
//		default:
//			printf("%d,",++b);
//		}
//	}
//}

main()
{
	int a, b;
	for (a = 0; a < 3; a++)
	{
		scanf_s("%d", &b);
		switch (b)
		{
		case 1:
			printf("%d,",b++);
		case 2:
			printf("%d,",b++);
		default:
			printf("%d,",b++);
		}
	}
	printf("\n");
}