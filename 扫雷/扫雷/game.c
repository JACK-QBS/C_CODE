#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			board[rows][cols] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("----------------------\n");
	//�кŵĴ�ӡ
	for (i = 0;i <= col;i++)
	{
		printf("%d", i);
	}
	printf("\n");
	for (i = 0;i < row;i++)
	{
		printf("%d", i);//�к�
		for (j = 0;j < col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	//1����������겼����
	//���ö��ٸ���
	int count = 10;
	while (count)
	{
		//�ɹ�����һ����,count--
		//1�������������
		int x = rand()%row+1;//1-9
		int y = rand()%col+1;//1-9
		//2��������
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}

	}
}
GetMineCount(char mine[ROWS][COLS],int x,int y)
{
	mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1]
		+ mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
    
}
//ɨ����Ϸ��ν���
//1��ը����
//2�������Ų������в����׵�λ��
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (1)
	{
		printf("�������Ų�����꣺");
		scanf("%d%d", &x,&y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�ж�x,y�����Ƿ�����
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				//ͳ����ΧһȦ�м�����
				int count = GetMineCount(mine,x,y);
				show[x][y]=count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		printf("����Ƿ�\n");
	}
	if (win == ROW * COL - 10)
	{
		printf("��ϲ�㣬ɨ�׳ɹ�\n");
	}
}