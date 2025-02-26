#include <stdio.h>
#include <string.h>
#include <assert.h>

void* my_memcpy(void* p1,const void*p2,size_t num)
{
	assert(p1&&p2);
	void* ret = p1;
	while (num--)
	{
		*(char*)p1 = *(char*)p2;
		p1 = (char*)p1 + 1;
		p2 = (char*)p2 + 1;
	}
	return ret;
}

//int main()
//{
//	int arr1[50] = {9,8,7,6,5,4,3,2,1,0};
//	int arr2[20] = {1,2,4,8,9};
//	//memcpy(arr1, arr2, 17);
//	my_memcpy(arr1,arr2,17);
//	return 0;
//}

//memmove

void* my_memmove(void* p1,const void* p2,size_t num)
{
	assert(p1&&p2);
	void* ret=p1;
	if (p1<p2)
	{
		while (num--)
		{
			*(char*)p1 = *(char*)p2;
			p1 = (char*)p1 + 1;
			p2 = (char*)p2 + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)p1+num) = *((char*)p2+num);
		}
	}
	return ret;
}

//int main()
//{
//	int arr1[50] = { 9,8,7,6,5,4,3,2,1,0 };
//	//memmove(arr1+2, arr1, 20);
//	my_memmove(arr1, arr1+2, 20);
//	return 0;
//}


//memset

void* my_memset(void* p1,int value,size_t num)
{
	assert(p1);
	void* ret = p1;
	while (num--)
	{
		*((char*)p1) = value;
		p1 = (char*)p1 + 1;
	}
	
	return ret;
}

//int main()
//{
//	char arr1[20] = "helloworld123456789";
//	memset(arr1+10,97,8);
//	printf("%s\n", arr1);
//	my_memset(arr1+10,98,8);
//	printf("%s\n",arr1);
//	return 0;
//}



//memcmp

int my_memcmp(const void *p1,const void *p2,size_t num)
{
	assert(p1&&p2);
	while (num--)
	{
		if (*((char*)p1)-*((char*)p2))
		{
			return *((char*)p1) - *((char*)p2);
		}
		else
		{
			p1 = (char*)p1 + 1;
			p2 = (char*)p2 + 1;
		}
	}
	return 0;
}

int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = "abcdef";
	printf("%d\n", memcmp(arr1, arr2, 11));
	printf("%d\n", my_memcmp(arr1, arr2, 11));
	return 0;
}