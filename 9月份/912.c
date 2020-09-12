

#include <stdio.h>

int count_one(int n)
{
	/*int count = 0;
	for (int i = 0;i < 32;i++)
	{
		if (((n >> i) & 1 )== 1)
		{
			count++;
		}
	}*/
	/*while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}*/
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	//一个整数存储在内存中的二进制中1的个数
	int a = -1;
	int ret=count_one(a);
	printf("%d\n", ret);
	return 0;
}

//int main()
//{//交换两个数字
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d\n",a,b);
//
//	return 0;
//}

//int main()
//{
//	//& 按位与 ， |按位或 ， ^按位异或
//	int a = 3;//011
//	int b = 5;//101
//	//int c = a & b;
//	//int c = a | b;
//	int c = a ^ b;
//	printf("c=%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 7;
//	a >> 1;
//	a << 1;//移动二进制位(左边丢弃，右边加0)
//	int b = a << 1;
//	int c = a >> 1;
//	//1、算数右移（右边丢弃，左边补原符号）
//	//2、逻辑右移：（右边丢弃，左边补0）
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	//int a = 7 / 2;
//	double a = 7 / 2.0;
//	printf("a=%lf\n", a);
//	return 0;
//}
