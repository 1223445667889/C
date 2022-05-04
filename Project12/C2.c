#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a[] = { 2,3,5,4 }, i;
//	for (i = 0; i < 4; i++)
//	{
//		switch (i % 2)
//		{
//		case 0:
//			switch (a[i] % 2)
//			{
//			case 0:
//				a[i]++;
//				break;
//			case 1:
//				a[i]--;
//			}break;
//		case 1:
//			a[i]=0;
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d", a[i]);
//	}
//}

//int main()
//{
//	int i, j;
//	for (i = 3; i > 0; i--)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			putchar('*');
//		}
//		for(j=1;j<=3-i;j++)
//		{
//			putchar('#');
//		}
//	}
//}

//int main()
//{
//	int x, a = 1, b = 1;
//	while (1)
//	{
//		scanf_s("%d",&x);
//		if (x > 0)
//		{
//			a *= x;
//			break;
//		}
//		if (x < 0)
//		{
//			b *= x;
//			continue;
//		}
//		printf("%d,%d\n",a,b);
//	}
//}

//int main()
//{
//	int x, y = 0, z = 0, t;
//	do
//	{
//		scanf_s("%d",&x);
//		t = x > 0;
//		switch (t)
//		{
//		case 0:
//			break;
//		case 1:
//			y += x;
//			continue;
//		}
//		z += x;
//	} while (x);
//	printf("%d,%d\n",y,z);
//}

//int main()
//{
//	int a = 7, b = 0;
//	do
//	{
//		b += a;
//		a -= 1;
//	} while (a--);
//	printf("%d,%d\n",b,a);
//}

//int main()
//{
//	int m, n;
//	scanf_s("%d%d", &m, &n);
//	while (m != n)
//	{
//		while (m > n)
//		{
//			m = m - n;
//		}
//		while (m < n)
//		{
//			n = n - m;
//		}
//	}
//	printf("%d\n",m);
//}

//int main()
//{
//	int s, n;
//	s = 1;
//	n = 1;
//	do
//	{
//		n = n + 1;
//		s = s + n * n;
//	} while (s<=1000);
//	printf("s=%d\n",s);
//}

//int main()
//{
//	char ch = 'D';
//	while (ch > 'A')
//	{
//		ch--;
//		putchar(ch);
//		if (ch == 'A') break;
//		putchar(ch+1);
//	}
//}