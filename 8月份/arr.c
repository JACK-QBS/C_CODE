#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define len 4
void input(int arr[])
{
	for (int i = 0;i < len;i++)
	{
		scanf("%d", &arr[i]);
	}
}
void temp(int A[],int B[])
{
	for (int i = 0;i < len;i++)
	{
		int temp = A[i];
		A[i] = B[i];
		B[i] = temp;
	}
}
void print(int arr[])
{
	for (int i = 0;i < len;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int A[len];
	int B[len];
	printf("请输入两个数组的内容（4个数字）： \n");
	printf("交换前\nA数组： ");
	input(A);//输入数字
	printf("B数组： ");
	input(B);
	temp(A,B);
	printf("交换后\nA数组： ");
	print(A);
	printf("B数组： ");
	print(B);
	return 0;
}

//#define len 3
//void init(int arr[])
//{
//	for (int i = 0;i < len;i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[])
//{
//	for (int i = 0;i < len;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[])
//{
//	int left = 0;
//	int right = len - 1;
//	while (left<right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	
//	int arr[len];
//	init(arr);//初始化数组
//	printf("请输入10个数： ");
//	for (int i = 0;i < len;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	print(arr);//打印数组元素
//	reverse(arr);//数组元素逆置
//	print(arr);
//}


//void sort(int arr[], int sz)
//{
//	for (int i = 0;i < sz-1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - i-1;j++)
//		{
//			if (arr[j]<arr[j+1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);//数组从大到小排序
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d,", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}