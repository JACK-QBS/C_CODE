#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//全局变量，方便修改后期棋盘的大小
#define COL 3//列
#define ROW 3//行

#define COUNT 3

void menu(void);
void game(void);
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col, int arr[]);
void ComMove(char board[ROW][COL], int row, int col, int arr[]);
char Winner(char board[ROW][COL], int row, int col, int arr[]);
int IsFull(char board[ROW][COL], int row, int col);

