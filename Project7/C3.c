#define _CRT_SECURE_NO_WANINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//int main()
//{
//	char ss[3][5] = {"aaaa","bbbb","cccc"};
//	int i = 0;
//	do
//	{
//		ss[i][++i] = 0;
//	} while (i<3);
//	do
//	{
//		puts(ss[i-1]);
//	} while (--i>0);
//}

//char* a = "GOODNEWYEAR";
//char b[] = "goodnewyear";
//int main()
//{
//	int i = 0;
//	printf("%c %s\n",*a,b+7);
//}

//int main()
//{
//	char str[][10] = {"One","Three","Five"},*p=str[0];
//	printf("%s,",p+10);
//	printf("%d\n",strlen(p+=10));
//}

//int main()
//{
//	char s[][6] = {"abcd","abc","ab"};
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		puts(s[i]);
//	}
//}

//void fun(int n)
//{
//	static int x[3] = {1,2,3};
//	int k;
//	for (k = 0; k < 3; k++)
//	{
//		x[k] += x[k] - n;
//	}
//	for (k = 0; k < 3; k++)
//	{
//		printf("%d,",x[k]);
//	}
//}
//int main()
//{
//	fun(0);
//	fun(1);
//}

//long fun(char s[])
//{
//	long n;
//	int sign = 1;
//	for (; isspace(*s); s++)
//	{
//		sign = (*s == '-') ? -1:1;
//	}
//	if (*s == '+' || *s == '-')
//		s++;
//	for (n = 0; isdigit(*s); s++)
//	{
//		n = 10 * n + (*s - '0');
//	}
//	return sign * n;
//}
//int main()
//{
//	char s[] = "-26a3";
//	printf("%d\n",fun(s));
//}

//void fun(char* a, char* b)
//{
//	char* s = a;
//	while (*s)
//		s++;
//	s--;
//	while (s >= a)
//	{
//		*b = *s;
//		s--;
//		b++;
//	}
//	*b = '\0';
//}
//int main()
//{
//	char s1[] = "abc",s2[6];
//	fun(s1,s2);
//	puts(s2);
//}

//int main()
//{
//	char a[] = "TEXT",*b="++",c[3]="1";
//	printf("%d,%d,",strlen(a),sizeof(a));
//	printf("%d,%d,", strlen(b), sizeof(b));
//	printf("%d,%d,", strlen(c), sizeof(c));
//}

//int show(char* str)
//{
//	while (*str)
//	{
//		putchar(*str+1);
//		str++;
//	}
//	return *str + 1;
//}
//int main()
//{
//	printf("%d\n",show("ABCD"));
//}