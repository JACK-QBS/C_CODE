
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ����
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//��ӡ�ָ���
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����:>\n");

	while (1)
	{
		printf("����������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ�ã�����������\n");
			}
		}
		else
		{
			printf("����Ƿ�����������\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("������:>\n");//���

	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

char Winner(char board[ROW][COL], int row, int col, int arr[])
{
	int i;
	int j;
	int x = arr[0]; //���Ӻ������Ӧ����������±�
	int y = arr[1]; //�����������Ӧ����������±�
	int count[4] = { 1,1,1,1 }; //���ڽ����ĸ����������ӳ��ȵ�����

	//������
	//�����겻�䣬����������
	for (i = x + 1; i < row; i++)
	{
		if (board[i][y] == board[x][y] && board[x][y] != ' ')
		{
			(count[0])++;
		}
		else
		{
			break;
		}
	}
	//���Ҽ��
	for (i = x - 1; i >= 0; i--)
	{
		if (board[i][y] == board[x][y] && board[x][y] != ' ')
		{
			(count[0])++;
		}
		else
		{
			break;
		}
	}

	//���ϼ��
	for (j = y + 1; j < col; j++)
	{
		if (board[x][j] == board[x][y] && board[x][y] != ' ')
		{
			(count[1])++;
		}
		else
		{
			break;
		}
	}

	//���¼��
	for (j = y - 1; j >= 0; j--)
	{
		if (board[x][j] == board[x][y] && board[x][y] != ' ')
		{
			(count[1])++;
		}
		else
		{
			break;
		}
	}

	//�����ϼ��
	i = x + 1;
	j = y + 1;
	while (i < row && j < col)
	{
		if (board[i][j] == board[x][y] && board[x][y] != ' ')
		{
			(count[2])++;
			i++;
			j++;
		}
		else
		{
			break;
		}
	}
	//�����¼��
	i = x - 1;
	j = y - 1;
	while (i >= 0 && j >= 0)
	{
		if (board[i][j] == board[x][y] && board[x][y] != ' ')
		{
			(count[2])++;
			i--;
			j--;
		}
		else
		{
			break;
		}
	}

	//�����ϼ��
	i = x - 1;
	j = y + 1;
	while (i >= 0 && j < col)
	{
		if (board[i][j] == board[x][y] && board[x][y] != ' ')
		{
			(count[3])++;
			i--;
			j++;
		}
		else
		{
			break;
		}
	}

	//�����¼��
	i = x + 1;
	j = y - 1;
	while (i < row && j >= 0)
	{
		if (board[i][j] == board[x][y] && board[x][y] != ' ')
		{
			(count[3])++;
			i++;
			j--;
		}
		else
		{
			break;
		}
	}

	//���ⷽ��ļ���������COUNT���ͷ�������ʱ��Ӧ����
	for (i = 0; i < 4; i++)
	{
		if (count[i] >= COUNT)
		{
			return board[x][y];
		}
	}

	//�ж������Ƿ�����
	int ret = IsFull(board, ROW, COL);
	if (ret)
	{
		return 'E';
	}
	return 'C';
}

//�ж������Ƿ�������
int IsFull(char board[ROW][COL], int row, int col)
{
	int i;
	int j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < row; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}