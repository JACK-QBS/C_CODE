
#include<stdio.h>
#include<string.h>

//int my_strlen(char *str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
int my_strlen(char *str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	char arr[] = "abcdef";
	//int len = strlen(arr);
	int len = my_strlen(arr);
	printf("%d\n", len);
}

//int main()
//{
//	//ָ�롪ָ��õ�����ָ���ָ��֮��ĸ���
//	//ǰ�᣺����ָ��ָ��ͬһ���ռ�
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//}


//int main()
//{
//	//ָ��+������
//	char arr[] = { 'a','b','c','d' };
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%c\n", *p++);
//		//printf("%c\n",*( p + i));
//	}
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(pa + i));
//	}
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//}

//int main()
//{
//	int a = 10;
//	char ch = 'w ';
//	//printf("%p\n", &a);
//	int * pa = &a;//��ַҲ��ֵ�����Դ洢��pa������
//	char* pc = &ch;
//	*pa = 20;
//	printf("%d\n",a);
//
//}


