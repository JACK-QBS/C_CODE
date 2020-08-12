
#include<stdio.h>

void test() {
	static int a = 1;
	a++;
	printf("a=%d\n", a);
}
int main() {
	int i = 0;
	while (i < 10) {
		test();
		i++;
	}
	return 0;
}

//int main() {
//	//逗号表达式从左向右依次计算，但是整个表达式的结果是最后一个表达式的结果
//	int a = (1 + 2, 2 + 8, 1 - 8);
//	printf("a=%d\n", a);
//	return 0;
//}

//int main() {
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	/*if (a > b) max = a;
//	else max = b;*/
//	max = (a > b ? a : b);//三目操作符
//	printf("max=%d\n", max);
//	return 0;
//
//}


//int main() {
//	//int a = 10;
//	//int b = a++;//后置++，先使用a的值，在让a+1
//	//printf("a=%d b=%d\n", a, b);
//
//	int a = 10;
//	int b = ++a;//前置++，先给a的值加1，在使用
//	printf("a=%d b=%d\n", a, b);
//
//}

//int main() {
//	int a = 8;
//	int b = a>>1;//吧a的值向右移一位（二进制）
//	printf("%d\n", b);
//	//printf("%d\n", 7 / 2);//商
//	//printf("%d\n", 7 % 2);//%-取模-取模得到的是余数
//	return 0;
//}


//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	//printf("%d\n",arr[5]);
//	int i = 0;
//	while (i < 9) {
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//
//}