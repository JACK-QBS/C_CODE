
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char password[20] = { 0 };
	for (int i = 0;i < 3;i++)
	{
		printf("����������\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("������ȷ\n");
				break;
		}
		else
			printf("���������������\n");
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
//			printf("�ҵ���,�±���:%d\n", mid);
//			break;
//		}
//		if (n<left || n>right)
//		{
//			printf("�Ҳ�����\n");
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
//			printf("�ҵ���\n");
//			break;
//		}
//	}
//	if (i == 10) {
//		printf("�Ҳ���\n");
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
