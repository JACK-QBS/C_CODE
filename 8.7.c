#define _CRT_SECURE_NO_WARNINGS 1 //�����������ȫ������
#include <stdio.h>//ͷ�ļ�   std-��׼  i-input���� o-output ���

//main�����ǳ�������
//��һ��������main��������ֻ��һ��

int main() {   //int ��Ϊ����ֵ����  �����Ų���    {}������
	int num = 10;//����һ�����α�����num���Ҹ�ֵ0
	scanf("%d",&num );//����һ������
	//%d ��������������
	printf("hellow bit \n");//print function ��ӡ  �⺯��
	printf("%d\n",num);
	printf("%d\n", sizeof(char));//sizeof(����) �������ʹ������������ٿռ�Ĵ�С
	return 0;  //��Ӧint ����
}