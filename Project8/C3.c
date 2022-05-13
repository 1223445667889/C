#define _CRT_SECURE_NO_WANINGS 1
#include <stdio.h>
#include <string.h>

//int mul(int val)
//{
//	static int init = 1;
//	return init *= val;
//}
//int main()
//{
//	int i;
//	for (i = 1; i <= 5; i++)
//	{
//		printf("%d,",mul(i));
//	}
//}

//void my_put()
//{
//	char ch;
//	ch = getchar();
//	if (ch != 'C')
//		my_put();
//	putchar(ch);
//}
// main()
//{
//	 my_put();
//}

//int m = 12;
//int fun(int x, int y)
//{
//	static int m = 3;
//	m = x * y - m;
//	return(m);
//}
//int main()
//{
//	int a = 7, b = 5;
//	m = fun(a, b) / m;
//	printf("%d\n",fun(a,b)/m);
//}

//void fun(int n)
//{
//	if (n / 2)
//		fun(n / 2);
//	printf("%d",n%2);
//}
//int main()
//{
//	fun(10);
//	printf("\n");
//}

//int f(int k)
//{
//	static int n = 0;
//	int m = 0;
//	n++;
//	m++;
//	k++;
//	return n+m+k;
//}
//int main()
//{
//	int k;
//	for (k = 0; k < 2; k++)
//	{
//		printf("%d,", f(k));
//	}
//	printf("\n");
//}

//int f(int x[], int n)
//{
//	if (n > 1)
//		return x[n - 1] + f(x, n - 1) * 10;
//	else
//		return x[0];
//}
//int main()
//{
//	int z[3] = {1,2,3},y;
//	y = f(z,3);
//	printf("%d\n",y);
//}

//void funA(int n)
//{
//	n++;
//}
//int main()
//{
//	int a = 1;
//	funA(a);
//	printf("%d",a);
//	funA(a);
//	printf("%d\\n",a);
//}

//int fun(int x)
//{
//	int y;
//	y = x++;
//	return y;
//}
//int main()
//{
//	int k;
//	for (k = 0; k < 3; k++)
//	{
//		printf("%d,", fun(k) + k);
//		k++;
//	}
//}

int new_div(double a, double b)
{
	return a/b + 0.5;
}
int main()
{
	printf("%d",new_div(7.8,3.1));
}