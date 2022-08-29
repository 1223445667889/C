#define _CRT_SECURE_NO_WARNING 1
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>


int fun(int n[])
{
	int i;
	for (i = 6; i >=0; i--)
	{

		if (n[i] == i)
			return 1;
		if (i == 0)
			return 0;
		else(fun(n - 1) - 2);
		     return fun(n);
	}
}
int main()
{
	int n[6] = { 1,5,6,9,4,6 };
	fun(n);
	printf(fun(6));
}