#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

double pow(int n, int k)
{
	if (k == 0)
		return 1.0;
	else if (k > 0)
		return (double)n * pow(n, k - 1);
	else
		return 1.0 / (pow(n, -k));
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret=pow(n, k);
	printf("%f\n", ret);
	return 0;
}

//int digitsum(int n)
//{
//	if (n > 9)
//	{
//		return digitsum(n / 10) + n % 10;
//	}
//	else
//		return n;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = digitsum(n);
//	printf("%d\n", ret);
//	return 0;
//}

//void reverse_string(char arr[])//�ǵݹ�
//{
//	int left = 0;
//	int right = strlen(arr)-1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len=strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';//��Ϊstrlen�����'\0'ǰ�ĳ���
//	//�м��ַ���������
//	if(strlen(arr+1)>1)
//	    reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}

//
//int mystrlen(char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = mystrlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (strlen(arr + 1) > 1)
//		reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int Fib(int n)//�ݹ�(������������ʱ��Ч��̫��)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int Fib(int m)//�ǵݹ飬�����ķ�ʽ
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (m > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		m--;
//	}
//	return c;
//}
//int main()//����������������쳲��������У�1 1 2 3 5..��
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		sum += flag*1.0 / i;//  /���������� �������߶���������ʱ��ִ�е�ʱ��������
//		                // 1/2��=0.5   ==0
//		                  //���߲�������ֻҪ��һ����������ִ�еľ��Ǹ������ĳ���
//		flag = -flag;
//	}
//	printf("sum=%f\n", sum);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1;i < sz;i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


