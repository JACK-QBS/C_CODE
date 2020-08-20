
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char password[20] = { 0 };
	for (int i = 0;i < 3;i++)
	{
		printf("请输入密码\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("密码正确\n");
				break;
		}
		else
			printf("密码错误，重新输入\n");
	}
}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 67;
//	int left = 0;
//	int right = 9;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标是:%d\n", mid);
//			break;
//		}
//		if (n<left || n>right)
//		{
//			printf("找不到了\n");
//		}
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 7;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("找到了\n");
//			break;
//		}
//	}
//	if (i == 10) {
//		printf("找不到\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int sum = 0;
//	int j = 0;
//	int ret = 1;
//	for (j = 1;j <= 3;j++)
//	{
//		ret *= j;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		ret *= i;
//		i++;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
