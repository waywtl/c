#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	const char* p = "abcdef";//"abcdef"是一个常量字符串
//	//*p = 'w';
//	//printf("%c\n", *p);//a  *p指向了首元素的地址故解引用是首元素
//	printf("%s\n", p);//abcdef
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";//常量字符串不可被更改，两份都用同一个地址存在静态区
//	const char* p2 = "abcdef";//首元素地址相同,故打印hehe
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//典中典
//int main()
//{
//	const char arr1[] = "abc";
//	const char arr2[] = "abc";
//	//arr1与arr2的地址不同
//	const char* p1 = "abc";
//	const char* p2 = "abc";
//	//p1与p2的地址相同
//	return 0;
//}

//指针数组
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//数组的地址要存起来
//	//上面的p就是数组指针
//
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}

void Print(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", p[i][j]);
			printf("%d ", *(p[i] + j));
			printf("%d ", *(*(p + i) + j));
			printf("%d ", (*(p + i))[j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	Print(arr, 3, 5);//arr - 数组名是首元素地址，而二维数组的首元素是第一行的数组,故传参时可以用数组指针
	return 0;
}

//数组指针数组   int(*arr[10])[5]