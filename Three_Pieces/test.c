#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*********************\n");
	printf("*****   1.play  *****\n");
	printf("*****   0.exit  *****\n");
	printf("*********************\n");
}

void game()
{
	char ret = 0; //??Ϸ״̬
	char board[ROW][COL];
	//??ʼ??????Ϊ?ո?
	InitBoard(board, ROW, COL);
	//??ӡ????
	DisplayBoard(board, ROW, COL);
	while (1)
	{	
		//player
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//?ж???Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		system("cls");

		//??????
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("????ʤ??\n");
		
	}
	else if (ret == '#')
	{
		printf("????ʤ??\n");
		
	}
	else
	{
		printf("ƽ??\n");
		
	}
	
}

int main()
{
	srand((unsigned int)time(NULL));

	int input = 0;
	do
	{
		menu();
		printf("??ѡ??>>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("?˳???Ϸ\n");
			break;
		default:
			printf("ѡ????????????ѡ??\n");
			system("cls");
			break;
		}
	} while (input);

	return 0;
}