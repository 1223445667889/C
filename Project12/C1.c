#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a, b, c,num=0;
//	scanf_s("%d", &a);
//	for (a; a < 100; a++)
//	{
//		for (b = a; b < 10; b++)
//		{
//			for (c = b; c < 10; c++)
//			{
//				num = a * b * c;
//			}
//		}
//	}
//	printf("%d",num);
//}

//int main()
//{
//	char a = '3', b = 'A';
//	int i;
//	for (i = 0; i < 6; i++)
//	{
//		if (i % 3)
//			putchar(a + i);
//		else
//			putchar(b + i);
//	}
//}

//int main()
//{
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		putchar('9' - i);
//	}
//}

//int main()
//{
//	int i=1;
//	for (printf("%d", i); i < 4; i++)
//	{
//		printf("%d",i);
//	}
//}

//int main()
//{
//	char ch = 'A';
//	while (ch < 'D')
//	{
//		printf("%d",ch-'A');
//		ch++;
//	}
//}

//int main()
//{
//	char ch = 'M';
//	while (ch != 'K')
//	{
//		ch--;
//		putchar(ch);
//	}
//}

//int main()
//{
//	int i = 1, k = 0;
//	for (; i < 6;i++)
//	{
//		switch (i % 3)
//		{
//		case 0:
//			k++;
//		case 1:
//			k++; break;
//		case 2:
//			k++; continue;
//		}
//		i += 1;
//	}
//	printf("%d\n",k);
//}

//int main()
//{
//	int x = 0, y = 6;
//	do
//	{
//		while (--y)
//			x++;
//	} while(y--);
//	printf("%d,%d\n",x,y);
//}

int main()
{
	char* s = "120119110";
	int a=0, b=0, c=0, d=0,i=0;
	do
	{
		switch (s[i++])
		{
		default:
			d++;
		case '0':
			a++;
		case '1':
			b++;
		case '2':
			c++;
		}
	} while (s[i]);
	printf("a=%d,b=%d,c=%d,d=%d,",a,b,c,d);
}