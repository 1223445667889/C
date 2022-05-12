#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char str[12] = {'s','t','r','i','n','g'};
//	printf("%d\n",strlen(str));
//}

//int main()
//{
//	char s[] = "Beijing";
//	printf("%d\n",strlen(strcpy(s,"China")));
//}

//int main()
//{
//	char name[10] = {'S','T','R','I','N','G'};
//	name[3] = 'E'; name[5] = 0;
//	printf("%s\n",name);
//}

//int main()
//{
//	char *mm[4] = {"abcd","1234","mnop","5678"};
//	char **pm = mm;
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%s",pm[i]+1);
//		printf("\n");
//	}
//}

//void fun(int a)
//{
//	if (a > 1)
//	{
//		fun(a-1);
//	}
//	printf("%d",a);
//}
//int main()
//{
//	int q = 5; fun(q);
//	printf("\\n");
//}

//int fun(int a)
//{
//	int b = 2;
//	static int c = 2;
//	b++;
//	c--;
//	return(a+b+c);
//}
//int main()
//{
//	int k, a = 2;
//	for (k = 0; k < 3; k++)
//	{
//		printf("%d",fun(a));
//	}
//	printf("\n");
//}

//double fun(int n)
//{
//	static double f = 1;
//	f *= n;
//	return f;
//}
//int main()
//{
//	int i;
//	double s = 0;
//	for (i = 1; i < 6; i++)
//	{
//		s += fun(i);
//	}
//	printf("%lf\n",s);
//}

//int fun(int a[], int k)
//{
//	if (k == 0)
//		return(a[0]);
//	return a[0] + fun(a + 1, k - 1);
//}
//int main()
//{
//	int a[] = {1,2,3,4,5};
//	printf("%d\n",fun(a,3));
//}

//void fun(int n)
//{
//	static int k = 0;
//	if (n < 0)
//	{
//		printf("-");
//		n = -n;
//	}
//	k += n % 10;
//	printf("%d,",k);
//	if (n / 10)
//		fun(n / 10);
//}
//int main()
//{
//	int x = -12;
//	fun(x);
//	printf("\n");
//}

int m = 1, n = 2;
int sub1(int m, int n)
{
	m += 2;
	n++;
}
void sub2()
{
	m++;
	n += 2;
}
int main()
{
	
	printf("%d,%d,\n",m,n);
	sub1(4,5);
	printf("%d,%d,\n",m,n);
	sub2();
	printf("%d,%d\n",m,n);
}