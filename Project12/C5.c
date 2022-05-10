#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//int main()
//{
//	char str[][20] = {"One*World","One*Dream!"},*p=str[1];
//	printf("%d,",(int)strlen(p));
//	printf("%s\n",p);
//}

//int main()
//{
//	char s[] = "012xy\08s34f4w2";
//	int i, n=0;
//	for (i = 0; s[i] != 0; i++)
//	{
//		if (s[i] >= '0' && s[i] <= '9')
//		{
//			n++;
//		}
//	}
//	printf("%d\n",n);
//}

//int main()
//{
//	char p[20] = {'a','b','c','d'},q[]="abc",r[]="abcde";
//	strcat(p, r);
//	printf("%s\n",p);
//	strcpy(p + strlen(q), q);
//	printf("%s\n", p + strlen(q));
//	printf("%s\n",p);
//	printf("%d\n",(int)strlen(p));
//}

//void fun(char *p)
//{ 
//	int i = 0;
//	while (p[i])
//	{
//		if (p[i] == ' ' && islower(p[i - 1]))
//		{
//			p[i - 1] = p[i - 1] - 'a' + 'A';
//		}
//		i++;
//	}
//}
//int main()
//{
//	char s1[100] ="ab cd EFG!";
//	fun(s1);
//	printf("%s\n",s1);
//}

//int main()
//{
//	char a[20] = "ABCD\0EFG\0", b[] = "IJK";
//	strcat(a, b);
//	printf("%s\n",a);
//}

//int main()
//{
//	char s[] = {"012xy"};
//	int i, n = 0;
//	for (i = 0; s[i] != 0; i++)
//	{
//		if (s[i] >= 'a' && s[i] <= 'z')
//		{
//			n++;
//		}
//	}
//	printf("%d\n", n);
//}

//int fun(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return(n+fun(n-1));
//}
//int main()
//{
//	int x;
//	scanf_s("%d",&x);
//	x = fun(x);
//	printf("%d\n",x);
//}

//int main()
//{
//	int i, j = 0;
//	char a[] = "How are you!";
//	for (i = 0; a[i]; i++)
//	{
//		if (a[i] != ' ')
//			a[j++] = a[i];
//	}
//	a[j] = '\0';
//	printf("%s\n",a);
//}

//int main()
//{
//	char a[20], b[] = "The sky is blue.";
//	int i;
//	for (i = 0; i < 7; i++)
//	{
//		scanf_s("%c",& b[i]);
//	}
//	gets(a);
//	printf("%s%s\n",a,b);
//}

int main()
{
	int i, j = 0;
	char a[] = "How are you!", b[10];
	for (i = 0; a[i]; i++)
	{
		if (a[i] == ' ')
			b[j++] = a[i + 1];
	}
	b[j] = '\n';
	printf("%s\n",b);
}















