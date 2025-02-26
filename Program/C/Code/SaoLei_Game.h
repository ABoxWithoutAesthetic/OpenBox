#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
//定义棋盘的大小
#define Row 9
#define Col 9
#define Rows Row+2
#define Cols Col+2
#define LeiCount 10

//使用枚举定义棋盘的大小

int size1 = 9;
int size2 = 16;
int size3 = 25;
int* p = &size1;

//游戏逻辑
void Game();

//初始化棋盘
void InitialGame(char TempArr[Rows][Cols], int TempRows, int TempCols, char Set);

//打印棋盘
void Print(char TempArr[Rows][Cols], int TempRow, int TempCol);

//打印数据
void PrintData(int x);

//设置雷
void SetLei(char TempArr[Rows][Cols], int TempRow, int TempCol, int LeiNum, int Tempx, int Tempy);

//排查雷
void FindLei(char TempArrLei[Rows][Cols], char TempArrNum[Rows][Cols], int TempRow, int TempCol, int TempCount);

//显示雷的数字
int GetLeiCount(char TempArr[Rows][Cols], int TempRow, int TempCol, int TempX, int TempY);

//标记雷
void MarkLei(char TempArrNum[Rows][Cols], int TempRow, int TempCol);