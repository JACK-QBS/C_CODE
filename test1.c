#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdio.h>

//#define max 100//������ų���
//#define add(x,y)((x)+(y))//����ӷ��ĺ�


////1��static���ξֲ�����
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

////2��static����ȫ�ֱ���
//static int a = 2020;//���ȫ�ֱ���ֻ�����Լ����ڵ�ԭ�ļ�ʹ��
//int main() {
//	printf("%d", a);
//	return 0;
//}

////3��static���κ���
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
////ָ��
//int main() {
//	char ch = 'c';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	//int i = 4;
//	//int* pi = &i;//
//	//*pi = 67;//*�����ò�����
//	//printf("i=%d\n", i);
//	return 0;
//}


////�ṹ��
//struct stu {
//	char name[20];
//	short age;
//};
//int main() {
//	struct stu s1 = { "����",22 };
//	struct stu* ps = &s1;
//	printf("%s %d\n", ps->name, ps->age);
//	//printf("%s %d\n", s1.name, s1.age);
//	return 0;
//}

//int main() {
//	int i = 10;
//	if (i < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");
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
//	printf("������һ������:");
//	scanf("%d", &i);
//	if (i % 2==1)
//		printf("%d������\n",i);
//	else
//		printf("%d��ż��\n",i);
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
