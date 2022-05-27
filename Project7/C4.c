#define _CRT_SECURE_NO_WANINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define N 4

//int main()
//{
//	printf("%d\n",strlen("0\t\n\0C011\1"));
//}

//int main()
//{
//	char str[4][12] = {"aaa","bbb","ccc","ddd"},*p[4];
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		p[i] = str[i];
//	}
//	printf("%s\n", p[3]);
//	printf("%s\n", str[2]);
//	printf("%s\n", *p);
//}

//void  fun(char* s, int m1, int m2)
//{
//	char t, * p;
//	p = s + m1;
//	s = s + m2;
//	while (s < p)
//	{
//		t = *s;
//		*s = *p;
//		*p = t;
//		s++;
//		p--;
//	}
//}
//int main()
//{
//	char ss[10] = "012345678";
//	int n = 6;
//	fun(ss, 0, n - 1);
//	fun(ss,9,n);
//	fun(ss,0,9);
//	printf("%s\n",ss);
//}

//int main()
//{
//	char ss[10] = "012345";
//	strcat(ss, "6789");
//	gets(ss);
//	printf("%s\n",ss);
//}

//int main()
//{
//	char w[20], a[5][10] = {"abcde","fghij","klmno","pqrst","uvwyz"};
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		w[i] = a[i][i];
//	}
//	w[5] = '\0';
//	printf("%s\n",w);
//}

//int main()
//{
//	char b[4][10];
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		scanf_s("%s",b[i]);
//	}
//	for (i = 3; i >= 0; i--)
//	{
//		printf("%s",b[i]);
//	}
//}

//int main()
//{
//	int i, len;
//	char b[] = "Welcome you to Beijing";
//	len = strlen(b);
//	for (i = 0; i < len; i++)
//	{
//		if (b[i] == ' ')
//			strcpy(b,b+i+1),
//		    i = 0;
//	}
//	printf("%s\n",b);
//}

//int main()
//{
//	int i, j = 0;
//	char a[] = "How are you!";
//	for (i = 0; a[i]; i++)
//	{
//		if (a[i] != ' ')
//			a[j++] = a[i];
//		a[j] = '\0';
//	}
//	printf("%s\n",a[i]);
//}

int main()
{
	int a[N][N] = {0},i,j,k;
	for (i = 0; i < N / 2;i++)
	{
		for (j = i; j < N - i; j++)
		{
			a[i][j] = a[N - i - 1][j] = i + 1;
		}
		for (k = i + 1; k < N - i - 1; k++)
		{
			a[k][i] = a[k][N - i - 1] = i + 1;
		}
	}
	for (j = 0; j < N; j++)
	{
		printf("%2d",a[1][j]);
	}
}