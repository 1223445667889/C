#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

//
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60 ");
//again:
//	printf("���Խ���һ�����ڹػ���������룺��������ȡ���ػ���\n�����룺��");
//	scanf("%s",input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60 ");
	while (1)
	{
		printf("���Խ���һ�����ڹػ���������룺��������ȡ���ػ���\n�����룺��");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
