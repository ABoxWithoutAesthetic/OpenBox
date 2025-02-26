#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
//一维数组

//int main()
//{
//	int testArray[20] = {1};//第一个元素初始化为1，其余默认初始化为0
//	printf("%d\n",sizeof(testArray));//sizeof计算的是字节的长度，而不是数组的长度
//	int arrLength = sizeof(testArray) / sizeof(testArray[0]);
//	printf("%d\n", arrLength);
//	for (int i = 0; i<arrLength; i++)
//	{
//		printf("%d\n",testArray[i]);
//	}
//	return 0;
//}

//二维数组

//初始化

//int main()
//{
//	
//	int arr1[3][5] = {0};//完全不初始化
//	int arr2[3][5] = { 0,1,2 };//部分初始化
//	int arr3[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};//完全初始化
//	int arr4[3][5] = {{1,2},{3,4},{5,6}};//按照行的不完全初始化
//	for (int i = 0; i<3; i++)
//	{
//		for (int j = 0; j<5; j++)
//		{
//			printf("%d ",arr4[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//输入输出

//int main()
//{
//	int arr1[3][5] = { 0 };
//	//输入时可以连续输入
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			scanf("%d",&arr1[i][j]);
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//	}
//	return 0;
//}

//内存存储情况,根据打印的情况可以看出是连续存放的

//int main()
//{
//	int arr[3][5] = {0};
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%p\n",&arr[i][j]);
//		}
//	}
//	return 0;
//}

//多个字符从两端移动，向中间汇聚


//int main()
//{
//	char arr1[] = "***********";//逐渐变成helloworld
//	char arr2[] = "helloworldq";
//	int arrSize = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	int right = arrSize-2;
//	while(left<=right)
//	{
//		arr1[left] = arr2[left];
//		left++;
//		arr1[right] = arr2[right];
//		right--;
//		for (int i = 0 ; i < arrSize ; i++)
//		{
//			printf("%c",arr1[i]);
//		}
//		printf("\n");
//		Sleep(1000);
//		system("cls");
//	}
//	return 0;
//}

//二分法寻数

//int main()
//{
//	int arr1[10] = { 0 };
//	int arrSize = sizeof(arr1) / sizeof(arr1[0]);
//	for (int i = 0 ; i < arrSize ; i++)
//	{
//		arr1[i] = i+1;
//	}
//
//	int num = 0;
//	scanf("%d",&num);
//
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0])-2;
//	int mid = 0;
//	int key = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (num > arr1[mid])
//		{
//			left = mid+1;
//		}
//		else if (num < arr1[mid])
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("找到了,下标为%d",mid);
//			key = 1;
//			break;
//		}
//	}
//	if (!key)
//	{
//		printf("%d不在范围内",num);
//	}
//	return 0;
//}
