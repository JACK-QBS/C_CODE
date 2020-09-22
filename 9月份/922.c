#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>


int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
}
int main()
{
	int len = my_strlen("abc");
	printf("%d\n", len);

}


////strcpty-- ×Ö·û´®¿½±´
//char * my_strcpy(char *dest,char *src)
//{
//	//while (*src != '\0')
//	//{
//	//	*dest++ = *src++;
//	//	/**dest = *src;
//	//	dest++;
//	//	src++;*/
//	//}
//	//*dest = *src; //¿½±´'\0'
//	char* ret = dest;
//	assert(dest!=NULL);//¶ÏÑÔ£¨ºê£©
//	assert(src!=NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[20] = "xxxxxx";
//	//my_strcpy(arr2,arr1);
//	//strcpy(arr2,arr1);
//	//Á´Ê½·ÃÎÊ
//	printf("%s\n", my_strcpy(arr2, arr1));
//}

//int main()
//{
//	long i = 0;
//	long arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0 ;
//		printf("hehe\n");
//	}
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	for (int j = 1; j <= n; j++)
//	{
//		int ret = 1;
//		for (int i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("sum=%d\n", sum);
//}


//void test2()
//{
//	printf("test2()\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	test2();
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}
//}


