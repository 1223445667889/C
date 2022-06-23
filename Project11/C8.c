#define _CRT_SECURE_NO_WARNING 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//#define N 5
//#define M N+1
//#define f(x) (x*M)
//int main()
//{
//	int i1, i2;
//	i1 = f(2);
//	i2 = f(1+1);
//	printf("%d %d\n",i1,i2);
//}

//#define S(x) x*x
//#define T(x) S(x)*S(x)
//int main()
//{
//	int k = 5, j = 2;
//	printf("%d,%d\n",S(k+j),T(k+j));
//}

//#define S(x) (x)*(x)
//#define T(x) S(x)/S(x)+1
//int main()
//{
//	int k = 3, j = 2;
//	printf("%d,%d\n",S(k+j),T(k+j));
//}

//#define N 2
//#define M N+1
//#define NUM (M+1)*M/2
//int main()
//{
//	printf("%d\n",NUM);
//}

//#define SUB(X,Y) (X+1)*Y
//int main()
//{
//	int a = 3, b = 4;
//	printf("%d\n",SUB(a++,b++));
//}

//#define SQR(X) X*X
//int main()
//{
//	int a = 10, k = 2, m = 1;
//	a /= SQR(k + m) / SQR(k + m);
//	printf("%d\n",a);
//}

//#define S(x) x/x
//int main()
//{
//	int k = 5, j = 2;
//	printf("%d,%d\n",S(k+j),S(j+k));
//}

//#define S(x) x*x
//int main()
//{
//	int k = 5, j = 2;
//	printf("%d,%d\n",S(k+j+2),S(j+k+2));
//}

#define F(x) 2.84+x
#define PR(a) printf("%d",(int)(a))
#define PRINT(a) PR(a);putchar('\n')
int main()
{
	PRINT(F(5) * 2);
}