#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>


//if���
//int main()
//{
//	//18 45 60 89 90
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("�����������");
//	else if (age <= 45)
//		printf("�����������");
//	else if (age <= 60)
//		printf("�����������");
//	else if (age <= 89)
//		printf("�����������");
//	else
//		printf("�������������");
//	//elseֻ���������ifƥ�䣬ͬʱif else����һ����䣬��������Ȳ����ӡhaha��Ҳ�����ӡhehe
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		//;�Ӹ��ֺž��Ƶ���
//	if (b == 2)
//		printf("hehe");
//	else
//		printf("haha");
//	//��������д
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe");
//		else
//			printf("haha");
//	}
//	else
//	{
//		printf("hello");
//	}
//
//	return 0;
//}

//�߼������

//int main()
//{
//	//��������
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	a = 5;
//	b = 3;
//	c = 4;
//	if (a < b < c)//�����߼��ǣ�a<bΪ�٣����Ϊ0,0<c���������õĽ��Ϊ��
//		printf("%s\n","hehe");
//	c = -1;
//	if (a < b < c)//��c��Ϊ-1��Ϊ����
//		printf("%s\n", "hehe1");
//	else
//		printf("%s\n","haha");
//
//	//��Ŀ������
//	a = 0;
//	b = 2;
//	c = 3;
//	int d = (!a) ? (b-c) : (b+c);
//	printf("%d\n",d);
//
//	//�����ֵ
//	scanf("%d %d",&a,&b);
//	if (a > b)
//		printf("a��ֵΪ%d���Ƚϴ�\n",a);
//	else
//		printf("b��ֵΪ%d���Ƚϴ�\n", b);
//
//	//�ж��Ƿ�Ϊ���� �ܱ�4�������ǲ��ܱ�100���������߿��Ա�400����
//	int year = 0;
//	scanf("%d",&year);
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		printf("%d������\n",year);
//	else
//		printf("%d��������\n", year);
//
//	//��·,���������в����������ľͲ�ִ�к���ģ���������Ϊ�棬��ִ�к����
//	a = 1;
//	b = -1;
//	c = 2;
//	int i = a++ && ++b && c++;
//	printf("%d %d %d %d",i,a,b,c);
//	return 0;
//}

//switch

//int main()
//{
//	//����0~5��ʾ�����գ�6~7��ʾ��Ϣ��
//	int a = 0;
//	scanf("%d",&a);
//	switch (a)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("����%d�ǹ�����", a);
//		break;
//	case 6:
//	case 7:
//		printf("����%d����Ϣ��", a);
//		break;
//	default:
//		printf("��������ȷ������");
//		break;//defaultҲҪ��break
//	}
//	return 0;
//}

//while


//int main()
//{
//	int i = 0;
//	while (i<=10)
//	{
//		printf("%d ", i++);
//		if (i == 11)
//			printf("\n");
//	}
//	i = 0;
//	while (i <= 10)
//	{
//		printf("%d ", ++i);
//	}
//
//	//�����ӡ
//	int num = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		printf("%d", num % 10);
//		num /= 10;
//
//	}
//
//	return 0;
//}

//�ܱ�3�����ĺ�


//int main()
//{
//	int sum = 0;
//	for (int i = 3; i <= 10; i += 3)
//	{
//		sum += i;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//�ж��Ǽ�λ��


//int main()
//{
//	
//	int i = 0;
//	int num = 0;
//	scanf("%d",&num);
//	do
//	{
//		i++;
//		num /= 10;
//	}
//	while (num);
//	printf("%d",i);
//	return 0;
//}

//break,continue�ؼ���


//int main()
//{
//	for (int i = 0; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			printf("hh\n");
//			break;
//		}
//		printf("%d ",i);
//	}
//	for (int i = 0; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		if (i == 10)
//			printf("\n");
//	}
//	int i = -1;
//	while (i < 10)
//	{
//		i++;//����ŵ�continue����������ѭ��
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//goto��������ѭ��Ƕ��


//int main()
//{
//		for (int i = 0; i <= 3; i++)
//		{
//			printf("%d\n",i);
//			for (int j = 0; j <= 3; j++)
//			{
//				for (int k = 0; k <= 3; k++)
//				{
//					for (int l = 0; l <= 3; l++)
//					{
//						printf("%d\n", l);
//						if (l == 1)
//							goto end;
//					}
//				}
//			}
//		}
//	end:
//		printf("ѭ������");
//	return 0;
//}

//�ж�����,��������a��ֻ�ܱ�1��a����

void GetPriNum1(int a)
{
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			printf("a��������\n");
			goto end;
		}
	}
	printf("a������\n");
end:;
}

void GetPriNum2(int a)
{
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			return;
		}
	}
	printf("%d ",a);
}

void PrefGetPriNum(int a)
{
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
		{
			return;
		}
	}
	printf("%d ", a);
}

void PrintPriNum()
{
	int Min = 0;
	int Max = 0;
	scanf("%d %d", &Min,&Max);
	for (int i = Min; i <= Max; i++)
	{
		GetPriNum2(i);
	}
}

void PrefPrintPriNum()
{
	int Min = 0;
	int Max = 0;
	scanf("%d %d", &Min, &Max);
	if (Min%2==0)
	{
		Min++;
	}
	for (int i = Min; i <= Max; i+=2)//ż�����������������Ż�һ
	{
		if (i > Max)
		{
			return;
		}
		PrefGetPriNum(i);
	}

}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	GetPriNum1(a);
//
//	////��ӡ100~200֮�������
//	PrintPriNum();
//	printf("\n");
//	////�������Ż�
//	PrefPrintPriNum();
//
//	return 0;
//}

//��������Ϸ


void Menu()
{
	printf("***********Play***********\n");
	printf("***********Quit***********\n");
}
void PlayGame(int LocalrandNum)
{
	int input = 0;
	int anwser = 1;
	while(anwser)
	{
		printf("���������µ���ֵ��");
		scanf("%d",&input);
		if (input==LocalrandNum)
		{
			printf("��ϲ��¶���\n");
			anwser = 0;
		}
		else if (input < LocalrandNum)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�´���\n");
		}
	}
}
#include <math.h>
//int main()
//{
//	int start = 1;
//	int play = 0;
//	srand((unsigned int)time(NULL));//��ʱ�������������
//	int randNum = rand()%100+1;
//	while (start)
//	{
//		Menu();
//		scanf("%d",&play);
//		switch (play)
//		{
//		case 0:
//			printf("������Ϸ\n");
//			start = 0;
//			break;
//		case 1:
//			PlayGame(randNum);
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	}
//	return 0;
//}

//�ػ�



#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char input [20] = "0";
//	system("shutdown -s -t 120");
//again:
//	printf("�����룺helloworld�����򽫻���120���ػ�");
//	scanf("%s",input);
//	if (strcmp("helloworld", input) == 0)//strcmp�Ƚ��ַ�������ȷ���ֵΪ0
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		//system("shutdown -a");
//		goto again;
//	}
//
//	return 0;
//}