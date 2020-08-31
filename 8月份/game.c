
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
		//打印数据
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割行
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
	printf("玩家走:>\n");

	while (1)
	{
		printf("请输入坐标:>");
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
				printf("该坐标被占用，请重新输入\n");
			}
		}
		else
		{
			printf("坐标非法，请重输入\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走:>\n");//随机

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
	int x = arr[0]; //落子横坐标对应棋盘数组的下标
	int y = arr[1]; //落子纵坐标对应棋盘数组的下标
	int count[4] = { 1,1,1,1 }; //用于接收四个方向连续子长度的数组

	//向左检查
	//纵坐标不变，横坐标增加
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
	//向右检查
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

	//向上检查
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

	//向下检查
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

	//向右上检查
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
	//向左下检查
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

	//向左上检查
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

	//向右下检查
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

	//任意方向的计数器超过COUNT，就返回落子时对应的子
	for (i = 0; i < 4; i++)
	{
		if (count[i] >= COUNT)
		{
			return board[x][y];
		}
	}

	//判断棋盘是否下满
	int ret = IsFull(board, ROW, COL);
	if (ret)
	{
		return 'E';
	}
	return 'C';
}

//判断棋盘是否落满子
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