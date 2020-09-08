#include"game.h"

void menu()
{
	printf("******* 1 ******\n");
	printf("******* 0 ******\n");
}
void game()
{
	//真正扫雷的过程
	//1、布置雷(随机)
	//2、扫雷
	char mine[ROWS][COLS] = {0};//存放布置好的雷 '0'
	char show[ROWS][COLS] = {0};//存放排查出来的雷的信息 '*'
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS, '0');
	//布置好的雷不应该轻易打印
	//DisplayBoard(mine,ROW,COL);
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//2、扫雷
	FindMine(mine,show,ROW,COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//设置随机数的生产起点
	do
	{
		menu();
		printf("请选择");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();//扫雷游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误！\n");
			break;
		}
	} while (input);
	return 0;
}
