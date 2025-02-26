#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <errno.h>
//#include <ctype.h>

//字符函数

//int main()
//{
//	char a = 0;
//	scanf("%c",&a);
//	printf("iscntrl的结果是：%d\n",iscntrl(a));
//	printf("isspace的结果是：%d\n", isspace(a));
//	printf("isdigit的结果是：%d\n", isdigit(a));
//	printf("isxdigit的结果是：%d\n", isxdigit(a));
//	printf("islower的结果是：%d\n", islower(a));
//	printf("isupper的结果是：%d\n", isupper(a));
//	printf("isalpha的结果是：%d\n", isalpha(a));
//	printf("isalnum的结果是：%d\n", isalnum(a));
//	printf("ispunct的结果是：%d\n", ispunct(a));
//	printf("isgraph的结果是：%d\n", isgraph(a));
//	printf("isprint的结果是：%d\n", isprint(a));
//	return 0;
//}

//将字符串中的小写字母转换成大写字母
void ToUpper(char* p)
{
	while (*p)
	{
		if (islower(*p))
		{
			*p -= 32;
		}
		p++;
	}
}
//int main()
//{
//	char arr[] = "abcdef";
//	scanf("%s",arr);
//	ToUpper(arr);
//	printf("%s",arr);
//	return 0;
//}


//strlen的模拟实现

//创建中间变量计数
size_t my_strlen1(const char* p)
{
	assert(p);
	size_t num = 0;
	while (*p)
	{
		num++;
		p++;
	}
	return num;
}
//创建中间指针计数
size_t my_strlen2(const char* p)
{
	assert(p);
	const char* p0 = p;
	while (*p)
	{
		p++;
	}
	return p-p0;
}
//不创建临时变量计数：递归
size_t my_strlen3(const char* p)
{
	assert(p);
	if (*p == '/0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen3(p++);
	}
	return 0;
}
//int main()
//{
//	char arr[20] = {0};
//	scanf("%s",arr);
//	printf("%s\n",arr);
//	printf("arr具有%zd个字符\n",my_strlen2(arr));
//	printf("arr具有%zd个字符\n", strlen(arr));
//	return 0;
//}



//strcpy的模拟实现
void my_strcpy1(char* p1, const char* p2)
{
	assert(p1 && p2);
	while (*p2)
	{
		*p1 = *p2;
		p2++;
		p1++;
	}
	*p1 =*p2;
}
//strcpy的高效率实现
void my_strcpy2(char* p1, const char* p2)
{
	assert(p1 && p2);
	while (*p1++= *p2++) {}
}
//int main()
//{
//	char arr1[50] = { "1" };
//	printf("%s\n", arr1);
//	char arr2[] = "abcdef";
//	char arr3[] = {'a','b','c'};
//	strcpy(arr1,arr2);
//	printf("%s\n", arr1);
//	printf("%s\n",arr1+1);
//	my_strcpy1(arr1, arr3);
//	printf("%s\n", arr1);
//	my_strcpy2(arr1, arr3);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcat附加字符串
void my_strcat(char* p1, const char* p2)
{
	assert(p1 && p2);
	while (*p1)
	{
		p1++;
	}
	while (*p1++=*p2++){}
}

//int main()
//{
//	char arr1[50] = "你好";
//	char arr2[] = "nihao";
//	printf("%s\n",arr1);
//	strcat(arr1,arr2);
//	printf("%s\n", arr1);
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	my_strcat(arr1, arr1);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcmp比较字符串大小函数

int my_strcmp(const char* p1,const char* p2)
{
	assert(p1&&p2);
	while ((*p1 && *p2)&&(*p1++ == *p2++)){}
	return *p1 - *p2;
}

//int main()
//{
//	char arr1[] = "abcgef";
//	char arr2[] = "abcge";
//	printf("%d\n",strcmp(arr1,arr2));
//	printf("%d\n",my_strcmp(arr1,arr2));
//	return 0;
//}


//int main()
//{
//	char arr1[60] = "abcdefghijkl\0\0\0abcdef";
//	char arr2[] = "123";
//	strncpy(arr1,arr2,3);
//	printf("%s\n", arr1);
//	strncat(arr1, arr2, 100);
//	printf("%s\n", arr1);
//	return 0;
//}


//strstr



const char* my_strstr(const char* p1,const char* p2)
{
	assert(p1&&p2);
	const char *tempp1,*tempp2,*mark;
	if (!*p2)
	{
		return p1;
	}
	else
	{
		while (*p1)
		{
			tempp1 = p1;
			mark = tempp1;
			tempp2 = p2;
			while (*tempp2==*tempp1)
			{
				if (!*tempp2)
				{
					return mark;
				}
				tempp1++;
				tempp2++;
			}
			
			p1++;
		}
		return NULL;
	}
}

//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abcd";
//	printf("%s\n", strstr(arr1,arr2));
//	printf("%s\n", my_strstr(arr1, arr2));
//	return 0;
//}

//strtok

//int main()
//{
//	char arr[] = "192.168.6.111";
//	char* sep = ".";
//	char* str = NULL;
//	/*str = strtok(arr,sep);
//	printf("%s\n", str);
//	str = strtok(NULL, sep);
//	printf("%s\n", str);
//	str = strtok(NULL, sep);
//	printf("%s\n", str);
//	printf("\n");*/
//	for (str=strtok(arr,sep);str;str=strtok(NULL,sep))
//	{
//		printf("%s\n", str);
//	}
//
//}

//strerron()、errno.h、perror()、fopen



//int main()
//{
//	FILE* p;
//	p = fopen("hello.txt","r");//文件要和本文件在同一个文件夹
//	if (!p)
//	{
//		printf("错误是：%s\n", strerror(errno));
//		perror("错误是");
//	}
//	else
//	{
//		printf("找到了");
//	}
//	return 0;
//}

void* my_memcpy(char* arr1,const char* arr2,int num)
{
	void* ret = arr1;
	while (num--)
	{
		*arr1= *arr2;
		arr1++;
		arr2++;
	}
	return ret;
}
int main()
{
	int arr1[20] = { 0 };
	int arr2[5] = { 1,2,3,4,5 };
	my_memcpy(arr1, arr2, 20);

	return 0;
}