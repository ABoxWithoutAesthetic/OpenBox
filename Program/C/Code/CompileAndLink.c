#include <stdio.h>
#include <stdlib.h>
//Ԥ����

//C�������õķ���

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

//#define����ע������

//���峣��
#define M 1000
//�����ʶ��
#define uint unsigned int
//����forѭ��
#define forever for(;;)
//�ӷֺ�
#define Pri printf("hehe");
//���з�
#define Debug_Print printf("%s\n%d\n%s\n%s",\
							__FILE__,__LINE__,\
							__DATE__,__TIME__)

//int main()
//{
//	printf("%d\n", M);
//	uint a = 10;
//	//forever//forѭ���е��ж�����Ϊ��ʱ��Ĭ��Ϊ�棬��ѭ��
//	//{
//	//printf("hehe");
//	//}
//		//if (1)
//		//	Pri;
//		//else//���˷ֺ�����else����һ���ǿ���䣬ʶ�𲻵�if��
//	Debug_Print;
//	return 0;
//}

//������ע������

#define MUL(a) ((a)*(a))
#define COMPARE(A,B) ((A++)>(B++)?(A++):(B++))
//int main()
//{
//	int a = MUL(10);
//	int b = MUL(5 + 1);
//	int c = MUL(a++);
//	float d = MUL(0.6f);
//	int e = MUL(MUL(5));//������ֵݹ�
//	printf("%d %d %d %f %d %d\n", a, b, c, d, e);
//	int f = 4;
//	int g = 6;
//	int h = COMPARE(f, g);
//	printf("%d %d %d\n", f, g, h);
//	return 0;
//}

//�괫������

#define MALLOC(num,type) ((type*)malloc(sizeof(type)*(num)))

//int main()
//{
//	char* a = MALLOC(10, char);
//	int* b = MALLOC(10, int);
//	return 0;
//}

//#��##���Ƴ��궨��
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

//��������

#define __DEBUG__
#define CONSTANT 1

//int main()
//{
//	int a[10] = { 0 };
//
//	for (int i = 0; i < 10; i++)
//	{
//		a[i] = i;
//		//ͨ������1�Ƿ񱻶����ж�
//#ifdef __DEBUG__
//		printf("ifdef=%d ", a[i]);
//#endif
//		//ͨ������2�Ƿ񱻶����ж�
//#if defined(__DEBUG__)
//		printf("define(__DEBUG__)=%d ", a[i]);
//#endif
//
//		//ͨ������ֵ�Ƿ�Ϊ���ж�
//#if CONSTANT
//		printf("if=%d ", a[i]);
//#endif
//
//		printf("\n");
//	}
//	return 0;
//}

//�����֧

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

//����Ƕ��

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

//ͷ�ļ������ظ�����1

#pragma once

//ͷ�ļ������ظ�����2
#ifndef MM
#define MM

//ͷ�ļ�����

#endif