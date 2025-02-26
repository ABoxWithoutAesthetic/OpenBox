#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//以二进制形式将数据写到文件中

//int main()
//{
//	//打开文件
//	FILE* opf = fopen(".\\..\\123\\test.txt", "wb");
//	if (opf == NULL)
//	{
//		perror("fopen test.txt");
//		return 1;
//	}
//
//	//写入二进制
//	int a[] = { 1,2,3,4,5 };
//	fwrite(a, 4, 4, opf);
//
//	//关闭文件
//	fclose(opf);
//	opf = NULL;
//	return 0;
//}

//scanf/fscanf/sscanf
//printf/fprintf/sprintf

//struct S
//{
//	char name[50];
//	int age;
//	int height;
//};
//int main()
//{
//	struct S s1 = { 0 };
//	struct S s2 = { 0 };
//	//scanf/printf标准输入输入流
//	//scanf("%s %d %d", s1.name, &s1.age, &s1.height);
//	//printf("%s %d %d\n", s1.name, s1.age, s1.height);
//
//	FILE* opf = fopen("test1.txt", "w+");
//	if (opf == NULL)
//	{
//		perror("fopen1");
//		return 1;
//	}
//	//fscanf/fprintf用于标准输入输出流
//	//fscanf(stdin, "%s %d %d", s1.name, &(s1.age), &(s1.height));
//	//fprintf(stdout, "%s %d %d\n", s1.name, s1.age, s1.height);
//
//	//fscanf/fprintf用于文件输入输出流
//	//strcpy(s1.name, "zhangsan");
//	//s1.age = 10;
//	//s1.height = 240;
//	//fprintf(opf, "%s %d %d\n", s1.name, s1.age, s1.height);
//
//	//rewind(opf);
//
//	//printf("%s %d %d\n", s2.name, s2.age, s2.height);
//	//fscanf(opf, "%s %d %d", s2.name, &(s2.age), &(s2.height));
//	//printf("%s %d %d\n", s2.name, s2.age, s2.height);
//
//	//sprintf/sscanf将各种数据转换成字符，输入输出字符数组
//	//strcpy(s1.name, "wangwu");
//	//s1.age = 16;
//	//s1.height = 250;
//	//char arr[100] = { 0 };
//	//printf("arr:%s\n", arr);
//	//printf("s1:%s %d %d\n", s1.name, s1.age, s1.height);
//	//sprintf(arr, "%s %d %d", s1.name, s1.age, s1.height);
//	//printf("arr:%s\n", arr);
//	//printf("s1:%s %d %d\n", s1.name, s1.age, s1.height);
//	//printf("s2:%s %d %d\n", s2.name, s2.age, s2.height);
//	//sscanf(arr, "%s %d %d", s2.name, &s2.age, &s2.height);
//	//printf("s2:%s %d %d\n", s2.name, s2.age, s2.height);
//	return 0;
//}

//fseek

//int main()
//{
//	FILE* opf = fopen("test.txt", "w");
//	if (opf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("hello", opf);
//	fseek(opf, 5, SEEK_SET);
//	fputs("world", opf);
//
//	fclose(opf);
//	opf = NULL;
//	return 0;
//}

//ftell

//int main()
//{
//	FILE* opf = fopen("test.txt", "w");
//	if (opf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("hello", opf);
//	printf("%d\n", ftell(opf));
//	fseek(opf, -2, SEEK_SET);
//	printf("%d\n", ftell(opf));
//
//	fclose(opf);
//	opf = NULL;
//	return 0;
//}

//rewind

//int main()
//{
//	FILE* opf = fopen("test.txt", "w");
//	if (opf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("hello", opf);
//	printf("%d\n", ftell(opf));
//	rewind(opf);
//	printf("%d\n", ftell(opf));
//
//	fclose(opf);
//	opf = NULL;
//	return 0;
//}

//文件文本读取结束判定

//int main()
//{
//	FILE* opf = fopen("test.txt", "r");
//	if (opf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//char arr[50] = { 0 };
//	//fgets(arr, 10, opf);
//	int ch = 0;
//	while ((ch = fgetc(opf)) != EOF)
//	{
//		//printf("%c ", ch);
//	}
//	printf("\n");
//	if (ferror(opf))
//	{
//		printf("读取错误\n");
//	}
//	else if (feof(opf))
//	{
//		printf("碰到结尾而结束\n");
//	}
//	//printf("%s\n", arr);
//	fclose(opf);
//	opf = NULL;
//	return 0;
//	return 0;
//}

//读取二进制错误

//int main()
//{
//	FILE* opf = fopen("test.txt", "w");
//	if (opf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	char arr1[] = "qwertyuiop";
//	fwrite(arr1, 1, 10, opf);
//	fclose(opf);
//	opf = fopen("test.txt", "r");
//
//	char arr[50] = { 0 };
//	int count = 2;
//	while (count == fread(arr, 1, count, opf))
//	{
//		int i = 0;
//		printf("%c ", arr[i++]);
//	}
//	printf("\n");
//	if (ferror(opf))
//	{
//		printf("读取错误\n");
//	}
//	else if (feof(opf))
//	{
//		printf("碰到结尾而结束\n");
//	}
//	printf("%s ", arr);
//	fclose(opf);
//	opf = NULL;
//	return 0;
//	return 0;
//}

//int main()
//{
//	//打开
//	FILE* opf = fopen("test.txt", "wb+");
//	if (opf == NULL)
//	{
//		perror("opf");
//		return 1;
//	}
//	//写
//	int a[] = { 1,2,3,4 };
//	fwrite(a, 4, 4, opf);
//	//fwrite写完后会将光标停留在末端，所以下面的fread得不到想要的结果
//	//在只写的情况下读,需要重置光标
//	//rewind(opf);
//	int b[4] = { 5,6,7,8 };
//	fread(b, 4, 2, opf);
//	printf("%d %d %d", b[0], b[1], b[2]);
//	//关闭
//	fclose(opf);
//	opf = NULL;
//	return 0;
//}

//缓存区

#include <windows.h>

int main()
{
	FILE* opf = fopen("test.txt", "w");
	if (opf == NULL)
	{
		perror("opf");
		return 1;
	}
	fputs("abcdefg", opf);
	int input = 0;
	scanf("%d", &input);
	fflush(opf);
	fputs("qwerty", opf);
	Sleep(10000);
	fflush(opf);
	scanf("%d", &input);
	fclose(opf);
	opf = NULL;
	return 0;
}