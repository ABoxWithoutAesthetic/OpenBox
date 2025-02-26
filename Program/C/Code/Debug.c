#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//求阶乘的和

//int main()
//{
//	int n = 0;
//	printf("请输入：");
//	scanf("%d",&n);
//	int sum = 0;
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

// 下面代码就是错误的，因为ret每次循环的时候没有重置

//int main() 
//{ 
//int n = 0; 
//int i = 1; 
//int sum = 0; 
//int ret = 1;
//for (n = 1; n <= 3; n++) 
//{ 
//	for (i = 1; i <= n; i++) 
//	{ 
//		ret *= i; 
//	} 
//	sum += ret; 
//} 
//printf("%d\n", sum); 
//return 0; 
//}

//调试断点，跳转到指定条件

//int main()
//{
//	int a = 0;
//	for (int i = 0; i <= 10; i++)
//	{
//		a = i;
//		printf("%d",a);
//	}
//	return 0;
//}

//观察数组内存

//int main()
//{
//	int arr1[10] = {0};
//	for (int i = 0; i <= 10; i++)
//	{
//		arr1[i] = i;
//	}
//	return 0;
//}

//在VS2022、X86、Debug的环境下，编译器不做任何优化的话，下⾯代码执⾏的结果是啥

//int main()
//{
//	int i = 0;
//	int arr1[10] = {0,1,2,3,4,5,6,7,8,9};
//	for (i = 0; i <= 12; i++)
//	{
//		arr1[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}