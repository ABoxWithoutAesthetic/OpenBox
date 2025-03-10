#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//查看变量的地址

//int main()
//{
//	int a = 200000;
//	printf("%p",&a);
//	return 0;
//}

//指针变量的大小和解引用操作符

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 30;
//	printf("%d\n",a);
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(float*));
//	printf("%zd\n", sizeof(void*));
//	return 0;
//}

//指针类型的作用

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0x55667788;
//	char* ca = &a;
//	*ca = 0x11223344;
//	return 0;
//}

//指针+-整数

//int main()
//{
//	int a = 10;
//	int* ia = &a;
//	char* ca = &a;
//	printf("%p\n",&a);
//	printf("%p\n", ia);
//	printf("%p\n", ia+1);//增加了四个字节
//	printf("%p\n", ca);
//	printf("%p\n", ca+1);//指增加一个字节
//	return 0;
//}

//const修饰普通变量

//int main()
//{
//	const int a = 0;
//	//a = 10;//const修饰的变量无法被修改
//	int* p=&a;
//	*p = 20;//可以通过指针修改a的值，但是这种做法打破了语法规则，不合适
//	printf("%d\n",a);
//	return 0;
//}

//const修饰指针变量

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int* p1 = &a;
//	*p1 = 20;
//	printf("%d\n",a);
//	printf("%p\n",p1);
//	p1 += 1;
//	printf("%p\n", p1);
//	int const* p2 = &a;
//	printf("%p\n", p2);
//	//*p2 = 50;//const修饰了*，无法修改*p2
//	p2 += 1;
//	printf("%p\n",p2);
//	int* const p3 = &a;
//	*p3 = 40;
//	//p3 += 1;//const修饰了p3，所以无法修改p3的值
//	printf("%d\n",a);
//	return 0;
//}

//指针运算

//指针+-整数

//int main()
//{
//	int arr1[10] = { 0 };
//	int* p1 = arr1;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	printf("%p\n\n", p1);
//	for (int i = 0; i < sz; i++)
//	{
//		*(p1+i) = i;
//		printf("%d ", arr1[i]);
//		//p1++;//不修改指针变量的值
//		printf("%p\n", p1);
//	}
//	printf("\n\n%p", p1);
//	return 0;
//}

//指针-指针,制作测量字符串长度的函数

//size_t getstr(char* p)
//{
//	size_t count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char stringarr[] = "hello world";
//	printf("%p\n",stringarr);
//	size_t c = getstr(stringarr);
//	printf("%zd\n",c);
//	printf("%p\n", stringarr);
//	return 0;
//}

//指针的关系运算

//size_t getstr(char* p,int x)
//{
//	size_t count = 0;
//	char* tempP = p;
//	while (tempP<(p+x))
//	{
//		count++;
//		tempP++;
//	}
//	return count;
//}
//int main()
//{
//	char stringarr[] = "hello world";
//	int sz = sizeof(stringarr) / sizeof(stringarr[0])-1;//使用sizeof计算的长度是包含/0的
//	printf("%p\n",stringarr);
//	size_t c = getstr(stringarr,sz);
//	printf("%zd\n",c);
//	printf("%p\n", stringarr);
//	return 0;
//}

//野指针
//int* test()
//{
//	int a = 0;
//	int* temp = &a;
//	return temp;
//}
//int main()
//{
//	int* p1;//未初始化造成野指针
//	int arr1[5] = {0};
//	int* p2 = arr1;
//	for (int i = 0; i <= 5; i++)
//	{
//		*p2 = i;
//		p2++;//越界造成野指针
//	}
//	int* p3 = test();//局部空间释放造成野指针
//	printf("%p\n",p3);
//	return 0;
//}

//避免野指针

//int main()
//{
//	int a = 10;
//	int* p = NULL;
//	printf("%p\n",p);
//	p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	printf("%p\n", p);
//	p = NULL;
//	printf("%p\n", p);
//	return 0;
//}

