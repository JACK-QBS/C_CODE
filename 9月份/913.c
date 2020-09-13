
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
//	//ab整型提升
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
//	struct Book b = {"C语言程序设计",35};
//	printf("%s  %d\n", b.name, b.price);
//	struct Book* pb = &b;
//	printf("%s  %d\n", pb->name, pb->price);
//}

//int main()
//{
//	//逗号表达式，从左到右依次计算，等于最后一个表达式的答案
//	int a = 1, b = 2;
//	int c = (a > b, a = 10 + b, a, b = a + 1);
//	printf("%d\n",c);
//}

//int main()
//{
//	//条件操作符  三目操作符
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
//	//i = a++ && ++b && d++; &&左边如果为0，右边不需要在计算
//	i = a++ || ++b || d++;
//	printf("%d\n%d\n%d\n%d\n", a, b, c, d);
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//a& b;//按二进制位于
//	//a&& b;//逻辑与（真和假）
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);
//	int b = a++;//后置++  先使用a，在a++
//	printf("a=%d b=%d\n", a, b);
//	int c = ++a;//前置++  先自增a,在使用a
//	printf("a=%d c=%d\n", a, c);
//	return 0;
//}


//int main()
//{
//	//int a = 0;
//	//printf("%d\n", ~a);//~按位取反
//
//	int a = 14;
//	a |= (1 << 4);
//	printf("%d\n", a);
//
//	return 0;
//}



