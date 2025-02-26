#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//死递归

//int main()
//{
//	printf("hehe");
//	main();
//	return 0;
//}

//计算n的阶乘（不考虑溢出），n的阶乘就是1~n的数字累积相乘

//int GetNum(int x)
//{
//	int num = 0;
//	if (x > 0)
//	{
//		return x * GetNum(x - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int b = GetNum(a);
//	printf("%d\n",b);
//	return 0;
//}

//顺序打印⼀个整数的每⼀位

//void Print_Num(int a)
//{
//	if (a > 0)
//	{
//		Print_Num(a / 10);
//		printf("%d ", a % 10);
//	}
//	else
//	{
//		return;
//	}
//	
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	Print_Num(a);
//	return 0;
//}

//递归形式但并不适合用递归解算的斐波那契数
//Fib(n)=1                 n<=2
//		=Fib(n-1)+Fib(n-2) n>2
//这种规律并不适合递归，重复计算太多
//int count = 0;
//int Fib_Num(int a)
//{
//	if (a == 3)
//	{
//		count++;
//	}
//	if (a <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib_Num(a - 1) + Fib_Num(a - 2);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);//当输入a为40时，Fib(3)就要调用3900多万次
//	int b=Fib_Num(a);
//	printf("%d %d",b,count);
//	return 0;
//}


//反而用循环迭代的方式求斐波那契数更合适

//int GetFib(int a)
//{
//	int Fib1 = 1;
//	int Fib2= 1;
//	int Fib = 1;
//	while (a>2)
//	{
//		Fib = Fib1 + Fib2;
//		Fib1 = Fib2;
//		Fib2 = Fib;
//		a--;
//	}
//	return Fib;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int Fib = 0;
//	scanf("%d", &a);
//	Fib = GetFib(a);
//	printf("Fib(%d)=%d",a,Fib);
//	return 0;
//}


//青蛙跳台阶,本质上就是斐波那契数列
//int GetNum(int n)
//{
//	int Num = 1;
//	int Num1 = 1;
//	int Num2 = 1;
//	while (n > 1)
//	{
//		Num = Num1 + Num2;
//		Num1 = Num2;
//		Num2 = Num;
//		n--;
//	}
//	return Num;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	printf("青蛙跳%d阶台阶共有%d种跳法",n,GetNum(n));
//	return 0;
//}

//汉诺塔

int main()
{
	return 0;
}