#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("请输入两个数字:\n");
	scanf("%d %d", &num1, &num2);
	while (num1 != num2)
	{
		if (num1 > num2)
			num1 -= num2;
		else
			num2 -= num1;
	}
	printf("最大公约数为：%d\n", num1);
	return 0;
}


//int main()
//{
//	for (int i = 1000;i < 2000;i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//			printf("%d是闰年\n",i);
//		else if(i % 400 == 0)
//			printf("%d是闰年\n",i);
//	}
//	return 0;
//}


//int main()
//{
//	for (int num = 100;num < 200;num++)
//	{
//        int count = 0;
//		for (int i = 2;i < num;i++)
//		{
//            if (num % i == 0)
//            {
//            count++;
//            break;
//            }
//		}
//		if(count == 0)
//			printf("%d是素数\n", num);
//	}
//	return 0;
//}


//int main() {
	//    int a = 0;  // 素数的个数
	//    int num = 0;  // 输入的整数
	//    printf("输入一个整数：");
	//    scanf("%d", &num);
	//    for (int i = 2;i < num;i++) {
	//        if (num % i == 0) {
	//            a++;  // 素数个数加1
	//        }
	//    }
	//    if (a == 0) {
	//        printf("%d是素数。\n", num);
	//    }
	//    return 0;
	//}

//int main()
//{
//	int count = 0;
//	int i = 0;
//	int j = 0;
//	int sum = 10 * i + j;
//	for (i = 0;i < 10;i++)
//	{
//		for (j = 0;j < 10;j++)
//		{
//			if (9 == j)
//				count++;//个位是9
//		}
//		if (9 == i)
//			count+=10;//十位是9
//	}
//	printf("1-100的整数中出现了%d个9", count);
//	return 0;
//}

//
//int main()
//{
//	int a = 1;
//	int b;
//	switch (1)
//	{
//	case 1:b = 30;
//	case 2:b = 20;
//	case 3:b = 16;
//	default:b = 0;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 3;
//	switch (a % 2)
//	{
//	case 1:
//		switch (b)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hellow");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}