//assert断言
#define NDEBUG
#include <assert.h>
//int main()
//{
//	int a = 10;
//	int*  p= &a;
//	assert(p != NULL);
//	return 0;
//}

//传值调用和传址调用
//void swap1(int a,int b)
//{
//	a = 1;
//	b = 2;
//}
//void swap2(int* x,int* y)
//{
//	*x = 1;
//	*y = 2;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d %d\n", a, b);
//	swap1(a,b);
//	printf("%d %d\n",a,b);
//	swap2(&a,&b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

////数组名
//
//int main()
//{
//	int arr1[] = {0,1,2,3,4,5};
//	printf("%p\n",arr1);
//	printf("%p\n",&arr1[0]);
//	return 0;
//}

//sizeof中的数组名

//int main()
//{
//	int arr1[] = { 0,1,2,3,4,5 };
//	int a = sizeof(arr1);
//	printf("%d\n",a);
//	return 0;
//}

//数组名和数组元素取地址比较

//int main()
//{
//	int arr1[] = { 0,1,2,3,4,5 };
//	printf("&arr1[0]=  %p\n", &arr1[0]);
//	printf("&arr1[0]+1=%p\n", &arr1[0]+1);
//	printf("arr1=      %p\n", arr1);
//	printf("arr1+1=    %p\n", arr1 + 1);
//	printf("&arr1=     %p\n", &arr1);
//	printf("&arr1+1=   %p\n", &arr1+1);
//	return 0;
//}

//使用指针访问数组

//int main()
//{
//	int arr1[] = { 0,1,2,3,4,5 };
//	int* p1 = arr1;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d",p1+i);
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p1 + i));
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", p1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", i[p1]);
//	}
//	return 0;
//}

//一维数组传参

//void printf_arr_length1(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n",sz);
//}
//void printf_arr_length2(int* p)
//{
//	printf("%d\n", sizeof(p));
//}
//int main()
//{
//	int arr1[] = { 0,1,2,3,4,5 };
//	printf_arr_length1(arr1);
//	printf_arr_length2(&arr1[0]);
//	return 0;
//}

//冒泡排序

//void Bubble_Sort(int* arr, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int input = 1;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (*(arr+j) > *(arr + j+1))
//			{
//				int temp = *(arr+j);
//				*(arr + j ) = *(arr + j+1);
//				*(arr + j + 1) = temp;
//				input=0;
//			}
//
//		}
//		if (input == 1)
//		{
//			break;
//		}
//
//	}
//}
//int main()
//{
//	int arr[10] = {0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d",arr+i);
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//	Bubble_Sort(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}

//二级指针

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	int* *pp = &p;
//	printf("%d\n",a);
//	a = 20;
//	printf("%d\n", a);
//	*p = 30;
//	printf("%d\n", a);
//	**pp = 50;
//	printf("%d\n", a);
//	return 0;
//}

//指针数组

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* p[3] = {&a,&b,&c};
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ",*p[i]);
//	}
//
//	return 0;
//}

//指针数组模拟二维数组

//int main()
//{
//	int a[3] = {0,1,2};
//	int b[3] = {3,4,5};
//	int c[3] = {6,7,8};
//	int* p[3] = {a,b,c};
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ",p[i][j]);
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//字符指针

//int main()
//{
//	char a = "b";
//	char b = 'a';
//	char* pa = &a;
//	char* ptr = "hello world";
//	printf("%c %c", a, *ptr);
//	return 0;
//}

//常量字符串与字符数组

//int main()
//{
//	char str1[] = "hello world";
//	char str2[] = "hello world";
//	const char* str3 = "hello world";
//	const char* str4 = "hello world";
//	if (str1 == str2)
//	{
//		printf("str1 == str2\n");
//	}
//	else
//	{
//		printf("str1 != str2\n");
//	}
//	if (str3 == str4)
//	{
//		printf("str3 == str4\n");
//	}
//	else
//	{
//		printf("str3 != str4\n");
//	}
//	return 0;
//}

