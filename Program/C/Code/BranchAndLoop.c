#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>


//if语句
//int main()
//{
//	//18 45 60 89 90
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("这个人是少年");
//	else if (age <= 45)
//		printf("这个人是青年");
//	else if (age <= 60)
//		printf("这个人是中年");
//	else if (age <= 89)
//		printf("这个人是老年");
//	else
//		printf("这个人是老寿星");
//	//else只会与最近的if匹配，同时if else算作一条语句，所以下面既不会打印haha，也不会打印hehe
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		//;加个分号就破掉了
//	if (b == 2)
//		printf("hehe");
//	else
//		printf("haha");
//	//所以这样写
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe");
//		else
//			printf("haha");
//	}
//	else
//	{
//		printf("hello");
//	}
//
//	return 0;
//}

//逻辑运算符

//int main()
//{
//	//不能连用
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	a = 5;
//	b = 3;
//	c = 4;
//	if (a < b < c)//具体逻辑是：a<b为假，结果为0,0<c，所以连用的结果为真
//		printf("%s\n","hehe");
//	c = -1;
//	if (a < b < c)//将c改为-1则为假了
//		printf("%s\n", "hehe1");
//	else
//		printf("%s\n","haha");
//
//	//三目操作符
//	a = 0;
//	b = 2;
//	c = 3;
//	int d = (!a) ? (b-c) : (b+c);
//	printf("%d\n",d);
//
//	//求最大值
//	scanf("%d %d",&a,&b);
//	if (a > b)
//		printf("a的值为%d，比较大\n",a);
//	else
//		printf("b的值为%d，比较大\n", b);
//
//	//判断是否为闰年 能被4整除但是不能被100整除，或者可以被400整除
//	int year = 0;
//	scanf("%d",&year);
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		printf("%d是闰年\n",year);
//	else
//		printf("%d不是闰年\n", year);
//
//	//短路,如果与左侧有不符合条件的就不执行后面的，或如果左侧为真，则不执行后面的
//	a = 1;
//	b = -1;
//	c = 2;
//	int i = a++ && ++b && c++;
//	printf("%d %d %d %d",i,a,b,c);
//	return 0;
//}

//switch

//int main()
//{
//	//输入0~5显示工作日，6~7显示休息日
//	int a = 0;
//	scanf("%d",&a);
//	switch (a)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("星期%d是工作日", a);
//		break;
//	case 6:
//	case 7:
//		printf("星期%d是休息日", a);
//		break;
//	default:
//		printf("请输入正确的数字");
//		break;//default也要加break
//	}
//	return 0;
//}

//while


//int main()
//{
//	int i = 0;
//	while (i<=10)
//	{
//		printf("%d ", i++);
//		if (i == 11)
//			printf("\n");
//	}
//	i = 0;
//	while (i <= 10)
//	{
//		printf("%d ", ++i);
//	}
//
//	//逆序打印
//	int num = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		printf("%d", num % 10);
//		num /= 10;
//
//	}
//
//	return 0;
//}

//能被3整除的和


//int main()
//{
//	int sum = 0;
//	for (int i = 3; i <= 10; i += 3)
//	{
//		sum += i;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//判断是几位数


//int main()
//{
//	
//	int i = 0;
//	int num = 0;
//	scanf("%d",&num);
//	do
//	{
//		i++;
//		num /= 10;
//	}
//	while (num);
//	printf("%d",i);
//	return 0;
//}

//break,continue关键字


//int main()
//{
//	for (int i = 0; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			printf("hh\n");
//			break;
//		}
//		printf("%d ",i);
//	}
//	for (int i = 0; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		if (i == 10)
//			printf("\n");
//	}
//	int i = -1;
//	while (i < 10)
//	{
//		i++;//如果放到continue后面会造成死循环
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//goto用在跳出循环嵌套


//int main()
//{
//		for (int i = 0; i <= 3; i++)
//		{
//			printf("%d\n",i);
//			for (int j = 0; j <= 3; j++)
//			{
//				for (int k = 0; k <= 3; k++)
//				{
//					for (int l = 0; l <= 3; l++)
//					{
//						printf("%d\n", l);
//						if (l == 1)
//							goto end;
//					}
//				}
//			}
//		}
//	end:
//		printf("循环结束");
//	return 0;
//}

//判断素数,比如整数a，只能被1和a整除

void GetPriNum1(int a)
{
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			printf("a不是素数\n");
			goto end;
		}
	}
	printf("a是素数\n");
end:;
}

void GetPriNum2(int a)
{
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			return;
		}
	}
	printf("%d ",a);
}

void PrefGetPriNum(int a)
{
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
		{
			return;
		}
	}
	printf("%d ", a);
}

void PrintPriNum()
{
	int Min = 0;
	int Max = 0;
	scanf("%d %d", &Min,&Max);
	for (int i = Min; i <= Max; i++)
	{
		GetPriNum2(i);
	}
}

void PrefPrintPriNum()
{
	int Min = 0;
	int Max = 0;
	scanf("%d %d", &Min, &Max);
	if (Min%2==0)
	{
		Min++;
	}
	for (int i = Min; i <= Max; i+=2)//偶数不可能是素数，优化一
	{
		if (i > Max)
		{
			return;
		}
		PrefGetPriNum(i);
	}

}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	GetPriNum1(a);
//
//	////打印100~200之间的素数
//	PrintPriNum();
//	printf("\n");
//	////求素数优化
//	PrefPrintPriNum();
//
//	return 0;
//}

//猜数字游戏


void Menu()
{
	printf("***********Play***********\n");
	printf("***********Quit***********\n");
}
void PlayGame(int LocalrandNum)
{
	int input = 0;
	int anwser = 1;
	while(anwser)
	{
		printf("请输入您猜的数值：");
		scanf("%d",&input);
		if (input==LocalrandNum)
		{
			printf("恭喜你猜对了\n");
			anwser = 0;
		}
		else if (input < LocalrandNum)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜大了\n");
		}
	}
}
#include <math.h>
//int main()
//{
//	int start = 1;
//	int play = 0;
//	srand((unsigned int)time(NULL));//用时间设置随机种子
//	int randNum = rand()%100+1;
//	while (start)
//	{
//		Menu();
//		scanf("%d",&play);
//		switch (play)
//		{
//		case 0:
//			printf("结束游戏\n");
//			start = 0;
//			break;
//		case 1:
//			PlayGame(randNum);
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	}
//	return 0;
//}

//关机



#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char input [20] = "0";
//	system("shutdown -s -t 120");
//again:
//	printf("请输入：helloworld，否则将会在120秒后关机");
//	scanf("%s",input);
//	if (strcmp("helloworld", input) == 0)//strcmp比较字符串，相等返回值为0
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		//system("shutdown -a");
//		goto again;
//	}
//
//	return 0;
//}