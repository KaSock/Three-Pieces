#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//���ŵĶ���
#define ROW 3
#define COL  3

//����˵�� ��ʼ��
void InitBoard(char board[ROW][COL], int row, int col);

void DisplayBoard(char board[ROW][COL], int row, int col);

//playerMove
void PlayerMove(char board[ROW][COL], int row, int col);

//������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ϸ״̬
char IsWin(char board[ROW][COL], int row, int col);