
#include<stdio.h>
#include<string.h>

int add(int a, int b)
{
	//�κ�һ�ε��ö���Ҫ���ڴ�����ռ�
	//�������ջ�ռ�
	return a + b;
}
int main()
{
	int a = 3, b = 4;
	int ret=add(a, b);
	printf("ret=%d\n", ret);
}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//void print1(struct Stu s)
//{
//	printf("%s %d\n", s.name, s.age);
//}
//void print2(struct Stu *ps)
//{
//	printf("%s %d\n", (*ps).name, (*ps).age);
//	printf("%s %d\n", ps->name, ps->age);
//}
//int main()
//{
//	struct Stu s = { "����",20 };
//	print1(s);//��ֵ����
//	print2(&s);//��ַ����
//	//printf("%s %d\n", s.name, s.age);
//}

//struct B
//{
//	int a;
//	char arr[20];
//};
//struct S
//{
//	int a;
//	char arr[20];
//	int* p;
//	struct B sb;
//};
//int main()
//{
//	int a = 0;
//	struct B b = {20,'w'};
//	struct S s = { 100,"hehe",NULL,{33,'q'} };
//	printf("%d %s %d %c\n", s.a, s.arr, s.sb.a, s.sb.arr);
//
//
//}


//������һ���ṹ������
//struct book
//{
//	char name[20];
//	short price;
//}b3,b4,b5;//b3,b4,b5��ȫ�ֱ��� �ṹ�����
//typedef struct book
//{
//	char name[20];
//	short price;
//}book;
//int main()
//{
//	struct book b1;
//	struct book b2;
//	book b4;
//	book b5;
//
//	strcpy(b1.name,"C����");
//	b1.price = 55;
//	printf("%s\n", b1.name);
//	printf("%d\n", b1.price);
//
//}


