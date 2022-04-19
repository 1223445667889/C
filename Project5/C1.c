#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//int main()
//{
//	int i, j, m = 1;
//	for (i = 1; i < 3; i++)
//	{
//		for (j = 3; j > 0; j--)
//		{
//			if (i * j > 3)
//				break;
//		
//			m *= i * j;
//		
//		}
//	}
//	printf("m=%d\n",m);
//}


//int main()
//{
//	int y = 9;
//	for (; y > 0; y--)
//	{
//		if (y % 3 == 0)
//			printf("%d\n",--y);
//	}
//	return 0;
//}

//
//int main()
//{
//	int a1, a2; char c1, c2;
//	scanf_s("%d%c%d%c",&a1,&c1,&a2,&c2);
//	printf("%d,%c,%d,%c",a1,c1,a2,c2);
//	return 0;
//	//可以输入 12a34b
//}

//int main()
//{
//	int a, b, c;
//	a = 10; b = 50; c = 30;
//	if (a > b)
//	{
//		a = b,
//		b = c;
//		c = a;
//	}
//	printf("a=%d,b=%d,c=%d\n",a,b,c);
//}

//int main()
//{
//	int k, c = 0;
//	for (k = 1; k < 3; k++)
//	{
//		switch (k)
//		{
//		default:
//			c += k;
//		case 2:
//			c++;
//			break;
//		case 4:
//			c += 2;
//			break;
//		}
//	}
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int i, j;
//	for (i = 1; i < 4; i++)
//	{
//		for (j = i; j < 4; j++)
//		{
//			printf("%d*%d=%-3d",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//char my_strcpy(char* dest,const char* src)//const 调试容易  
//{
//	char* ret = dest;
//	//while (*src != '\0')
//	//{
//	//	*dest = *src;
//	//	src++;   
//	//	dest++;
//	//}
//	//*dest = *src;//方法一
//	/*
//if (dest != = NULL && src != NULL)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
// }方法二
//*/
//
//
// assert(dest != NULL);//断言
//assert(src != NULL);
//while (*dest++ = *src++)
//{
//	;
//}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "#################";
//	char arr2[] = "bit";
//	
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
//
//int main()
//{
//	const int num = 10;
//	int* const p = &num;
//	*p = 20;//err const 放在指针变量的*左边，修饰的是*P，也就是说：不能通过p来改变*p的值
//	        //const 放在指针变量的*右边，修饰的是指针变量p本身，p不能被改变了
//	printf("%d\n",num);
//	return 0;
//}
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//		while (*str != '\0')
//		{
//			count++;
//			str++;
//		}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef ";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//}
