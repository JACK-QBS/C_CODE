
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
//	//���ű��ʽ�����������μ��㣬�����������ʽ�Ľ�������һ�����ʽ�Ľ��
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
//	max = (a > b ? a : b);//��Ŀ������
//	printf("max=%d\n", max);
//	return 0;
//
//}


//int main() {
//	//int a = 10;
//	//int b = a++;//����++����ʹ��a��ֵ������a+1
//	//printf("a=%d b=%d\n", a, b);
//
//	int a = 10;
//	int b = ++a;//ǰ��++���ȸ�a��ֵ��1����ʹ��
//	printf("a=%d b=%d\n", a, b);
//
//}

//int main() {
//	int a = 8;
//	int b = a>>1;//��a��ֵ������һλ�������ƣ�
//	printf("%d\n", b);
//	//printf("%d\n", 7 / 2);//��
//	//printf("%d\n", 7 % 2);//%-ȡģ-ȡģ�õ���������
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