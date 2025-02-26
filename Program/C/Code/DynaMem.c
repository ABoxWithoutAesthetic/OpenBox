#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//malloc free

//int main()
//{
//	int a = 5;
//	int* p = (int*)malloc(a * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	for (int i = 0; i < a; i++)
//	{
//		p[i] = i;
//		printf("%d ", p[i]);
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//calloc

//int main()
//{
//	int a = 100000000000000;
//	int* p1 = &a;
//	int* p = calloc(a, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	for (int i = 0; i < a; i++)
//	{
//		p[i] = i;
//		printf("%d ", p[i]);
//	}
//	//free(p1);//释放非动态内存的指针会报错
//	perror("p1");
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc

//int main()
//{
//	int a = 10;
//	int* p = (int*)realloc(NULL, a * sizeof(int));
//	if (p == NULL)
//	{
//		perror("realloc1");
//		return 1;
//	}
//
//	a = 20;
//	int* temp = realloc(p, a * sizeof(int));
//	if (temp != NULL)
//	{
//		p = temp;
//		temp = NULL;
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//对NULL指针解引用

//void test1()
//{
//	int* p = (int*)malloc(10 * INT_MAX);
//	*p = 20;//如果p的值是NULL，就会有问题
//	free(p);
//}

//动态内存越界访问
void test2()
{
	int i = 0;
	int* p = (int*)malloc(10 * sizeof(int));
	if (NULL == p)
	{
		exit(EXIT_FAILURE);
	}
	for (i = 0; i <= 10; i++)
	{
		*(p + i) = i;//当i是10的时候越界访问
	}
	free(p);
}

//对⾮动态开辟内存使⽤free释放
void test3()
{
	int a = 10;
	int* p = &a;
	free(p);//ok?
}

//free动态内存的一部分
void test4()
{
	int* p = (int*)malloc(100);
	p++;
	free(p);//p不再指向动态内存的起始位置
}

//重复释放动态内存
void test5()
{
	int* p = (int*)malloc(100);
	free(p);
	p = NULL;//所以释放后一定要将指针设置为NULL
	free(p);//重复释放
}

//忘记释放动态内存
void test6()
{
	int* p = (int*)malloc(100);
	if (NULL != p)
	{
		*p = 20;
	}
	//free(p);
}
//int main()
//{
//	test6();
//	return 0;
//}

//笔试题1：请问运⾏Test00 函数会有什么样的结果？
void GetMemory00(char* p)
{
	p = (char*)malloc(100);
}
//void Test00(void)
//{
//	char* str = NULL;
//	GetMemory00(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//传值调用，str仍是空指针，后面会造成非法访问，并且会导致内存泄漏

//下面是正确的写法1
void GetMemory11(char** p)
{
	*p = (char*)malloc(100);
}
//void Test11(void)
//{
//	char* str = NULL;
//	GetMemory11(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}

//下面是正确的写法2
//char* GetMemory22()
//{
//	char* p = (char*)malloc(100);
//	return p;
//}
//void Test22(void)
//{
//	char* str = NULL;
//	str = GetMemory22();
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}

//笔试题2
char* GetMemory000(void)
{
	char p[] = "hello world";
	return p;
}
void Test000(void)
{
	char* str = NULL;
	str = GetMemory000();
	printf(str);
	free(str);
	str = NULL;
}

//结果是随机值，因为str指向的区域在跳出getmemory000函数的时候就销毁了

//笔试题3

void GetMemory0000(char** p, int num)
{
	*p = (char*)malloc(num);
}
//void Test0000(void)
//{
//	char* str = NULL;
//	GetMemory0000(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//内存泄漏

//题目4

//void Test00000(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//非法访问，因为free后str为野指针

//int main()
//{
//	Test000();
//	return 0;
//}

//柔性数组的声明以及对结构体大小的影响

struct S
{
	int a;
	int b[];
};

//int main()
//{
//	printf("%zd\n", sizeof(struct S));
//	return 0;
//}

//柔性数组的使用：第一种方法

//int main()
//{
//	int a = 40;
//	struct S* p1 = (struct S*)malloc(sizeof(struct S) + a * sizeof(int));
//	if (p1 == NULL)
//	{
//		perror("p1");
//		return 1;
//	}
//	printf("%zd\n", sizeof(*p1));//仍然不计算在结构体大小内
//	p1->a = 100;
//	for (int i = 0; i < a; i++)
//	{
//		p1->b[i] = i;
//		printf("%d ", *(p1->b + i));
//	}
//	printf("\n");
//	a = 50;
//	struct S* temp = (struct S*)realloc(p1, sizeof(struct S) + a * sizeof(int));
//	if (temp != NULL)
//	{
//		p1 = temp;
//		temp = NULL;
//	}
//	for (int i = 0; i < a; i++)
//	{
//		p1->b[i] = i;
//		printf("%d ", *(p1->b + i));
//	}
//	free(p1);
//	p1 = NULL;
//	return 0;
//}

//柔性数组的使用：第二种方法
struct X
{
	int a;
	int* p;
};

//int main()
//{
//	printf("%zd\n", sizeof(struct X));
//	int a = 40;
//
//	struct X* px1 = (struct X*)malloc(sizeof(struct X));
//	//也可以将结构体也开辟在栈区
//	//struct X x1 = { 100,NULL };
//	//x1.p = malloc(a * sizeof(int));
//	if (px1 == NULL)
//	{
//		perror("px1");
//		return 1;
//	}
//	px1->p = (int*)malloc(a * sizeof(int));
//	if (px1->p == NULL)
//	{
//		perror("px1->p");
//		return 1;
//	}
//
//	for (int i = 0; i < a; i++)
//	{
//		(px1->p)[i] = i;
//		printf("%d ", *(px1->p + i));
//	}
//	free(px1);
//	px1 = NULL;
//	perror("px1");
//	return 0;
//}