//数组指针变量

//int main()
//{
//	char a = 'a';
//	char b = 'b';
//	char* p[2] = {&a,&b};//指针数组，存放的是char*类型的指针
//	char* (*pp)[2] = &p;//数组指针，指向的是char*类型的指针数组，他是个指针，char* [2]为这个指针指向的数组类型
//
//	return 0;
//}

//二维数组传参

//void printArr1(int arr[3][5],int x,int y)
//{
//	for (int i =0;i<3;i++)
//	{
//		for (int j =0;j<y;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void printArr2(int (*p)[5],int x, int y)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);//p是一维数组的地址,即==数组名
//		}
//		printf("\n");
//	}
//}
//void printArr3(int (*p)[5], int x, int y)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", (*(p+i))[j]);
//		}
//		printf("\n");
//	}
//}
//void printArr4(int (*p)[5], int x, int y)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", *((*(p + i))+j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
//	printArr1(arr,3,5);
//	printArr2(arr, 3, 5);
//	printArr3(arr, 3, 5);
//	printArr4(arr, 3, 5);
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

//函数指针

//int main()
//{
//	int a = 3;
//	int b = 4;
//	printf("%p\n",Add);
//	printf("%p\n", &Add);
//	int (*p)(int, int) = Add;
//	printf("%p\n", p);
//	printf("%d\n",(*p)(a,b));
//	printf("%d\n", p(a, b));
//	return 0;
//}

//typedef关键字

//无符号整型
typedef unsigned int unit;

//普通指针
typedef int* p_a;

//数组指针和函数指针
typedef int (*p_arr)[10];
typedef int (*TestFunction)(int, int);

typedef void (*pp_fun)(int);
//int main()
//{
//	(*(void (*)())0)();
//	//拆解：(void(*)())0是将0强制转换为void (*)()类型，即转换为了函数指针类型，然后*解引用，最终结果就是
//	//定义了一个void函数，并将它的地址设置为了0，同时通过地址调用这个函数
//	//经过typedef关键字定义后
//	void (*signal(int, void(*)(int)))(int);
//	//signal为函数名，void(*)(int)函数指针为signal函数的形参之一，同时signal的返回值为void (*)(int)
//	//函数指针作为函数的返回值时，只能这么写，不能void(*)(int) signal(int,void(*)(int))
//	//简化后
//	pp_fun signal(int, pp_fun);
//	return 0;
//}

//测试指针数组，结果是可行的

//typedef int* p2_arr[3];
//int main()
//{
//	int a = 3;
//	int b = 4;
//	int c = 5;
//	int* p1[3] = { &a,&b,&c };
//	for (int i= 0; i < 3; i++)
//	{
//		printf("%p ", *(p1 + i));
//		printf("%d ", **(p1 + i));
//	}
//	printf("\n");
//	p2_arr p2= {&a,&b,&c};
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%p ", *(p2 + i));
//		printf("%d ", **(p2 + i));
//	}
//	return 0;
//}

//转移表
void Menu()
{
	printf("1.使用加法\n");
	printf("2.使用减法\n");
	printf("3.使用乘法\n");
	printf("4.使用除法\n");
	printf("0.结束使用\n");
}
void cal(int (*fun_p)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入两个操作数：\n");
	scanf("%d %d", &x, &y);
	ret = fun_p(x, y);
	printf("运算结果为：%d\n", ret);
}
//int main()
//{
//	int input = 1;
//	do
//	{
//		Menu();
//		printf("请选择计算模式：\n");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			cal(Add);
//			break;
//		case 2:
//			cal(Sub);
//			break;
//		case 3:
//			cal(Mul);
//			break;
//		case 4:
//			cal(Div);
//			break;
//		case 0:
//			printf("结束运算\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//
//	int (*fun_p_arr[5])(int, int) = {0,Add,Sub,Mul,Div};
//	Menu();
//	int input = 0;
//	do
//	{
//
//		printf("请选择计算模式：\n");
//		scanf("%d", &input);
//		if (input>0&&input<5)
//		{
//			int x = 0;
//			int y = 0;
//			int ret = 0;
//			printf("请输入两个操作数：\n");
//			scanf("%d %d", &x, &y);
//			ret = (*(fun_p_arr + input))(x,y);
//			printf("运算结果为：%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("结束运算\n");
//		}
//		else
//		{
//			printf("请输入正确的数值");
//		}
//	} while (input);
//	return 0;
//}

