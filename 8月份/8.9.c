
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int num1 = 0;
	int num2 = 0;
	printf("�������������Ĵ�С:\n");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
		printf("����������������%d\n", num1);
	else
		printf("����������������%d\n", num2);
	return 0;
}


//int a = 100;//ȫ�ֱ���
//int main() {
//	int a = 10;//�ֲ�����
//	printf("%d\n", a);//��ȫ�ֱ����;ֲ�����������ͬʱ���ֲ�����
//	return 0;


//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	printf("����������������\n");
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
//	//ö�����͵���������ȡֵ-ö�ٳ���
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
//	printf("%s\n", arr1);//%s�Ǵ�ӡ�ַ���
//	printf("%s\n", arr2);
//	return 0;
//}

//int main() {
//	char arr1[] = "abcde";
//	printf("%d\n",strlen(arr1));//strlen�Ǽ����ַ�������
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	printf("\ddd");
//	return 0;
//}


//int main() {
//	int input = 0;
//	printf("�������\n");
//	printf("�Ƿ�ú�ѧϰ(1/0)\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("�ø���offer");
//	else printf("������");
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