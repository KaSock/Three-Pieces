#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//符号的定义
#define ROW 3
#define COL  3

//函数说明 初始化
void InitBoard(char board[ROW][COL], int row, int col);

void DisplayBoard(char board[ROW][COL], int row, int col);

//playerMove
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑走
void ComputerMove(char board[ROW][COL], int row, int col);

//判断游戏状态
char IsWin(char board[ROW][COL], int row, int col);