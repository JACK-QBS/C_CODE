#include"game.h"

void menu()
{
	printf("******* 1 ******\n");
	printf("******* 0 ******\n");
}
void game()
{
	//����ɨ�׵Ĺ���
	//1��������(���)
	//2��ɨ��
	char mine[ROWS][COLS] = {0};//��Ų��úõ��� '0'
	char show[ROWS][COLS] = {0};//����Ų�������׵���Ϣ '*'
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS, '0');
	//���úõ��ײ�Ӧ�����״�ӡ
	//DisplayBoard(mine,ROW,COL);
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//2��ɨ��
	FindMine(mine,show,ROW,COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//������������������
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();//ɨ����Ϸ
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
