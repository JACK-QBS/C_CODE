
#include "game.h"

int main()
{
	int input = 0 ;
	srand((unsigned int)time(NULL));//给出随机数值
	printf("****三子棋游戏****\n");
	printf("玩家执子：*；电脑执子：#\n");
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束。\n");
			break;
		default:
			printf("输入错误,请重新输入！！！\n\n");
			break;
		}
	} while (input);
	return 0;
}


