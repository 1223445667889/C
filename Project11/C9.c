#define _CRT_SECURE_NO_WARNING 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//#define N 2
//#define M N+1
//#define MUN (M+1)*M/2
//int main()
//{
//	printf("%d\n",MUN);
//}

//#define D(x) 4*x+1
//int main()
//{
//	int i = 2, j = 4;
//	printf("%d\n",D(i+j));
//}

//#define FNA(x) x*x
//#define FNB(x) x+x
//int main()
//{
//	int a = 2, b = 4;
//	printf("%d,%d\n",FNA(FNB(a)),FNB(FNA(b)));
//}

//int main()
//{
//	char y = 010;
//	printf("%d\n",y<<1);
//}

//#define MUL1(x,y) x*y
//#define MUL2(x,y) (x)*(y)
//#define MUL3(x,y) (x*y)
//int main()
//{
//	int m = 2, n = 3;
//	printf("%d,%d,%d\n",MUL1(m,m+n)*2,MUL2(m,m+n)*2,MUL3(m,m+n)*2);
//}

//int main()
//{
//	int a = 2, b;
//	b = (a >>= 1) + 4;
//	printf("%d,%d",a,b);
//}

//int main()
//{
//	char a = 3, b = 6, c;
//	c = (a ^ b) << 2;
//	printf("%d\n",c);
//}

//int main()
//{
//	struct cm { int x; int y; }a[2] = {4,3,2,1};
//	printf("%d\n",a[0].y/a[0].x*a[1].x);
//}

//#define SUB(x,y) (x)*(y)
//int main()
//{
//	int a = 3, b = 4;
//	printf("%d\n",SUB(a++,b++));
//}