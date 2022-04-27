#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	int k;
//	printf("Enter a int number:");
//	scanf_s("%d",&k);
//	if ((k % 3 == 0) || (k % 7 == 0))
//		printf("YES\n");
//	else
//		printf("NO\n");
//	printf("%d\n",k%3);
//}

//int main()
//{
//	int a = 0, b = 1;
//	if (a++ && b++)
//		printf("T");
//	else
//		printf("F");
//	printf("a=%d,b=%d\n",a,b);
//}

//int main()
//{
//	int x = 0x13;
//	if (x = 0x18)
//		printf("T");
//	printf("F"); 
//	printf("\n");
//}

//int main()
//{
//	int a = 0, b = 1;
//	if (++a == b++)
//		printf("T");
//	else
//		printf("F");
//	printf("a=%d,b=%d",a,b);
//}

//int main()
//{
//	int x;
//	scanf_s("%d",&x);
//	if (x > 10) printf("1");
//	else if (x > 20) printf("2");
//	else if (x > 30) printf("3");
//}

//int main()
//{
//	int a = 0, * ptr;
//	ptr = &a;
//	*ptr = 3;
//	a = (*ptr)++;
//	printf("%d,%d\n",a,*ptr);
//}

//比较两个字符串大小
//int fun(char* s, char* t)
//{
//	while ((*s) && (*t) && (*t++ == *s++));
//	return (*s - *t);
//}

//int main()
//{
//	int a = 1, b = 2, c = 3, d = 4, r = 0;
//	if (a != 1) r = 1;
//	if (b == 2) r = 2;
//	else if (c != 3) r = 3;
//	else if (d == 4) r = 4;
//	printf("%d\n",r);
//}

//int main()
//{
//	if ('\0'==0) putchar('1');
//	if ("0" == 0) putchar('2');
//	if ('A' == "A") putchar('3');
//}

//int main()
//{
//	int i; char c;
//	scanf_s("%c",&c);
//	for (i = 0; i < 5; i++)
//	{
//		if (i > c) continue;
//		printf("%d,",i);
//	}
//}

//int main()
//{
//	int x = 10, y = 11, z = 12;
//	if (y < z) x = y, y = z, z = x;
//	printf("x=%d y=%d z=%d\n", x, y, z);
//}

//int main()
//{
//	int t;
//	scanf_s("%d",&t);
//	if (t++ < 6)
//		printf("%d\n", t);
//	else
//		printf("%d\\n",t--);
//}
// 
//int main()
//{
//	int a = 0, b = 0;
//	for (; a < 7; a++)
//	{
//		if (a % 2 == 0) continue;
//		b += a;
//		continue;
//	}
//	printf("%d\n",b);
//}

//int main()
//{
//	int a, b;
//	for (a = 0; a < 3; a++)
//	{
//		scanf("%d",&b);
//		switch (b)
//		{
//		default:
//			printf("%d,", b + 1); continue;
//		case 1:
//			printf("%d,",b+1);
//		case 2:
//			printf("%d,", b + 1); continue;
//		}
//	}
//}

//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	if (a = 1) b = 1,c = 2;
//	else  d = 2;
//	printf("%d,%d,%d,%d\n",a,b,c,d);
//}