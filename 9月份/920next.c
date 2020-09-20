
#include<stdio.h>

void test()
{
	printf("test\n");
	printf("test\n");
	printf("test\n");
	printf("test\n");
	printf("test\n");
	printf("test\n");
}
int main()
{
	int arr[10] = { 0 };
	printf("bit\n");
	test();
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}

}

//int diff(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//		count++;
//}
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int sz = diff(m,n);
//	printf("%d\n", sz);
//}

//int main()
//{
//	//char str[] = "hello CSDN";
//	//printf("%d  %d\n",sizeof(str), strlen(str));
//	int arr[] = { 1,2,3,4,5,6 };
//	//int sz = strlen(arr);
//	int sz = sizeof(arr)/sizeof(arr[2]);
//	printf("%d \n", sz);
//	/*for (int i = 0; i < 6; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}*/
//}


