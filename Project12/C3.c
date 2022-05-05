#include <stdio.h>
#include <string.h>
#include <math.h>

//int main()
//{
//	char ch = 'D';
//	while (ch > 'A')
//	{
//		ch--;
//		putchar(ch);
//		if (ch == 'A')
//			break;
//		putchar(ch + 1);
//	}
//}

//int main()
//{
//	char ch = '1';
//	while (ch < '9')
//	{
//		printf("%d",ch - '0');
//		ch++;
//	}
//}

//int main()
//{
//	double x, y, z;
//	scanf_s("%lf%lf",&x,&y);
//	z = x / y;
//	while (1)
//	{
//		if (fabs(z) > 1.0)
//		{
//			x = y;
//			y = x;
//			z = x / y;
//		}
//		else
//			break;
//	}
//	printf("y=%f\n", y);
//}

//int main()
//{
//	char c;
//	for (; (c = getchar()) != '#';)
//	{
//		if (c >= 'a' && c <= 'z')
//			c = c - 'a' + 'A';
//		putchar(++c);
//	}
//}

//int main()
//{
//	int a = -2, b = 2;
//	for (; ++a && --b;)
//	{
//		;
//	}
//	printf("%d,%d\n",a,b);
//}

//int main()
//{
//	int i, x[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d",x[i][2-i]);
//	}
//}

//int main()
//{
//	int b[3][3] = {0,1,2,0,1,2,0,1,2},i,j,t=1;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = i; j <= i; j++)
//		{
//			t += b[i][b[j][i]];
//		}
//	}
//	printf("%d\n",t);
//}

//int main()
//{
//	int x[3][2] = {0},i;
//	for (i = 0; i < 3; i++)
//	{
//		scanf_s("%d",x[i]);
//		printf("%3d%3d%3d\n", x[0][0], x[0][1], x[1][0]);
//	}
//}

int main()
{
	int a[4][4] = { {1,4,3,2},{8,6,5,7},{3,7,2,5},{4,8,6,1} };
	int i, j, k, t;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = j + 1; k < 4; k++)
			{
				if (a[j][i] > a[k][i])
				{
					t = a[j][i];
					a[j][i] = a[k][i];
					a[k][i] = t;
				}
			}
		}
	}
	for (i = 0; i < 4; i++)
	{
		printf("%d",a[i][i]);
	}
}