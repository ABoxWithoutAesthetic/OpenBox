#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
//�������̵Ĵ�С
#define Row 9
#define Col 9
#define Rows Row+2
#define Cols Col+2
#define LeiCount 10

//ʹ��ö�ٶ������̵Ĵ�С

int size1 = 9;
int size2 = 16;
int size3 = 25;
int* p = &size1;

//��Ϸ�߼�
void Game();

//��ʼ������
void InitialGame(char TempArr[Rows][Cols], int TempRows, int TempCols, char Set);

//��ӡ����
void Print(char TempArr[Rows][Cols], int TempRow, int TempCol);

//��ӡ����
void PrintData(int x);

//������
void SetLei(char TempArr[Rows][Cols], int TempRow, int TempCol, int LeiNum, int Tempx, int Tempy);

//�Ų���
void FindLei(char TempArrLei[Rows][Cols], char TempArrNum[Rows][Cols], int TempRow, int TempCol, int TempCount);

//��ʾ�׵�����
int GetLeiCount(char TempArr[Rows][Cols], int TempRow, int TempCol, int TempX, int TempY);

//�����
void MarkLei(char TempArrNum[Rows][Cols], int TempRow, int TempCol);