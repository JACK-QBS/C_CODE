#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Search(int x,int arr[],int n)
{
	int left = 0;
	int right = n-1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (x == arr[mid])
			return mid;
		if (x > arr[mid])
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;//δ�ҵ�x
}
int main()
{
	int num = 0;
	int arr[] = {0,1,2,3,4,5,6,7,8,9,10};
	printf("������������ҵ����֣�   ");
	scanf("%d", &num);
	int temp = Search(num,arr,11);//11Ϊ���鳤��
	if (temp==-1)
		printf("�Ѹ��������Ҳ���x\n");
	else
		printf("���ҵ�x  �±��ǣ�%d\n", temp);
	return 0;
}

