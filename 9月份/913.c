
#include<stdio.h>

int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d\n", ret);
	printf("%d\n", i);
	
}

//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);
//
//}
//int main()
//{
//	//ab��������
//	char a = 3, b = 127;
//	char c = a + b;
//	printf("c=%d\n", c);
//}

//struct Book
//{
//	char name[20];
//	int price;
//};
//int main()
//{
//	struct Book b = {"C���Գ������",35};
//	printf("%s  %d\n", b.name, b.price);
//	struct Book* pb = &b;
//	printf("%s  %d\n", pb->name, pb->price);
//}

//int main()
//{
//	//���ű��ʽ�����������μ��㣬�������һ�����ʽ�Ĵ�
//	int a = 1, b = 2;
//	int c = (a > b, a = 10 + b, a, b = a + 1);
//	printf("%d\n",c);
//}

//int main()
//{
//	//����������  ��Ŀ������
//	int a = 10;
//	int b = 20;
//	int max = a > b ? a : b;
//	b = a > 5 ? 3 : -3;
//	printf("max=%d\n", max);
//
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++; &&������Ϊ0���ұ߲���Ҫ�ڼ���
//	i = a++ || ++b || d++;
//	printf("%d\n%d\n%d\n%d\n", a, b, c, d);
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//a& b;//��������λ��
//	//a&& b;//�߼��루��ͼ٣�
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);
//	int b = a++;//����++  ��ʹ��a����a++
//	printf("a=%d b=%d\n", a, b);
//	int c = ++a;//ǰ��++  ������a,��ʹ��a
//	printf("a=%d c=%d\n", a, c);
//	return 0;
//}


//int main()
//{
//	//int a = 0;
//	//printf("%d\n", ~a);//~��λȡ��
//
//	int a = 14;
//	a |= (1 << 4);
//	printf("%d\n", a);
//
//	return 0;
//}



