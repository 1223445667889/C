#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	int i, n;
//	for (i = 0; i < 8; i++)
//	{
//		n = rand() % 5;
//		switch (n)
//		{
//		case 1:
//		case 3:
//			printf('%d\n',n);
//			break;
//		case 2:
//		case 4:
//			printf("%d\n",n);
//			continue;
//		case 0:
//			exit(0);
//		}
//		printf("%d\n",n);
//	}
//}

//int main()
//{
//	int a = -1, b = -1;
//	while (++a)
//	{
//		++b;
//	}
//	printf("%d,%d\n",a,b);
//}

//int main()
//{
//	int x = 0x9;
//	printf("%c\n",'A'+x);
//}

//int main()
//{
//	int a = 2, c = 5;
//	printf("a = %%d, b= %%d \n",a,c);
//}

//int main()
//{
//	int k = 33;
//	printf("%d,%o,%x\n",k,k,k);
//}


//int main()
//{
//	int k = -17;
//	printf("%d,%o,%x\n",k,1-k,1-k);
//}

//int main()
//{
//	char c1, c2, c3, c4, c5, c6;
//	scanf("%c %c %c %c", &c1, &c2, &c3, &c4);
//	c5 = getchar();
//	c6 = getchar();
//	putchar(c1);
//	putchar(c2);
//	printf("%c%c\n",c5,c6);
//}

//int main()
//{
//	char a = '5', b;
//	a++;
//	printf("%d,%d\n",a-'5'+255,b=a-'5');
//}

//int main()
//{
//	int a[] = { 2,4,6,8 }, * p = a, i;
//	for (i = 0;i<4;i++)
//	{
//		a[i] = *p++;
//		printf("%d",a[i]);
//		printf("%5d\n",a[2]);
//	}
//}

//int main()
//{
//	char a = 'H';
//	a = (a >= 'A' && a <= 'Z') ? (a + 32) : a;
//	printf("%c\n",a);
//}

//int main()
//{
//	int x = 1,y = 0;
//	if (!x) y++;
//	else if (x == 0)
//	{
//		if (x) y += 2;
//		else y += 3;
//	}
//	printf("%d\n",y);
//}

//int main()
//{
//	int a, b, c;
//	a = 10, b = 50, c = 30;
//	if (a > b) a = b, b = c; c = a;
//	printf("a=%d,b=%d,c=%d",a,b,c);
//}

//int main()
//{
//	int x;
//	scanf_s("%d",&x);
//	if (x <= 3);
//	else
//		if (x != 10)
//			printf("%d\n",x);
//}

int main()
{
	int a = 1, b = 2, c = 3, d = 0;
	if (a == 1 && b++ == 2)
	{ 
		if (b != 2 || c-- != 3)
		{
			printf("%d,%d,%d\n", a, b, c);
		}
		else
		{
			printf("%d,%d,%d\n", a, b, c);
		}
	}
	else
	{
		printf("%d,%d,%d\n", a, b, c);
	}
}