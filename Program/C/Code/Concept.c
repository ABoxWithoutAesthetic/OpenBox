#include <stdio.h>//stdio:stand input output
#include <string.h>//测量字符串长度的头文件
//main函数的类型


//int:整型，表示main函数结束的时候会返回一个整数，即return 0
//int main()
//{
//	return 0;
//	
//}


//表示不需要传参
//int main(void)
//{
//	return 0;
//}


//表示可以传参，但是main函数的参数是具有特殊意义的
//int main(int argc,char* argv[])
//{
//	return 0;
//}

//比较古老的写法，不返回值
//void main()
//{
//
//}


//打印字符串、整数、整型、浮点数
//int main()
//{
//	printf("%s\n","Hello World");//字符串,可以不加前缀修饰
//	printf("%d\n",100);//整数
//	printf("%d\n", 'a');//字符,97，ASCII也是一样的
//	printf("%c\n", 97);
//	printf("%f\n", 3.14);//小数，默认六位
//	return 0;
//}

//打印ASCII码
//int main()
//{
//	//大写字母A~Z
//	for (int i=65;i<91;i++)
//	{
//		printf("%c ",i);
//	}
//	printf("\n");
//	//小写字母a~z
//	for (int i = 97; i < 123; i++)
//	{
//		printf("%c ", i);
//	}
//	printf("\n");
//	//打印阿拉伯数字0~9
//	for (int i = 48; i < 58; i++)
//	{
//		printf("%c ", i);
//	}
//	printf("\n");
//	//打印结束符\n，但是0~31的ASCII打印不会显示
//	printf("%c\n", 10);
//	return 0;
//}

//测量字符串长度
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = {'h','e','l','l','o'};
//	char arr3[] = { 'h','e','l','l','o','\0'};//\0为结束符，字符串默认最后会有一个\0作为结束符
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	printf("%s\n",arr3);
//	//strlen()函数需要string.h头文件
//	printf("%zd\n",strlen(arr1));
//	printf("%zd\n", strlen(arr2));
//	printf("%zd\n", strlen(arr3));
//	return 0;
//}

//测试转义字符
//int main()
//{
//	printf("\`\n");
//	printf("\"\n");
//	printf("\?\n");
//	printf("\\\n");//打印路径时用
//	printf("abcd\bef\n");//光标退一格
//	printf("abcd\refghijk\n");//光标退格到本行的第一个
//	printf("abcd\tefghijk\n");//光标移动到本行的下一个4/8的倍数的位置
//	printf("%c\n",'\120');//\ddd,八进制ASCII码
//	printf("%c\n", '\x40');//\xdd,十六进制ASCII码
//	char testStr[] = "abcdef\bgh\rijk\t\n";
//	printf(testStr, "\n");
//	printf("%zd\n",strlen(testStr));//虽然testStr字符串中的转义字符各有功能，但是仍然计算在字符串长度内
//	return 0;
//}
