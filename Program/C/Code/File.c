#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//�Զ�������ʽ������д���ļ���

//int main()
//{
//	//���ļ�
//	FILE* opf = fopen(".\\..\\123\\test.txt", "wb");
//	if (opf == NULL)
//	{
//		perror("fopen test.txt");
//		return 1;
//	}
//
//	//д�������
//	int a[] = { 1,2,3,4,5 };
//	fwrite(a, 4, 4, opf);
//
//	//�ر��ļ�
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
//	//scanf/printf��׼����������
//	//scanf("%s %d %d", s1.name, &s1.age, &s1.height);
//	//printf("%s %d %d\n", s1.name, s1.age, s1.height);
//
//	FILE* opf = fopen("test1.txt", "w+");
//	if (opf == NULL)
//	{
//		perror("fopen1");
//		return 1;
//	}
//	//fscanf/fprintf���ڱ�׼���������
//	//fscanf(stdin, "%s %d %d", s1.name, &(s1.age), &(s1.height));
//	//fprintf(stdout, "%s %d %d\n", s1.name, s1.age, s1.height);
//
//	//fscanf/fprintf�����ļ����������
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
//	//sprintf/sscanf����������ת�����ַ�����������ַ�����
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

//�ļ��ı���ȡ�����ж�

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
//		printf("��ȡ����\n");
//	}
//	else if (feof(opf))
//	{
//		printf("������β������\n");
//	}
//	//printf("%s\n", arr);
//	fclose(opf);
//	opf = NULL;
//	return 0;
//	return 0;
//}

//��ȡ�����ƴ���

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
//		printf("��ȡ����\n");
//	}
//	else if (feof(opf))
//	{
//		printf("������β������\n");
//	}
//	printf("%s ", arr);
//	fclose(opf);
//	opf = NULL;
//	return 0;
//	return 0;
//}

//int main()
//{
//	//��
//	FILE* opf = fopen("test.txt", "wb+");
//	if (opf == NULL)
//	{
//		perror("opf");
//		return 1;
//	}
//	//д
//	int a[] = { 1,2,3,4 };
//	fwrite(a, 4, 4, opf);
//	//fwriteд���Ὣ���ͣ����ĩ�ˣ����������fread�ò�����Ҫ�Ľ��
//	//��ֻд������¶�,��Ҫ���ù��
//	//rewind(opf);
//	int b[4] = { 5,6,7,8 };
//	fread(b, 4, 2, opf);
//	printf("%d %d %d", b[0], b[1], b[2]);
//	//�ر�
//	fclose(opf);
//	opf = NULL;
//	return 0;
//}

//������

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