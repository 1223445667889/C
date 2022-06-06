#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 4

//void fun(char* s)
//{
//	while (*s)
//	{
//		if (*s % 2)
//		{
//			printf("%c",*s);
//		}
//		s++;
//	}
//}
//int main()
//{
//	char a[] ="BYTE";
//	fun(a);
//}

//int fun()
//{
//	static int x = 1;
//	x += 1;
//	return x;
//}
//int main()
//{
//	int i, s = 1;
//	for (i = 1; i <= 5; i++)
//	{
//		s += fun();
//	}
//	printf("%d\n",s);
//}

//void fun(char** p)
//{
//	++p;
//	printf("%s\n",*p);
//}
//int main()
//{
//	char* a[] = {"Morning","Afternoon","Evening","Night"};
//	fun(a);
//}
//
//int fun(int x[],int n)
//{
//	static int sum = 0, i;
//	for (i = 0; i < n; i++)
//	{
//		sum += x[i];
//	}
//	return sum;
//}
//int main()
//{
//	int a[] = { 1,2,3,4,5 }, b[] = {6,7,8,9},s=0;
//	s = fun(a, 5) + fun(b,4);
//	printf("%d\n",s);
//}

//int main()
//{
//	char ch[] = {"uvwxyz"},*pc;
//	pc = ch;
//	printf("%c\n",*(pc+5));
//}

//void fun(char* p)
//{
//	char* q;
//	q = p;
//	while (*q != '\n')
//	{
//		(*q)++;
//		q++;
//	}
//}
//int main()
//{
//	char a[] = {"Program"},*p;
//	p = &a[3];
//	fun(p);
//	printf("%s\n",a);
//}

//void fun(char* a, char* b)
//{
//	while (*a == '*')
//		a++;
//	while (*b = *a)
//	{
//		b++;
//		a++;
//	}
//}
//int main()
//{
//	char* s = "*****a*b****", t[80];
//	fun(s, t);
//	puts(t);
//}

void fun(int *s[], int n)
{
	char *t;
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (strlen(s[i]) > strlen(s[j]))
			{
				t = s[i];
				s[i] = s[j];
				s[j] = t;
			}
		}
	}
}
int main()
{
	char* ss[] = {"bcc","bbcc","xy","aaaacc","aabcc"};
	fun(ss, 5);
	printf("%s,%s\n", ss[0], ss[4]);
}