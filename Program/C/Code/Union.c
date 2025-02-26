#include <stdio.h>

//联合体创建

//union Un
//{
//	int a;
//	char b;
//};
//
//int main()
//{
//	union Un Un1 = { 'c' };
//	printf("%d %c\n", Un1.a, Un1.b);
//	Un1.a = 97;
//	printf("%d %c\n",Un1.a, Un1.b);
//	Un1.b = 'b';
//	printf("%d %c\n", Un1.a, Un1.b);
//	printf("%zd\n", sizeof(Un1));
//	return 0;
//}




//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	//联合变量的定义
//	union Un un = { 0 };
//	// 下⾯输出的结果是⼀样的吗？
//	printf("%p\n", &(un.i));
//	printf("%p\n", &(un.c));
//	printf("%p\n", &un);
//	//结果是一样的
//	return 0;
//}


//修改时的小端存放


//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	//联合变量的定义
//	union Un un = { 0 };
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);
//	//证明是小端存放结果为0x11223355
//	return 0;
//}



//与结构体对比

//struct S
//{
//	char c;
//	int i;
//};
//struct S s = { 0 };
//
//union Un
//{
// char c;
// int i;
//};
//union Un un = { 0 };
//
//int main()
//{
//	struct S s1 = { 0 };
//	union Un Un1 = { 0 };
//	printf("%zd\n",sizeof(s1));//8
//	printf("%zd\n", sizeof(Un1));//4
//	return 0;
//}


//联合体大小（对齐）

//union Un1
//{
//	char c[5];
//	int i;
//};
//union Un2
//{
//	short c[7];
//	long long int i[3];
//};
//int main()
//{
//	//下⾯输出的结果是什么？
//	printf("%d\n", sizeof(union Un1));//8
//	printf("%d\n", sizeof(union Un2));//24
//	return 0;
//}

//联合体应用（节省空间）

//每⼀种商品都有：A、B、C和D相关的其他信息。
//图书：E、F、G
//杯⼦：H
//衬衫：I、G、K




//struct Product1
//{
//	char a;
//	char b;
//	char c;
//	char d;
//	char e;
//	char f;
//	char g;
//	char h;
//	char i;
//	char j;
//	char k;
//};
//struct Product2
//{
//	char a;
//	char b;
//	char c;
//	char d;
//	union Special
//	{
//		struct book
//		{
//			char e;
//			char f;
//			char g;
//		};
//		struct beizi
//		{
//			char h;
//		};
//		struct chenshan
//		{
//			char i;
//			char j;
//			char k;
//		};
//
//	};
//};
//
//
//int main()
//{
//	printf("%zd\n",sizeof(struct Product1));
//	printf("%zd\n", sizeof(struct Product2));
//	return 0;
//}