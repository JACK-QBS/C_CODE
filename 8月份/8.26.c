#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int Fun(int n)
{
    if (n == 5)
        return 2;
    else
        return 2 * Fun(n + 1);
}
int main()
{
    int ret = Fun(2);
    printf("%d\n", ret);
    return 0;
}


//斐波那契数列
//int fib(int n)//递归
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int fib(int n)//非递归
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}



//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1;i <= n;i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n-1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}


//自定义求数组长度
//int my_strlen(char *str)
//{
//	int count = 0;//计数器
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//打印一个数的每一位
//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d",& num);
//	print(num);
//	return 0;
//}

//int add(int x, int y);//声明函数
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}

//int main()
//{
//	printf("%d", printf("%d",printf("%d",43)));
//	return 0;
//}

