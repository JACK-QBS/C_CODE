#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <math.h>
int power(int n,int k)
{
	int c=n* n;
	
	k = k - 1;
	if (k > 0) {
		power(n, k);
	}
	return c;
	
}
int main()
{
	int n = 0, k = 0;
	printf("请输入两个数字，表示n的k次方：\n");
	scanf("%d %d", &n, &k);
	int ret = power(n, k);
	printf("ret=%d\n", ret);
	return 0;
}


//int digitsum(int n)
//{
//	int sum = 0;
//	if (n > 9)
//	{
//		digitsum(n / 10);
//	}
//	return sum += (n % 10);
//
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个非负的整数：\n");
//	scanf("%d", &num);
//	int ret = digitsum(num);
//	printf("%d\n", ret);
//	return 0;
//}


//int reverse_string(char * string)
//{
//	char* left = string;
//	char* right = string + strlen(string)-1;
//	char temp;
//	if (*left != '\0')
//	{
//		temp = *left;
//		*left = *right;
//		*right = temp;
//		reverse_string(string + 1);
//		return string;
//	}
//	else
//		return NULL;
//}
//int main()
//{
//	char arr[5] = "abcde";
//	char *ret=reverse_string(arr);
//	printf("%s\n", ret);
//	return 0;
//}

//递归函数
//int fac(int num)
//{
//	int ret = 1;
//	for (int i = 1;i <= num;i++)
//	{
//		ret *= i;
//	}
//	return ret;
//
//}
//int fac(int num)
//{
//	if (num <= 1)
//		return 1;
//	else 
//		return num * fac(num - 1);
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个数:\n");
//	scanf("%d", &num);
//	int ret = fac(num);
//	printf("ret=%d\n", ret);
//	return 0;
//}

