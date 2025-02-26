#include "SaoLei_Game.h"

void Menu()
{
	do
	{
		printf("****************\n");
		printf("****开始游戏****\n");
		printf("****结束游戏****\n");
		printf("****************\n");
		printf("请输入1开始游戏或者输入其他结束游戏：");
		int Input = 0;
		scanf("%d", &Input);
		if (Input == 1)
		{
			printf("游戏开始\n");
			Game();
		}
		else
		{
			printf("游戏结束\n");
			break;
		}
	} while (1);
	return;
}

void Game()
{
	char Num[Rows][Cols] = { '0' };
	char Lei[Rows][Cols] = { '0' };
	//初始化显示棋盘
	InitialGame(Num, Rows, Cols, '*');
	//初始化存雷棋盘
	InitialGame(Lei, Rows, Cols, '0');

	//打印显示
	Print(Lei, Row, Col);
	Print(Num, Row, Col);

	//排查雷
	FindLei(Lei, Num, Row, Col, LeiCount);

	//
	//设置雷
	//SetLei(Lei, Row, Col, LeiCount);
}

void InitialGame(char TempArr[Rows][Cols], int TempRows, int TempCols, char Set)
{
	for (int i = 0; i < TempRows; i++)
	{
		for (int j = 0; j < TempCols; j++)
		{
			TempArr[i][j] = Set;
		}
	}
	return;
}

void Print(char TempArr[Rows][Cols], int TempRow, int TempCol)
{
	for (int i = 0; i <= TempRow; i++)
	{
		if (i == 0)
			printf("%d  ", i);
		else
			printf("%d ", i);
	}
	printf("\n\n");
	for (int i = 1; i <= TempRow; i++)
	{
		printf("%d  ", i);
		for (int j = 1; j <= TempCol; j++)
		{
			printf("%c ", TempArr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	return;
}

void PrintData(int x)
{
	printf("已用步数：%d   已用时间：\n", x);
}

void SetLei(char TempArr[Rows][Cols], int TempRow, int TempCol, int LeiNum, int Tempx, int Tempy)
{
	int TempCount = LeiNum;
	while (TempCount)
	{
		int x = rand() % TempRow + 1;
		int y = rand() % TempCol + 1;
		if ((!(x == Tempx && y == Tempy)) && TempArr[x][y] != '1')
		{
			TempArr[x][y] = '1';
			TempCount--;
		}
	}
	return;
}

void FindLei(char TempArrLei[Rows][Cols], char TempArrNum[Rows][Cols], int TempRow, int TempCol, int TempCount)
{
	int x = 0;
	int y = 0;
	int input = 1;
	int win = 0;
	int num = 0;
	int start = 0;
	while (win < (TempRow * TempCol - TempCount))
	{
		int switchmode = 1;
		if (start == 1)
		{
			printf("排查雷请选1，标记雷请选0：");
			scanf("%d", &switchmode);
		}
		switch (switchmode)
		{
		case 1:
			printf("请输入要排查的坐标：");
			scanf("%d %d", &x, &y);
			if ((x >= 1 & x <= TempRow) && (y >= 1 && y <= TempCol) && (TempArrNum[x][y] == '*'))
			{
				start = 1;
				num++;
				if (input)
				{
					SetLei(TempArrLei, Row, Col, LeiCount, x, y);
					input = 0;
				}
				if (TempArrLei[x][y] != '1')
				{
					system("cls");
					TempArrNum[x][y] = GetLeiCount(TempArrLei, TempRow, TempCol, x, y) + '0';
					Print(TempArrLei, Row, Col);
					PrintData(num);
					Print(TempArrNum, Row, Col);
					win++;
				}
				else
				{
					system("cls");
					printf("你被炸死了\n");
					PrintData(num);
					Print(TempArrLei, Row, Col);
					return;
				}
			}
			else
			{
				printf("输入坐标错误，请重新输入\n");
			}
			if (win == (TempRow * TempCol - TempCount))
			{
				system("cls");
				printf("恭喜你排雷成功\n");
				PrintData(num);
				Print(TempArrLei, Row, Col);
			}
			break;
		case 0:
			MarkLei(TempArrNum, TempRow, TempCol);
			system("cls");
			Print(TempArrLei, Row, Col);
			PrintData(num);
			Print(TempArrNum, Row, Col);
			break;
		default:
			printf("请选择正确的模式\n");
			break;
		}
	}
	return;
}

int GetLeiCount(char TempArr[Rows][Cols], int TempRow, int TempCol, int TempX, int TempY)
{
	int count = 0;
	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{
			count += (TempArr[TempX + i][TempY + j] - '0');
		}
	}
	return count;
}

void MarkLei(char TempArrNum[Rows][Cols], int TempRow, int TempCol)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入要标记的坐标值：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= TempRow && y >= 1 && y <= TempCol && TempArrNum[x][y] == '*')
		{
			TempArrNum[x][y] = '@';
			break;
		}
		else
		{
			printf("输入的坐标值错误\n");
		}
	}
	return;
}