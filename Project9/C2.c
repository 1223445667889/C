#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char a[20], b[] = "The sky is blue.";
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%c", &a[i]);
//	}
//	a[i] = '\0';
//	gets(b);
//	printf("%s%s\n",a,b);
//}

//int main()
//{
//	char w[20] = "dogs", a[5][10] = {"abcdef","ghijkl","mnopq","retuv","wxyz."};
//	int i, j, k;
//	for (i = 0; w[i]; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			for (k = 0; a[j][k]; k++)
//			{
//				if (w[i] == a[j][k])
//					break;
//				if (w[i] == a[j][k])
//					break;
//			}
//		}
//		printf("%d,%d,", j, k);
//	}
//}

//int main()
//{
//	char a[10] = "abc", b[10] = "012",
//		c[10] = "xyz";
//	strcpy(a+1,b+2);
//	puts(strcat(a,c+1));
//}

//int main()
//{
//	char a[5][10] = {"one","two","three","four","five"},i,j,t=0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = i + 1; j < 5; j++)
//		{
//			if (a[i][0] > a[j][0])
//			{
//				t = a[i][0];
//				a[i][0] = a[j][0];
//				a[j][0] = t;
//			}
//		}
//	}
//	puts(a[1]);
//}

//int main()
//{
//	int i;
//	char a[] = "How are you!";
//	for (i = 0; a[i]; i++)
//	{
//		if (a[i] == ' ')
//			strcpy(a,&a[i+1]);
//	}
//	printf("%s\n",a);
//}

//int main()
//{
//	char b[3][10]; int i;
//	for (i = 0; i < 2; i++)
//	{
//		scanf_s("%s",b[i]);
//		gets(b[2]);
//		printf("%s%s%s\n",b[0],b[1],b[2]);
//	}
//}

//int main()
//{
//	char w[20], a[5][10] = {"abcdef","ghijkl","mnopq","rstuv","wxyz"};
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		w[i] = a[i][strlen(a[i]) / 2];
//	}
//	w[5] = '\0';
//	puts(w);
//}

//int main()
//{
//	int i;
//	char a[] = "How are you!";
//	for (i = 0; a[i]; i++)
//	{
//		if (a[i] == " ")
//		{
//			strcpy(a,&a[i+1]);
//			i = 0;
//		}
//	}
//	printf("%s\n",a);
//}