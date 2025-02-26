#include <stdio.h>

int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	c = add(a,b);
	printf("%d",c);
	return 0;
}