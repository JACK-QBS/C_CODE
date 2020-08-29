
#include<stdio.h>
#include<string.h>

int main()
{
	int arr[] = { 1,2,(3,4),5 };
	printf("%d\n", sizeof(arr));
	return 0;
}

//void print_arr(int arr[3][4],int row,int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < row;i++)
//	{
//		for (j = 0;j < col;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//}
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9 };
//	print_arr(arr, 3, 4);
//	return 0;
//}

//void sort(int arr[],int sz)
//{
//	for (int i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz-1-i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//void print_arr(int arr[],int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr,sz);
//	print_arr(arr,sz);
//	return 0;
//}


//int main()
//{
//	int arr[3][4] = { {1,2},{3,4},{5} };
//	int i = 0;
//	int* p = &arr[0][0];
//	for (i = 0;i < 12;i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
/*int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	for (int i = 0;i < 10;i++)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}*/


//int main()
//{
//	//int array[10] = { 1,2,3 };
//	//char ch[7];
//	/*int n = 10;
//	int arr1[n] = { 0 };*/
//	/*int arr[] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%p\n", &arr[i]);
//	}
//	*/
//	int arr[3][4] = { {1,2},{3,4},{5} };
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 4;j++)
//		{
//			/*printf("%d ", arr[i][j]);*/
//			printf("arr[%d][%d]=%p\n ",i,j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


