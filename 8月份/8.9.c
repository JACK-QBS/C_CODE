
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int num1 = 0;
	int num2 = 0;
	printf("请输入两个数的大小:\n");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
		printf("两个数中最大的数是%d\n", num1);
	else
		printf("两个数中最大的数是%d\n", num2);
	return 0;
}


//int a = 100;//全局变量
//int main() {
//	int a = 10;//局部变量
//	printf("%d\n", a);//当全局变量和局部变量名字相同时，局部优先
//	return 0;


//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个整数：\n");
//	scanf("%d%d", &num1, &num2);
//	int sum=num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}


/*int a = 100;
void test() {
	printf("test.a=%d\n", a);
}
int main() {
	printf("a=%d\n", a);
	test();
	return 0;
}*/


//enum Sex {
//	//枚举类型的两个可能取值-枚举常量
//	man,
//    woman
//};
//int main() {
//	enum Sex sex = man;
//	printf("%d\n", man);
//	printf("%d\n",woman);
//	return 0;
//}

//int main() {
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','\0' };
//	printf("%s\n", arr1);//%s是打印字符串
//	printf("%s\n", arr2);
//	return 0;
//}

//int main() {
//	char arr1[] = "abcde";
//	printf("%d\n",strlen(arr1));//strlen是计算字符串长度
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	printf("\ddd");
//	return 0;
//}


//int main() {
//	int input = 0;
//	printf("加入比特\n");
//	printf("是否好好学习(1/0)\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("拿个好offer");
//	else printf("卖红薯");
//
//	return 0;
//}

//int add(int x, int y) {
//	int z = x + y;
//	return z;
//}
//
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = add(num1, num2);
//	printf("sum=%d\n", sum);
//	return 0;
//}