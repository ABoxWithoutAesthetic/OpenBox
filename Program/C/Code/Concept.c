#include <stdio.h>//stdio:stand input output
#include <string.h>//�����ַ������ȵ�ͷ�ļ�
//main����������


//int:���ͣ���ʾmain����������ʱ��᷵��һ����������return 0
//int main()
//{
//	return 0;
//	
//}


//��ʾ����Ҫ����
//int main(void)
//{
//	return 0;
//}


//��ʾ���Դ��Σ�����main�����Ĳ����Ǿ������������
//int main(int argc,char* argv[])
//{
//	return 0;
//}

//�ȽϹ��ϵ�д����������ֵ
//void main()
//{
//
//}


//��ӡ�ַ��������������͡�������
//int main()
//{
//	printf("%s\n","Hello World");//�ַ���,���Բ���ǰ׺����
//	printf("%d\n",100);//����
//	printf("%d\n", 'a');//�ַ�,97��ASCIIҲ��һ����
//	printf("%c\n", 97);
//	printf("%f\n", 3.14);//С����Ĭ����λ
//	return 0;
//}

//��ӡASCII��
//int main()
//{
//	//��д��ĸA~Z
//	for (int i=65;i<91;i++)
//	{
//		printf("%c ",i);
//	}
//	printf("\n");
//	//Сд��ĸa~z
//	for (int i = 97; i < 123; i++)
//	{
//		printf("%c ", i);
//	}
//	printf("\n");
//	//��ӡ����������0~9
//	for (int i = 48; i < 58; i++)
//	{
//		printf("%c ", i);
//	}
//	printf("\n");
//	//��ӡ������\n������0~31��ASCII��ӡ������ʾ
//	printf("%c\n", 10);
//	return 0;
//}

//�����ַ�������
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = {'h','e','l','l','o'};
//	char arr3[] = { 'h','e','l','l','o','\0'};//\0Ϊ���������ַ���Ĭ��������һ��\0��Ϊ������
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	printf("%s\n",arr3);
//	//strlen()������Ҫstring.hͷ�ļ�
//	printf("%zd\n",strlen(arr1));
//	printf("%zd\n", strlen(arr2));
//	printf("%zd\n", strlen(arr3));
//	return 0;
//}

//����ת���ַ�
//int main()
//{
//	printf("\`\n");
//	printf("\"\n");
//	printf("\?\n");
//	printf("\\\n");//��ӡ·��ʱ��
//	printf("abcd\bef\n");//�����һ��
//	printf("abcd\refghijk\n");//����˸񵽱��еĵ�һ��
//	printf("abcd\tefghijk\n");//����ƶ������е���һ��4/8�ı�����λ��
//	printf("%c\n",'\120');//\ddd,�˽���ASCII��
//	printf("%c\n", '\x40');//\xdd,ʮ������ASCII��
//	char testStr[] = "abcdef\bgh\rijk\t\n";
//	printf(testStr, "\n");
//	printf("%zd\n",strlen(testStr));//��ȻtestStr�ַ����е�ת���ַ����й��ܣ�������Ȼ�������ַ���������
//	return 0;
//}
