#include <stdio.h>
#include <string.h>
#define M 4
#define N 4

//int main()
//{
//	int i, a[][3] = {9,8,7,6,5,4,3,2,1},j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%2d", a[i][j]);
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int a[4][4] = { {1,4,3,2},{8,6,5,7},{3,7,2,5},{4,8,6,1} },i,k,t;
//	for (i = 0; i < 3; i++)
//	{
//		for (k = i + 1; k < 4; k++)
//		{
//			if (a[i][i] < a[k][k])
//			{
//				t = a[i][i];
//				a[i][i] = a[k][k];
//				a[k][k] = t;
//			}
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d",a[0][i]);
//	}
//}

//int main()
//{
//	int s[12] = { 1,2,3,4,4,3,2,1,1,1,2,3 }, c[5] = {0},i;
//	for (i = 0; i < 12; i++)
//	{
//		c[s[i]]++;
//	}
//	for (i = 1; i < 5; i++)
//	{
//		printf("%d",c[i]);
//	}
//	printf("\n");
//}

//int main()
//{
//	int i, t[][3] = {9,8,7,6,5,4,3,2,1};
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d",t[2-i][i]);
//	}
//}

//int main()
//{
//	int a[3] = {0},i,j,k=2;
//	for (i = 0; i < k; i++)
//	{
//		for (j = 0; j < k; j++)
//		{
//			a[j] = a[i] + 1;
//		}
//	}
//	printf("%d\n",a[1]);
//}

//int main()
//{
//	int i, k;
//	int array[4][2] = { {1,2},{4,9},{6} };
//	for (i = 0; i < 2; i++)
//	{
//		for (k = 0; k < 4; k++)
//		{
//			printf("%d,",array[k][i]);
//		}
//	}
//}

//int main()
//{
//	int i, * ptr;
//	int array[5] = {5,3,1};
//	for (ptr = array,i = 0; i < 5; i++, ptr++)
//	{
//		if (*ptr == 0)
//		{
//			putchar('X');
//		}
//		else
//		{
//			putchar('A'+*ptr);
//		}
//	}
//}

//int main()
//{
//	int sum = 0, i, j, x[M][N] = {1,2,3,4,
//		                          5,6,7,8,
//		                          9,10,11,12,
//		                          13,14,15,16};
//	for (i = 0; i < M; i++)
//	{
//		printf("%d,%d\n", x[i][0], x[i][N - 1]);
//		sum += x[i][0] + x[i][N - 1];
//		printf("%d\n", sum);
//	}
//	for (j = 0; j < N - 1; j++)
//	{
//		printf("%d,%d\n", x[0][j], x[M-1][j]);
//		sum += x[0][j] + x[M - 1][j];
//		printf("%d\n", sum);
//	}
//}

int main()
{
	char a[4][4] = {'o'};
	int i, j;
	for (i = 0; i < 4; i++)
	{
		a[i][0] = a[i][3] = "#";
		for (j = 0; j < 3; j++)
		{
			a[0][j] = a[3][j] = '#';
			if ((i != 0) && (i != 3))
			{
				a[i][j] = 'o';
			}
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%2c",a[i][j]);
		}
	}
}