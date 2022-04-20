#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//int main()
//{
//	int num[] = { 1,2,3,4 };
//	printf("the 3[num] result is : %d\n",3[num]);
//	return 0;
//}

//int main()
//{
//	long f1, f2;
//	int i;
//	f1 = f2 = 1;
//	for (i = 1; i <= 20; i++)
//	{
//		printf("%12ld %12ld",f1,f2);
//		if (i % 2 == 0)
//		{
//			printf("\n");
//			f1 = f1 + f2;
//			f2 = f1 + f2;
//		}
//	}
//}


int main()
{
	int m, i, k, h = 0, leap = 1;
	printf("\n");
	for (m = 101; m <= 200; m++)
	{
		k = sqrt(m + 1);
		for (i = 2; i <= k; i++)
		{
			if (m % i == 0)
			{
				leap = 0; 
				break;
			}
			if (leap)
			{
				printf("%-4d",m);
				h++;
				if (h % 10 == 0)
				{
					printf("\n");
				}
			}
		}
		leap = 1;
	}
	printf("\nThe total is %d",h);
}
