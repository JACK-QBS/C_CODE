#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int num = 0;
	printf("����������Ҫ���ҵ����֣� ");
	scanf("%d", &num);
	int left = 0;
	int right = 9;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (mid < num)
			left=mid+1;
		else if (mid > num)
			right=mid-1;
		else
		{
			printf("���ҵ� �±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ�����\n");
	}
	return 0;
}


//void menu()
//{
//	printf("******************************\n");
//	printf("******      1. play     ******\n");
//	printf("******      0. exit     ******\n");
//	printf("******************************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand()%100+1;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		//1. ��ӡһ���˵�
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ�Ĵ���
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int main()
//{
//	for (int i = 1;i < 10;i++)
//	{
//		for (int j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%d ", j, i, i*j);
//			if (i == j)
//				printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	int temp = 0;
//	int i = 0;
//	printf("������ʮ�����֣�\n");
//	for (i = 0;i < 10;i++)
//	{
//       scanf("%d ", &arr[i]);
//	}
//	for (i = 0;i <10;i++)
//	{
//		if (arr[i] > temp)
//		{
//			temp = arr[i];
//		}
//	}
//	printf("��ʮ��������������%d\n", temp);
//	return 0;
//}

//int main()
//{
//	float sum = 0;
//	for (int a = 1; a <= 100; a++)
//		sum += (1.0 / a) * (pow(-1, (a + 1)));
//	printf("sum=%f\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1, j = 1;i <= 100;i++)
//	{
//		if (j >= 20)
//			break;
//		if (j % 3 == 1)
//		{
//			j += 3;
//			continue;
//		}
//		j -= 5;
//	}
//	printf("%d\n", i);
//	return 0;
//}

