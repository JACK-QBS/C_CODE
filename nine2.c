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
//		for (;j < 10;j++)//jֻѭ����һ�֣��Ժ���10
//		{
//			printf("hehe %d\n",count);
//			count++;
//		}
//	}
//
//	//for (;;)//��ѭ������
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


////1-5������
////6-7��Ϣ��
//int main()
//{
//	//short day = 0;
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	/*case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;*/
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		/*printf("������\n");
//		break;*/
//	case 7:
//		printf("������\n");
//		break;
//	default :
//		printf("�������\n");
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
//			//continue;//��������ѭ��
//			break;//������ֹѭ��
//		}
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int ch = getchar();//getchar�Ӽ��̻�ȡһ���ַ�
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
//	printf("����������:\n");
//	scanf("%s", password);
//	//�������������ַ�
//	while ((getchar()) != '\n')
//	{
//		getchar();
//	}
//	printf("��ȷ��(Y/N):\n");
//	//scanf("%c", & ch);
//	ch = getchar();
//	if ('Y' == ch)
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//		printf("����ȷ��");
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