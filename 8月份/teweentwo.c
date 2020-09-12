#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>


int is_leap_year(int a)
{
	if(((a%4==0)&&(a%100!=0))||(a%400==0))
		return 1;
	else
		return 0;
}

int main()
{
	int y = 0;
	for (y = 1000;y <= 2000;y++)
	{
		if (is_leap_year(y) == 1)
		{
			printf("%d ", y);
		}
	}
	return 0;
}

//int is_prime(int a)
//{
//	int i = 0;
//	for (i = 2;i <= sqrt(a);i++)
//	{
//		if (a % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个数：\n");
//	scanf("%d", &num);
//	if (is_prime(num) == 1)
//	{
//		printf("是素数");
//	}
//	return 0;
//}


//void swap(int* num1, int* num2)
//{
//	int temp = 0;
//	temp =* num1;
//	*num1=*num2;
//	*num2 = temp;
//
//}
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d %d", &x, &y);
//	printf("x=%d,y=%d\n", x, y);
//	swap(&x,&y);
//	printf("x=%d,y=%d\n", x, y);
//	return 0;
//}


//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 0, num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int max=get_max(num1,num2);
//	printf("%d \n", max);
//	return 0;
//}


//int main()
//{
//	char arr[] = "hellow";
//	memset(arr, '*', 4);
//	printf("%s\n", arr);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "hellow";
//	char arr2[20] = { 0 };
//	strcpy(arr2,arr1);//调用函数
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101;i <= 200;i += 2)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2;j <= sqrt(i);j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag = 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		int j = 0;
//		for (j = 2;j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j >= i)
//			printf("%d ", i);
//	}
//	return 0;
//}


