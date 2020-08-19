#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			continue;
			//break;
     printf("%d ", i);
	 i++;
	}
	while (i < 10);

	return 0;
}


//int main() {
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0;k = 0;i++, k++)
//	{
//		k++;
//	}
//
//	/*int x, y;
//	for (x = 0, y = 0;x < 2 && y < 5;++x, y++)
//	{
//		printf("hehe\n");
//	}*/
//	return 0;
//}

//int main()
//{
//	int count = 1;
//	int i = 0;
//	int j = 0;
//	for (;i < 10;i++)
//	{
//		for (;j < 10;j++)//j只循环第一轮，以后都是10
//		{
//			printf("hehe %d\n",count);
//			count++;
//		}
//	}
//
//	//for (;;)//死循环代码
//	//{
//	//	printf("hehe\n");
//	//}
//
//
//	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	return 0;
//}


////1-5工作日
////6-7休息日
//int main()
//{
//	//short day = 0;
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	/*case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;*/
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//		/*printf("星期六\n");
//		break;*/
//	case 7:
//		printf("星期天\n");
//		break;
//	default :
//		printf("输入错误\n");
//		break;
//	}
//
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("%d %d\n", m, n);
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (i == 5)
//		{
//			//continue;//跳过本次循环
//			break;//永久终止循环
//		}
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int ch = getchar();//getchar从键盘获取一个字符
//	printf("%c\n", ch);
//	return 0;
//}

/*int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}*/


//int main()
//{
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:\n");
//	scanf("%s", password);
//	//处理缓冲区多余字符
//	while ((getchar()) != '\n')
//	{
//		getchar();
//	}
//	printf("请确定(Y/N):\n");
//	//scanf("%c", & ch);
//	ch = getchar();
//	if ('Y' == ch)
//	{
//		printf("确认成功\n");
//	}
//	else
//		printf("放弃确认");
//	return 0;
//
//}


//int main()
//{
//	int i = 0;
//	/*while (i < 10)
//	{
//		printf("%d ", i);
//		i++;
//	}*/
////	for (i = 0;i < 10;i++)
////	{
////		if (i == 5)
////		{
////			//continue;
////			break;
////		}
////		printf("%d ", i);
////	}
////	return 0;
////}