#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

enum En
{
	ONE=2,
	TWO,
	THREE
};

void PRINTF(enum En en)
{
	switch (en)
	{
	case ONE:
		printf("hello1");
		break;
	case TWO:
		printf("hello2");
		break;
	case THREE:
		printf("hello3");
		break;
	/*case 3:
		printf("hello2");
		break;*/
	default:
		printf("hello4");
		break;
	}
}
int main()
{
	enum En en1=TWO;
	scanf("%d",&en1);
	PRINTF(en1); 
	return 0;
}