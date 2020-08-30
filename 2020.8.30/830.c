
#include "game.h"

void menu()
{
	printf("******************************\n");
	printf("*******   1. play      *******\n");
	printf("*******   0. exit      *******\n");
	printf("******************************\n");
}

void game()
{
	//���һ����������Ϸ
	//�洢���ݵ�
	char board[ROW][COL] = { 0 };//����Ӧ�ó�ʼ��Ϊ�ո�
	InitBoard(board, ROW, COL);//��ʼ������ - �ո�
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	result(board, ROW, COL);
	//����Ϸ��Ĺ�����
	//1. ���Ӯ
	//2. ����Ӯ
	//3. ƽ����
	//4. ����

	while (1)
	{
		PlayerMove(board, ROW, COL);
		//�ж���Ӯ
		DisplayBoard(board, ROW, COL);

		ComputerMove(board, ROW, COL);
		//�ж���Ӯ
		DisplayBoard(board, ROW, COL);
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}

