#include "game.h"

void game()
{
	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0};
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(show,ROWS,COLS);
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine,ROW,COL);
	FindMine(mine,show,ROW,COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ�񣺡�");
		scanf_s("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}

void menu()
{
	printf("*************************\n");
	printf("***      1.play       ***\n");
	printf("*************************\n");
	printf("***      2.exit       ***\n");
	printf("*************************\n");
}


int main()
{
	test();
	return 0;
}