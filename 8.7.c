#define _CRT_SECURE_NO_WARNINGS 1 //解决函数不安全的问题
#include <stdio.h>//头文件   std-标准  i-input输入 o-output 输出

//main函数是程序的入口
//在一个工程内main函数有且只有一个

int main() {   //int 称为返回值类型  （）放参数    {}函数体
	int num = 10;//创建一个整形变量叫num并且赋值0
	scanf("%d",&num );//输入一个数字
	//%d 是输入整形数据
	printf("hellow bit \n");//print function 打印  库函数
	printf("%d\n",num);
	printf("%d\n", sizeof(char));//sizeof(类型) 计算类型创建变量所开辟空间的大小
	return 0;  //呼应int 返回
}