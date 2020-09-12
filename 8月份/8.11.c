
//求两个数中的最大值
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//方法一：
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个数的大小:\n");
//	scanf("%d %d", &num1, &num2);
//	if (num1 > num2)
//		printf("两个数中最大的数是%d\n", num1);
//	else
//		printf("两个数中最大的数是%d\n", num2);
//	return 0;
//}

//方法二：调用比较函数来比较
int Compare(int i, int j) {
	if (i > j) return i;
	else return j;
}
int main() {
	int num1 = 1;
	int num2 = 0;
	printf("请输入两个数的大小：\n");
	scanf("%d %d", &num1, &num2);
	int max = Compare(num1, num2);
	printf("两个数中最大的数是%d\n", max);
	return 0;
}


////交换两个数
//#include<stdio.h>
//int main() {
//	int i = 5;
//	int j = 7;
//
//	/*方法一：
//    	int temp; //存在第三变量，算法效率最高
//		temp = i;
//		i = j;
//		j = temp;
//		printf("i=%d  j=%d\n",i,j);*/
//
//	/*方法二：
//	    i = i+j;  //当i和j无限大时，她两和的值就会溢出
//		j = i - j;
//		i = i - j;
//		printf("i=%d  j=%d\n", i, j);*/
//
//	//方法三：
//	i = i ^ j;  //异或的方式，使用数字的进位
//	j = i ^ j;
//	i = i ^ j;
//	printf("i=%d  j=%d\n", i, j);
//
//	return 0;
//}