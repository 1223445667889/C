#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 4

//void fun(char** p)
//{
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%s",p[i]);
//	}
//}
//int main()
//{
//	char* s[6] = {"ABCD","EFGH","IJKL","MONP","QRST","UVWX"};
//	fun(s);
//}

//void fun(char* p, int n)
//{
//	char b[6] = "abcde";
//	int i;
//	for (i = 0, p = b; i < n; i++)
//	{
//		p[i] = b[i];
//	}
//}
//int main()
//{
//	char a[6] ="ABCDE";
//	fun(a,5);
//	printf("%s\n",a);
//}

//int fun(char s[])
//{
//	char* p = s;
//	while (*p != 0)
//		p++;
//	return(p-s);
//}
//int main()
//{
//	printf("%d\n",fun("0ABCDEF"));
//}

//void fun(char* s)
//{
//	char a[10];
//	strcpy(a,"STRING");
//	s = a;
//}
//int main()
//{
//	char* p = "PROGRAM";
//	fun(p);
//	printf("%s\n",p);
//}

//int main()
//{
//	char c[2][5] = {"6938","8254"},*p[2];
//	int i, j, s = 0;
//	for (i = 0; i < 2; i++)
//		p[i] = c[i];
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; p[i][j] > 0; j += 2)
//			s = 10 * s + p[i][j] - '0';
//	}
//	printf("%d\n",s);
//}

//int fun(char* s)
//{
//	char* p = s;
//	while (*p != 0)
//		p++;
//	return (p-s);
//}
//int main()
//{
//	printf("%d\n",fun("goodbey!"));
//}

//int main()
//{
//	char c[2][5] = {"6934","8254"},*p[2];
//	int i, j, s = 0;
//	for (i = 0; i < 2; i++)
//		p[i] = c[i];
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; p[i][j] > '0'&& p[i][j]<='9'; j+=2)
//		{
//			s = 10 * s + p[i][j] - '0';
//		}
//	}
//	printf("%d\n",s);
//}

int main()
{
	char* s = "12134";
	int k = 0, a = 0;
	while (s[k + 1])
	{
		k++;
		if (k % 2 == 0)
		{
			a = a + (s[k] - '0' + 1);
			continue;
		}
		a = a + (s[k] - '0');
	}
	printf("k=%d a=%d\n",k,a);
}


int main()
{
	int i=1;
	sum = 0;
	for(i;i<=9;i++)
	{
		for(j<i;j<10;j++)
		{
			sum = i*j;
			printf("i * j= sum %2d %2d %2d",i,j,sum);
		}
	}
}
