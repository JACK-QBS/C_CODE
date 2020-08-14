#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdio.h>

//#define max 100//定义符号常量
//#define add(x,y)((x)+(y))//定义加法的宏


////1、static修饰局部变量
//void test() {
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main() {
//	int i = 0;
//	while (i < 10) {
//		test();
//		i++;
//	}
//	return 0;
//}

////2、static修饰全局变量
//static int a = 2020;//这个全局变量只能在自己所在的原文件使用
//int main() {
//	printf("%d", a);
//	return 0;
//}

////3、static修饰函数
//static int add(int i, int j) {
//	printf("%d ", i + j);
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	int num = add(a,b);
//	return 0;
//}

//int main() {
//	/*int a = max;
//	printf("%d\n", a);*/
//	int sum = add(3, 4);
//	printf("sum =%d\n", sum);
//	return 0;
//}
//
////指针
//int main() {
//	char ch = 'c';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	//int i = 4;
//	//int* pi = &i;//
//	//*pi = 67;//*解引用操作符
//	//printf("i=%d\n", i);
//	return 0;
//}


////结构体
//struct stu {
//	char name[20];
//	short age;
//};
//int main() {
//	struct stu s1 = { "张三",22 };
//	struct stu* ps = &s1;
//	printf("%s %d\n", ps->name, ps->age);
//	//printf("%s %d\n", s1.name, s1.age);
//	return 0;
//}

//int main() {
//	int i = 10;
//	if (i < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//	return 0;
//}

//int main() {
//	int a = 0;
//	int b = 1;
//	if (a == 1)
//		if (b == 1)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	printf("请输入一个数字:");
//	scanf("%d", &i);
//	if (i % 2==1)
//		printf("%d是奇数\n",i);
//	else
//		printf("%d是偶数\n",i);
//	return 0;
//}


int main()
{
	/*for (int i = 1;i <= 100;i++)
	{
		if (1 == i % 2)
		{
			printf("%d\n", i);
		}
	}*/

	int i = 1;
	while (i <= 100)
	{
		if (1 == i % 2)
		{
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}
