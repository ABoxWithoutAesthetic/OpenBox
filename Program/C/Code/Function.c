#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>

//����ʱ����ʵ�κ��βε���ֵ�͵�ַ�仯

int Add1(int x, int y)
{
	return x + y;
}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	int c = Add1(a,b);
//	printf("%d\n",c);
//	return 0;
//}

//һά����Ͷ�ά������Ϊ����ʱ����ֵ�͵�ַ�仯,��������ʱ���鿴��ַ����Ҫ&����

void SetArr(int arr3[],int arr4[][5],int arr1Size3,int arr2RowSize4, int arr2ColSize4)
{
	for (int i = 0; i < arr1Size3; i++)
	{
		arr3[i] = 1;
		for (int j = 0; j < arr2ColSize4; j++)
		{
			arr4[i][j] = 3;
		}
	}
	return;
}
void printArr(int arr3[], int arr4[][5], int arr1Size3, int arr2RowSize4, int arr2ColSize4)
{
	for (int i = 0; i < arr1Size3; i++)
	{
		printf("%d ",arr3[i]);
		
	}
	printf("\n");
	for (int i = 0; i < arr1Size3; i++)
	{
		for (int j = 0; j < arr2ColSize4; j++)
		{
			printf("%d ", arr4[i][j]);
		}
		printf("\n");
	}
	return;
}
//int main()
//{
//	int arr1[3] = {0};
//	int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
//	int arr2[3][5] = { 0 };
//	int arr2RowSize = 3;
//	int arr2ColSize = 5;
//	SetArr(arr1,arr2,arr1Size,arr2RowSize,arr2ColSize);
//	printArr(arr1, arr2, arr1Size, arr2RowSize, arr2ColSize);
//	return 0;
//}

//Ƕ�׵��ã�ȷ��������Ϊ������

bool IsLeapYear(int tempyear)
{
	if ((tempyear % 4 == 0 && tempyear % 100 != 0) || tempyear % 400 == 0)
		return true;
	else
		return false;
}

int howdays(int tempyear, int tempmonth)
{
	int monthdays[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (tempmonth == 2 && IsLeapYear(tempyear))
		return 29;
	else
		return monthdays[tempmonth];
	

}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	printf("���������£�");
//	scanf("%d%*c%d",&year,&month);
//	int day = howdays(year, month);
//	printf("%d��%d����%d��",year,month,day);
//	return 0;
//}

//��ʽ����

//int main()
//{
//	printf("%d", printf("%d", printf("433")));//433 3 1
//	return 0;
//}

//���ļ������붨��

#include "Function_ADD.h"

//int main()
//{
//	int a = 20;
//	int b = 30;
//	printf("%d",Add(a,b));
//	return 0;
//}

//static��exten

extern int c;
extern int d;//��Ϊ��static����������extern��Ч
int Add2(int tempi)
{
	static int a = 0;
	int b = 0;
	a += tempi;
	b += tempi;
	return a;
}
//int main()
//{
//	printf("%d\n", c);
//	//printf("%d", d);
//	for (int i = 0; i <= 10; i++)
//	{
//		printf("%d ", Add2(i));
//	}
//	return 0;
//}