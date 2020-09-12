#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

void table(int x)
{
	for (int i = 1;i <= x;i++)
	{
		for (int j = 1;j <=i;j++)
		{
			printf("%d*%d=%d ", j, i, i * j);
		}
		printf("\n");
	}
}
int main()
{
	int num = 0;
	printf("乘法口诀表\n请输入一个数，表示几×几的乘法表：  ");
	scanf("%d", &num);
	table(num);
	return 0;
}

//void swap(int* x,int *y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int num1 = 0, num2 = 0;
//	printf("请输入两个数字：  ");
//	scanf("%d %d", &num1, &num2);
//	printf("交换前：num1=%d,num2=%d\n", num1, num2);
//	swap(&num1,&num2);
//	printf("交换后：num1=%d,num2=%d\n", num1, num2);
//	return 0;
//}

//void leap_year(int x)
//{
//	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
//	{
//		printf("%d 是闰年\n", x);
//	}
//	else
//		printf("%d 不是闰年\n", x);
//}
//int main()
//{
//	int year = 0;
//	printf("请输入年份： ");
//	scanf("%d", &year);
//	leap_year(year);
//	return 0;
//}

//int prime(int n)
//{
//	int i = 0;
//	for (i = 2;i <= sqrt(n);i+=2)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//			break;
//		}			
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100;i < 200;i++)
//	{
//		if (prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


