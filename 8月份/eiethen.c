#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("��������������:\n");
	scanf("%d %d", &num1, &num2);
	while (num1 != num2)
	{
		if (num1 > num2)
			num1 -= num2;
		else
			num2 -= num1;
	}
	printf("���Լ��Ϊ��%d\n", num1);
	return 0;
}


//int main()
//{
//	for (int i = 1000;i < 2000;i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//			printf("%d������\n",i);
//		else if(i % 400 == 0)
//			printf("%d������\n",i);
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
//			printf("%d������\n", num);
//	}
//	return 0;
//}


//int main() {
	//    int a = 0;  // �����ĸ���
	//    int num = 0;  // ���������
	//    printf("����һ��������");
	//    scanf("%d", &num);
	//    for (int i = 2;i < num;i++) {
	//        if (num % i == 0) {
	//            a++;  // ����������1
	//        }
	//    }
	//    if (a == 0) {
	//        printf("%d��������\n", num);
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
//				count++;//��λ��9
//		}
//		if (9 == i)
//			count+=10;//ʮλ��9
//	}
//	printf("1-100�������г�����%d��9", count);
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




