#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>
#include <assert.h>


//�����ṹ��

//struct student
//{
//	char name[50];
//	float height;
//	int age;
//}stu1, stu2 = { "����",1.78f,27};
//
//int main()
//{
//	struct student stu3 = { "����ŵ",1.78f,28 };
//	printf("%s %s %s\n",stu1.name,stu2.name,stu3.name);
//	printf("%f %f %f\n", stu1.height, stu2.height, stu3.height);
//	printf("%d %d %d\n", stu1.age, stu2.age, stu3.age);
//	return 0;
//}


//�ṹ���ʼ��

//struct student
//{
//	char name[50];
//	float height;
//	int age;
//};
//
//int main()
//{
//	struct student stu1 = {"wangding",1.78f,27};
//	struct student stu2 = {.height=1.78f,.name="wangyunuo"};
//	printf("%s %s\n", stu1.name, stu2.name);
//	printf("%f %f\n", stu1.height, stu2.height);
//	printf("%d %d\n", stu1.age, stu2.age);
//	return 0;
//}


//�����ṹ��

//struct S
//{
//	int a;
//	int b;
//	float c;
//}test1, test2; *p1 = &test1;
//// ָ��test1��ָ��;
//
//
//struct 
//{
//	int a;
//	int b;
//	float c;
//}test3, test4 = {1,1,0.5f}, 
//
//* p2 = 
//&(
//	struct
//{
//	int a;
//	int b;
//	float c;
//}
//) 
//{1, 1, 0.5f}; 
//// ʹ�ø������������г�ʼ��;
//
//
////test3,4��test1,2������ͬһ����
//int main()
//{
//	//test1 = {1,1,1.0f};�Ѿ����ܳ�ʼ���ˣ������Ѿ������ˣ�����ֻ�ܶԱ���������ֵ
//	test1.a = 200;
//	printf("test2 %d %d %.3f\n",test2.a,test2.b,test2.c);
//	printf("test1 %d %d %.3f\n", test1.a, test1.b, test1.c);
//	//printf("*p1 %d %d %.3f\n", p1->a, p1->b, p1->c);
//	return 0;
//}


//�ṹ���������

//struct student
//{
//	int a;
//	struct student *p1;
//};
//
////�������ṹ��������
//typedef struct  
//{
//	int a;
//	struct teacher* p2;
//	//sTeahcer * p3��//������δ����
//} 
//sTeacher;
//
//sTeacher * p4��//Ҫ������


//������

//��ϰ1
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
////��ϰ2
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
////��ϰ3
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
////��ϰ4-�ṹ��Ƕ������
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};


//int main()
//{
//	printf("%d\n", sizeof(struct S1));//12
//	printf("%d\n", sizeof(struct S2));//8
//	printf("%d\n", sizeof(struct S3));//16
//	printf("%d\n", sizeof(struct S4));//32,��Ҫ������Ƕ�ṹ��Ĵ�С��16
//	return 0;
//}


//�Զ��������

//#pragma pack(1)
//struct S
//{
//	char a;//1  1  1
//	int b;//8 1 1
//	char c;//1  1   1
//};

/*nt main()
{
	int a = 0x11223344;
	struct  S s1;
	printf("%zd\n",sizeof(s1));
	printf("%zd\n",offsetof(struct S,a));
	return 0;
}*/



//�ṹ�崫��


//struct S
//{
//	int a[1000];
//	char b;
//};
//
//void printf1(struct	S s1)
//{
//	printf("%c\n", s1.b);
//}
//
//void printf2(struct S* p)
//{
//	printf("%c\n", p->b);
//}
//
//int main()
//{
//	struct S s1 = { {1,2,3,4},97 };
//	printf1(s1);
//	printf2(&s1);
//	return 0;
//}


//λ�εĶ���

struct S1
{
	int a : 3;
	unsigned int b : 5;
	signed int c : 30;
	signed int d : 12;
};
struct S2
{
	int e : 31;
	unsigned int f :30;
	signed int g : 2;
};
struct S3
{
	int h : 1;
	unsigned int i : 1;
	signed int j : 1;
	signed int k : 1;
};
struct S4
{
	int h : 1;
	/*unsigned int i : 1;
	signed int j : 1;
	signed int k : 1;*/
};

int main()
{
	printf("%zd\n",sizeof(struct S1));
	printf("%zd\n", sizeof(struct S2));
	printf("%zd\n", sizeof(struct S3));
	printf("%zd\n", sizeof(struct S4));
	struct S1 SS1 = { 1,2,1,2 };
	int ff = 0;
	scanf("%d",&ff);
	//scanf("%d",&SS1.a);//ȡ��ַ�ᱨ��
	SS1.b = ff;
	printf("%d",SS1.b);
	
	return 0;
}