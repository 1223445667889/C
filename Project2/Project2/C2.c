//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//#include <string.h>
//
// 二分法
// 
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right)/2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else 
//		{
//			printf("找到了，下表是：%d\n",mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("找不到\n");
//		//}
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	printf("请输入1~10的数字");
//	scanf_s("%d\n",&k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下表为：%d\n",i);
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}