//qsort模拟实现（冒泡排序的方式）

void swap(void* p1, void* p2, int width)//这个为交换函数，会修改值所以不可以用const void*
{
	for (int i = 0; i < width; i++)
	{
		char temp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = temp;
	}
}
void bubble_sort(void* base, int sz, int width, int(*point)(const void* p1, const void* p2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if ((point(((char*)base + j * width), ((char*)base + (j + 1) * width))) > 0)
			{
				swap(((char*)base + j * width), ((char*)base + (j + 1) * width), width);
			}
		}
	}
}
int point_int(const void* p1, const void* p2)//这个为比较函数，只比较值不会修改值所以可以用const void*
{
	return (*((int*)p1) - *((int*)p2));
}

struct stu {
	char name[20];
	int age;
};

#include <string.h>
int point_struct_stu_name(const void* p1, const void* p2)
{
	return strcmp(((struct stu*)p1)->name, ((struct stu*)p2)->name);
}
int point_struct_stu_age(const void* p1, const void* p2)
{
	return (*((struct stu*)p1)).age - (*((struct stu*)p2)).age;
}
//int main()
//{
//	int arr_int[10] = {1,2,3,6,8,9,4,5,0,7};
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(arr_int + i));
//	}
//	printf("\n");
//	bubble_sort(arr_int,10,4,point_int);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ",*(arr_int+i));
//	}
//	printf("\n");
//
//	struct stu arr_stu[3] = { {"zhangsan",15},{"lisi",20},{"wangwu",6}};
//	int width = sizeof(arr_stu[0]);
//	bubble_sort(arr_stu, 3, width, point_struct_stu_name);
//	bubble_sort(arr_stu, 3, width, point_struct_stu_age);
//	return 0;
//}

//一维数组

//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%zd\n", sizeof(a));					//a是单独的数组名，与sizeof结合，测量的是整个数组的字节长度，16
//	printf("%zd\n", sizeof(a + 0));				//a与sizeof不是单独结合，a为首元素地址，类型为int*[4]，指向首元素，结果为4/8
//	printf("%zd\n", sizeof(*a));				//首元素地址解引用为首元素，4
//	printf("%zd\n", sizeof(a + 1));				//首元素地址+1，第二个元素地址，4/8
//	printf("%zd\n", sizeof(a[1]));				//第二元素，4
//	printf("%zd\n", sizeof(&a));				//数组指针，类型为int*[4]，指向首元素，4/8
//	printf("%zd\n", sizeof(*&a));				//整个数组，16
//	printf("%zd\n", sizeof(&a + 1));			//数组指针，类型为int*[4]，指向末端之后一个，4/8
//	printf("%zd\n", sizeof(&a[0]));				//首元素地址，4/8
//	printf("%zd\n", sizeof(&a[0] + 1));			//首元素地址，int*，指向第二个元素，4/8
//
//	printf("\n\n\n");
//	return 0;
//}

//字符数组

