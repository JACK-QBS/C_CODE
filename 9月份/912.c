

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
	//һ�������洢���ڴ��еĶ�������1�ĸ���
	int a = -1;
	int ret=count_one(a);
	printf("%d\n", ret);
	return 0;
}

//int main()
//{//������������
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
//	//& ��λ�� �� |��λ�� �� ^��λ���
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
//	a << 1;//�ƶ�������λ(��߶������ұ߼�0)
//	int b = a << 1;
//	int c = a >> 1;
//	//1���������ƣ��ұ߶�������߲�ԭ���ţ�
//	//2���߼����ƣ����ұ߶�������߲�0��
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
