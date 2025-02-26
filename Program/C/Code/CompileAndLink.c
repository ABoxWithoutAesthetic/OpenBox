#include <stdio.h>
#include <stdlib.h>
//预处理

//C语言设置的符号

//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	//printf("%s\n", __STDC__);
//	char arr[20] = { 0 };
//	return 0;
//}

//#define定义注意事项

//定义常量
#define M 1000
//定义标识符
#define uint unsigned int
//定义for循环
#define forever for(;;)
//加分号
#define Pri printf("hehe");
//续行符
#define Debug_Print printf("%s\n%d\n%s\n%s",\
							__FILE__,__LINE__,\
							__DATE__,__TIME__)

//int main()
//{
//	printf("%d\n", M);
//	uint a = 10;
//	//forever//for循环中的判断条件为空时，默认为真，死循环
//	//{
//	//printf("hehe");
//	//}
//		//if (1)
//		//	Pri;
//		//else//加了分号所以else的上一句是空语句，识别不到if了
//	Debug_Print;
//	return 0;
//}

//定义宏的注意事项

#define MUL(a) ((a)*(a))
#define COMPARE(A,B) ((A++)>(B++)?(A++):(B++))
//int main()
//{
//	int a = MUL(10);
//	int b = MUL(5 + 1);
//	int c = MUL(a++);
//	float d = MUL(0.6f);
//	int e = MUL(MUL(5));//不会出现递归
//	printf("%d %d %d %f %d %d\n", a, b, c, d, e);
//	int f = 4;
//	int g = 6;
//	int h = COMPARE(f, g);
//	printf("%d %d %d\n", f, g, h);
//	return 0;
//}

//宏传递类型

#define MALLOC(num,type) ((type*)malloc(sizeof(type)*(num)))

//int main()
//{
//	char* a = MALLOC(10, char);
//	int* b = MALLOC(10, int);
//	return 0;
//}

//#和##和移除宏定义
//#define PRINT_INT(name,type) printf(""#name"=%"#type"\n",(name))
//
//#define COMPARE_NUM(TYPE) TYPE Compare_##TYPE(TYPE A,TYPE B)\
//											{\
//												if (A > B)\
//												{\
//													return A;\
//												}\
//												else\
//												{\
//													return B;\
//												}\
//											}
//
//COMPARE_NUM(int)
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	float d = 4.34f;
//	PRINT_INT(a, d);
//	PRINT_INT(b, d);
//	PRINT_INT(c, d);
//	PRINT_INT(d, .2f);
//	int e = Compare_int(3 + 2, 4);
//	PRINT_INT(e, d);
//	//#undef PRINT_INT
//	PRINT_INT(e, d);
//}

//条件编译

#define __DEBUG__
#define CONSTANT 1

//int main()
//{
//	int a[10] = { 0 };
//
//	for (int i = 0; i < 10; i++)
//	{
//		a[i] = i;
//		//通过符号1是否被定义判断
//#ifdef __DEBUG__
//		printf("ifdef=%d ", a[i]);
//#endif
//		//通过符号2是否被定义判断
//#if defined(__DEBUG__)
//		printf("define(__DEBUG__)=%d ", a[i]);
//#endif
//
//		//通过常量值是否为真判断
//#if CONSTANT
//		printf("if=%d ", a[i]);
//#endif
//
//		printf("\n");
//	}
//	return 0;
//}

//定义分支

#define A 0

//int main()
//{
//#if A
//	printf("A\n");
//#elif !A
//	printf("B\n");
//#endif
//	return 0;
//}

//定义嵌套

#define AA 0
//#define __AA__

//int main()
//{
//#if AA
//	{
//#ifdef __AA__
//		{
//			printf("ifdef");
//		}
//#endif
//#ifndef __AA__
//		{
//			printf("if ifndef");
//		}
//#endif
//	}
//#elif !AA
//	printf("elif");
//
//#endif
//	return 0;
//}

//头文件避免重复引用1

#pragma once

//头文件避免重复引用2
#ifndef MM
#define MM

//头文件内容

#endif