int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%zd\n", sizeof(arr));												//sizeof+单独的数组名，即整个数组，6
	printf("%zd\n", sizeof(arr + 0));											//地址，指向首元素，类型为char*，4/8
	printf("%zd\n", sizeof(*arr));												//首元素地址解引用即字符a，首字符长度，1
	printf("%zd\n", sizeof(arr[1]));											//第二字符长度，1
	printf("%zd\n", sizeof(&arr));												//数组指针，类型为char*[6]，指向数组首元素，结果为4/8
	printf("%zd\n", sizeof(&arr + 1));											//同上，指向数组末端，结果为4/8
	printf("%zd\n", sizeof(&arr[0] + 1));										//首元素地址，指向第二个元素，结果为4/8

	return 0;
}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));
//	//数组名且非特殊情况，即首元素地址，但是数组没有/0，结果为随机值
//	printf("%d\n", strlen(arr + 0));
//	//同上
//	//printf("%d\n", strlen(*arr));
//	//对首元素地址解引用，结果是字符a，即97，非法访问，error
//	//printf("%d\n", strlen(arr[1]));
//	//b，同上
//	printf("%d\n", strlen(&arr));
//	//数组指针，位置指向首元素地址，类型为char*[6],结果随机值
//	printf("%d\n", strlen(&arr + 1));
//	//同上，位置指向末元素下一个位置，结果为随机值
//	printf("%d\n", strlen(&arr[0] + 1));
//	//位置指向第二个元素，类型为char* 结果为随机值
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	//单独数组名，7
//	printf("%d\n", sizeof(arr + 0));
//	//类型char*，指向首元素，4/8
//	printf("%d\n", sizeof(*arr));
//	//字符a，1
//	printf("%d\n", sizeof(arr[1]));
//	//字符b，1
//	printf("%d\n", sizeof(&arr));
//	//数组指针，char*[7]，指向首元素，4/8
//	printf("%d\n", sizeof(&arr + 1));
//	//数组指针，char*[7]，指向数组末端，4/8
//	printf("%d\n", sizeof(&arr[0] + 1));
//	//char*，第二个元素，4/8
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));
//	//首元素地址，6
//	printf("%d\n", strlen(arr + 0));
//	//首元素地址，6
//	//printf("%d\n", strlen(*arr));
//	//首元素字符，error
//	//printf("%d\n", strlen(arr[1]));
//	//第二个元素字符，error
//	printf("%d\n", strlen(&arr));
//	//数组指针，char*[7]，指向首元素，6
//	printf("%d\n", strlen(&arr + 1));
//	//数组指针，char*[7]，指向末端，随机值
//	printf("%d\n", strlen(&arr[0] + 1));
//	//首元素指针+1，char*，5
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	//p为首字符a的地址
//	printf("%d\n", sizeof(p));
//	//char*，指向a，4/8
//	printf("%d\n", sizeof(p + 1));
//	//char*，指向b，4/8
//	printf("%d\n", sizeof(*p));
//	//a，1
//	printf("%d\n", sizeof(p[0]));
//	//*(p+0)，a，1
//	printf("%d\n", sizeof(&p));
//	//二级指针，char**，4/8
//	printf("%d\n", sizeof(&p + 1));
//	//二级指针，char**，+1跳过一个char*，char*为4/8，4/8
//	printf("%d\n", sizeof(&p[0] + 1));
//	//char*，指向b，4/8
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	//p为首字符a的地址
//	printf("%d\n", strlen(p));
//	//char*，首字符a地址，6
//	printf("%d\n", strlen(p + 1));
//	//char*，第二个元素地址，5
//	//printf("%d\n", strlen(*p));
//	//首元素地址解引用a，error
//	//printf("%d\n", strlen(p[0]));
//	//error
//	printf("%d\n", strlen(&p));
//	//二级指针，char**，随机值
//	printf("%d\n", strlen(&p +1));
//	//二级指针，char**，随机值
//	printf("%d\n", strlen(&p[0] + 1));
//	//char*，第二个字符，5
//	return 0;
//}

