#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");//死循环打印hehe
//		arr[i] = 0;
//		//1.栈区的默认使用：先使用高地址处的空间，再使用低地址处的空间
//		//2.数组随着下标的增长，地址时由低到高变化
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//
//	return 0;
//}
//
//#include<string.h>
//int main()
//{
//	char arr1[] = "##############";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);//拷贝时，把arr2中字符串后面隐藏的'\0'也拷贝过去，导致打印完bit后停止
//	printf("%s\n", arr1);
//	return 0;
//}


//实现strcpy函数

void my_strcpy(char* dest, char* src)
{
	while (*src != '\0')
	{
		*dest = *src;
		*src++;
		*dest++;
	}
	*dest = *src;//'\0'
}

void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++)
	{
		;
	}
}

void my_strcpy(char* dest, char* src)
{
	if (dest != NULL && src != NULL)
	{
		while (*dest++ = *src++)
		{
			;
		}
	}
}

#include<assert.h>

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);//断言
	assert(src != NULL);//断言
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "##############";
	char arr2[] = "bit";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}

//int main()
//{
//	const int num = 10;
//
//	const int* p = &num;
//	*p = 20;//err 
//	//const 放在指针变量* 的左边时，修饰的是* p，也就是说：不能通过p来改变* p(num)的值
//
//	int* const p = &num;
//	int n = 100;
//	p = &n;//err
//	//const 放在指针变量* 的右边时，修饰的是指针变量p本身，也就是说：p不能被改变了
//
//	const int* const p = &num;
//	//此时*p与p都不能被修改
//
//	return 0;
//}


//模拟实现strlen的满分形式

int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}