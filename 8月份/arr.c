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
	printf("������������������ݣ�4�����֣��� \n");
	printf("����ǰ\nA���飺 ");
	input(A);//��������
	printf("B���飺 ");
	input(B);
	temp(A,B);
	printf("������\nA���飺 ");
	print(A);
	printf("B���飺 ");
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
//	init(arr);//��ʼ������
//	printf("������10������ ");
//	for (int i = 0;i < len;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	print(arr);//��ӡ����Ԫ��
//	reverse(arr);//����Ԫ������
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
//	sort(arr, sz);//����Ӵ�С����
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