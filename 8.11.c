
//���������е����ֵ
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����һ��
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	printf("�������������Ĵ�С:\n");
//	scanf("%d %d", &num1, &num2);
//	if (num1 > num2)
//		printf("����������������%d\n", num1);
//	else
//		printf("����������������%d\n", num2);
//	return 0;
//}

//�����������ñȽϺ������Ƚ�
int Compare(int i, int j) {
	if (i > j) return i;
	else return j;
}
int main() {
	int num1 = 1;
	int num2 = 0;
	printf("�������������Ĵ�С��\n");
	scanf("%d %d", &num1, &num2);
	int max = Compare(num1, num2);
	printf("����������������%d\n", max);
	return 0;
}


////����������
//#include<stdio.h>
//int main() {
//	int i = 5;
//	int j = 7;
//
//	/*����һ��
//    	int temp; //���ڵ����������㷨Ч�����
//		temp = i;
//		i = j;
//		j = temp;
//		printf("i=%d  j=%d\n",i,j);*/
//
//	/*��������
//	    i = i+j;  //��i��j���޴�ʱ�������͵�ֵ�ͻ����
//		j = i - j;
//		i = i - j;
//		printf("i=%d  j=%d\n", i, j);*/
//
//	//��������
//	i = i ^ j;  //���ķ�ʽ��ʹ�����ֵĽ�λ
//	j = i ^ j;
//	i = i ^ j;
//	printf("i=%d  j=%d\n", i, j);
//
//	return 0;
//}