#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

//数据类型、取值范围
//int main()
//{
//	//字符型
//	printf("char\n");
//	char zifu ='a';
//	printf("%zd\n", sizeof(zifu));
//
//	//整型
//	printf("int\n");
//	int a1=0;
//	short int a2;
//	long int a3;
//	long long int a4;
//	printf("%zd\n",sizeof(a1));
//	printf("%zd\n", sizeof(a2));
//	printf("%zd\n", sizeof(a3));
//	printf("%zd\n", sizeof(a4));
//
//	//浮点型
//	printf("float\n");
//	float b1;
//	double b2;
//	long double b3;
//	printf("%zd\n", sizeof(b1));
//	printf("%zd\n", sizeof(b2));
//	printf("%zd\n", sizeof(b3));
//
//	//布尔
//	printf("bool\n");
//	bool c1 = true;
//	printf("%zd\n", sizeof(c1));
//
//	//sizeof：后面是变量或者表达式时可以不用括号，
//	printf("sizeof\n");
//	printf("%zd\n",sizeof(a1));
//	printf("%zd\n", sizeof a1);
//	printf("%zd\n", sizeof(int));
//	//printf("%zd\n", sizeof int);
//	printf("%zd\n", sizeof(a1 = 5 + 1));
//	printf("%d\n", a1);
//
//	//signed与unsigned，看头文件limits.h的定义
//	//整型中默认为带负号的
//	int d1;
//	signed int d2;
//	//字符型看编辑器
//	char e1;
//	//signed char e1;//范围是-128~127
//	unsigned char e2;//范围是0~255
//	//%u为打印无符号整型
//	unsigned int f1 = 100;
//	f1 = 200;
//	//f1 = -200;//如果给无符号赋负值，打印时打印无符号则会出错
//	printf("%u\n",f1);
//	return 0;
//}

//变量的创建
//int d = 1000;//整个工程都有效的全局变量
//int main()
//{
//	//类型 命名 初始化
//	char aa = 'a';
//	int a = 0;
//	float b = 3.14f;//如果不加后缀f，为double类型
//	double c = 3.14;
//	printf("%c\n",aa);
//	printf("%d\n", a);
//	printf("%f\n", b);
//	printf("%f\n", c);
//	int d = 10;
//	{
//		int d = 100;//和全局变量同名时，以局部变量为准
//		printf("%d\n",d);
//	}
//	return 0;
//}

//运算符
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = a + b;
//	printf("%d\n",c);
//	c = a - b;
//	printf("%d\n", c);
//	c = a * b;
//	printf("%d\n", c);
//	c = a / b;
//	printf("%d\n", c);//整数相除，只保留整数，若要小数结果，两个整数需要一个是浮点数
//	printf("%f\n", 20.0 / 13);
//
//	printf("%d\n",30%13);//只能整数之间进行求余
//	//求余，结果的负号根据左运算数的负号
//	printf("%d\n",30%8);
//	printf("%d\n", -30 % 8);
//	printf("%d\n", 30 % -8);
//	printf("%d\n", -30 % -8);
//
//	//复合运算符
//	a += b;
//	printf("%d\n",a);
//
//	//单目运算符
//	a = 10;
//	printf("%d\n",a++);//先使用后++
//	a = 10;
//	printf("%d\n",++a);//先++后使用
//	a = -10;
//	printf("%d\n", +a);//+不影响结果
//	printf("%d\n", -a);//负负得正
//	int e = (int)3.14;//强制类型转换
//	printf("%d\n", e);
//	return 0;
//}

//printf
//int main()
//{
//	//占位符
//	printf("%d\n",100);
//	//多个占位符
//	printf("this is %s.\n","tony");
//	printf("this is %s,his age is %d,his code is %c.\n", "tony",100,'a');
//	//限定最小宽度,只有不够最小宽度时才会补空格
//	printf("%5dS\n",100);//左对齐
//	printf("%-5dS\n", 100);//右对齐
//	//整数部分+小数点+小数部分的总长度,12为总长度，.1为小数点位数
//	printf("%s\n","123456789");
//	printf("%12.1f\n", 3.14);
//	printf("%*.*f\n", 12,1,3.14);//可以用*作为参数，在后面输入
//	printf("%.5s\n", "hello world");//.5限制字符串的输出长度
//	//总是显示符号，在前面加上+号
//	printf("%+d\n",100);
//	printf("%+d\n",-100);
//	return 0;
//}

//scanf
//int main()
//{
//	
//	//int a = 0;
//	//float b = 0.0f;
//	////⾃动过滤空⽩字符，包括空格、制表符、换⾏符
//	//int num=scanf("%d%f",&a,&b);
//	//printf("%d %d %f", num,a,b);
//	
//
//	
//	//第一次%d会停在.   然后%f继续从.开始，
//	//int x = 0;
//	//float y = 0.0f;
//	//scanf("%d%f",&x,&y);
//	//printf("%d %.10f",x,y);
//	
//
//	////scanf的返回值，如果第一个数是浮点数，那么直接读取到.就停止了，无法继续读取
//	//int a = 0;
//	//int b = 0;
//	//int c = 0;
//	//printf("请输入3个整数：");
//	//int num=scanf("%d %d%d",&a,&b,&c);
//	//printf("%d %d %d %d",num,a,b,c);
//	
//
//	//char a = 'a';
//	//scanf(" %c",&a);//%c识别空格，会从第一个空格读起，如果不想读取空格，则 %c
//	//printf("%c", a);
//
//	//char arr[11] = {'a'};
//	//scanf("%10s",arr);//arr为数组，不需要地址符号&,但是数组会越界，所以要提前规定好长度，并且%长度-1s
//	//printf("%s",arr);
//
//	//int year = 0;
//	//int month = 0;
//	//int day = 0;
//	////scanf("%d-%d-%d",&year,&month,&day);//这样只能输入2024-11-27
//	//scanf("%d%*c%d%*c%d", &year, &month, &day);//用%*c代替，这样可以随便输入2024-11-27，2024/11/27
//	//printf("%d %d %d",year,month,day);
//	//return 0;
//}

//int main()
//{
//	char a[10] = "abc";
//	scanf("%s",a);
//	printf("%s",a);
//	return 0;
//}
