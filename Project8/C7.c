#define _CRT_SECURE_NO_WANINGS 1
#include <stdio.h>
#include <string.h>
#define N 4

//void fun(char* s[], int n)
//{
//	char* t;
//	int i, j;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (strlen(s[i]) > strlen(s[j]))
//			{
//				t = s[i];
//				s[i] = s[j];
//				s[j] = t;
//			}
//		}
//	}
//}
//int main()
//{
//	char* ss[] = {"bcc","bbcc","xy","aaaacc","aabcc"};
//	fun(ss, 5);
//	printf("%s,%s\n",ss[0],ss[4]);
//}

//void fun(char* t, char* s)
//{
//	while (*t != 0)
//		t++;
//	while ((*t++ = *s++) != 0);
//}
//int main()
//{
//	char ss[10] = "acc", aa[10] = {"bbxxyy"};
//	fun(ss,aa);
//	printf("%s,%s\n",ss,aa);
//}

//void fun(char* w, int m)
//{
//	char s, * p1, * p2;
//	p1 = w;
//	p2 = w + m - 1;
//	while (p1 < p2)
//	{
//		s = *p1;
//		*p1 = *p2;
//		*p2 = s;
//		p1++;
//		p2--;
//	}
//}
//int main()
//{
//	char a[] = "123456";
//	fun(a, strlen(a));
//	puts(a);
//}

//int b = 2;
//int fun(int* k)
//{
//	b = *k + b;
//	return (b);
//}
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8 }, i;
//	for (i = 2; i < 4; i++)
//	{
//		b = fun(&a[i])+b;
//      printf("%d\n",b);
//	}
//}

//char* a = "you";
//char b[] = "Welcome you to China!";
//int main()
//{
//	int i, j;
//	char* p;
//	for (i = 0; b[i] != '\0'; i++)
//	{
//		if (*a == b[i])
//		{
//			p = a;
//			for (j = i; *p != '\0'; j++)
//			{
//				if (*p != b[j])
//					break;
//				p++;
//			}
//			if (*p == '\0')
//				break;
//		}
//	}
//	printf("%s",&b[i]);
//}

//char* a = "you", b[] = "welcome#you#to#China!";
//int main()
//{
//	int i, j = 0;
//	char *p=0;
//	for (i = 0; b[i] != '\n'; i++)
//	{
//		if (*a == b[i])
//		{
//			p = &b[i];
//			for (j = 0; a[j] != '\0'; j++)
//			{
//				if (a[j] != *p)
//					break;
//				p++;
//			}
//			if (a[j] == '\0')
//				break;
//		}
//	}
//	printf("%s\n", p);
//}