//二维数组

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	//二维数组名也是数组名，48
//	printf("%d\n", sizeof(a[0][0]));
//	//二维数组一维数组的首元素，4
//	printf("%d\n", sizeof(a[0]));
//	//二维数组的一维数组名，也是单独数组名，16
//	printf("%d\n", sizeof(a[0] + 1));
//	//int*，二维数组的第一个一维数组的首元素的地址+1，4/8
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	//第一个一位数组的的第二个元素的地址解引用，4
//	//*(*(a+0)+1)   *(*a+1)   *a为第一个一维数组，单独为就为数组名，否则就为第一个首元素的地址
//	printf("%d\n", sizeof(a + 1));
//	//int*[4]，指向第二个一维数组，跳过了16个字节，4/8
//	printf("%d\n", sizeof(*(a + 1)));
//	//对第二个一维数组解引用为一维数组，16
//	printf("%d\n", sizeof(&a[0] + 1));
//	//int*[4]，指向第二个一维数组，4/8
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	//第二个一维数组，16
//	//*(&(*(a+0))+1) → *(&(*a)+1) → *(a+1) → a[1]
//	printf("%d\n", sizeof(*a));
//	//第一个一维数组的地址解引用为第一个一维数组，16
//	printf("%d\n", sizeof(a[3]));
//	//因为sizeof不参与运算，所以不存在越界的情况，只是根据数据类型类判断所占字节大小，16
//	return 0;
//}

//指针运算笔试题解析

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	//&a为数组指针，int*[5]，+1后指向数组末端，然后强制转换成int*
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	//2，5
//	return 0;
//}

//在X86环境下

//假设结构体的⼤⼩是20个字节

//程序输出的结果是啥？

struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p = (struct Test*)0x00100000;

//int main()
//{
//	printf("%p\n", p + 0x1);
//	//p
//	//类型：struct Test*
//	//大小：20字节
//	//0x00100000+0x1==0x00100014
//	printf("%p\n", (unsigned long)p + 0x00000001);
//	//强制转换成了无符号整型0x00100000+0x00000001==0x00100001
//	printf("%p\n", (unsigned int*)p + 0x00000001);
//	//强制转换成了无符号整型指针类型，0x00100000+0x00000001==0x00100004
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	//(,)逗号表达式，结果为最后的，所以数组初始化为{1,3,5,0,0,0}
//	int* p;
//	p = a[0];
//	//a[0]为第一个一维数组名，即一维数组首元素的地址
//	printf("%d", p[0]);
//	//*(p+0)，1
//	return 0;
//}

 //假设环境是x86环境，程序输出的结果是啥？

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	//a为第一个一维数组的地址，即数组指针，类型为int*[5]
//	//赋予p后强制转换成了int*[4]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//&p[4][2]为二维数组的第19个元素的地址
//	//&a[4][2]为二维数组a的第23个元素的地址
//	//%d的结果为-4
//	//%p为无符号整型类型，所以读取的是补码
//	//10000000000000000000000000000100原
//	//11111111111111111111111111111011反
//	//11111111111111111111111111111100补
//	//FF FF FF FC
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	//&aa二维数组指针，类型为int*[2][5],+1后ptr1指向末端，类型为int*
//	int* ptr2 = (int*)(*(aa + 1));
//	//aa为第一个一维数组的地址，+1为第二个一维数组的地址，解引用为第二个一维数组，及第二个一维数组的首元素地址
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	//10，5
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	//a为三个字符串的首字符地址的指针数组
//	char** pa = a;
//	//pa为指针数组的指针，指向指针数组的首元素
//	pa++;
//	//跨过一个char*即指向第二个元素
//	printf("%s\n", *pa);
//	//解引用即at字符串首元素的地址，结果为at
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	//四个字符串的首字符的地址数组，即char*类型的字符指针数组
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	//char**[]类型的指针数组
//	char*** cpp = cp;
//	//char**类型的数组首元素指针
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- * ++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	char arr1[50] = "我是你爹";
//	return 0;
//}