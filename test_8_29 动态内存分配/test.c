#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//realloc 可以当malloc用
//int main()
//{
//	int* p = realloc(NULL, 40);//malloc
//	return 0;
//}

//常见错误 
//int main()
//{
	//1.对NULL指针解引用操作
	//int* p = malloc(40);
	//对p进行相关判断
	//*p = 10;
	//malloc开辟空间失败-对NULL指针解引用

	//2.对动态开辟内存的越界访问
	//int* p = malloc(40);//10个int 0-9
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	////越界
	//for (i = 0; i <= 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;

	//3.对非动态开辟内存使用free释放
	//int a = 10;
	//int* p = &a;
	////对非动态开辟内存使用free释放
	//free(p);
	//p = NULL;

	//4.使用free释放动态开辟内存的一部分
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*p++ = i;
	//}
	////回收空间
	//free(p);
	//p = NULL;

	//5.对同一块动态内存多次释放
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	////使用
	////释放
	//free(p);
	//p = NULL;

	//free(p);

	//6.动态开辟内存忘记释放（内存泄漏）
	//while (1)
	//{
	//	malloc(1);
	//}

	//return 0;
//}

//几个经典的笔试题

//1.
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//  GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//2.
//void GetMemory(char** p,int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//  GetMemory(&str,100);
//	strcpy(str, "hello");
//	printf(str);
//	//忘记释放动态开辟的内存，导致内存泄露
//	//free(str);
//	//str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//3.

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free释放str指向的空间后，并不会把str置为NULL
//	//str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//柔性数组 - 在结构体的末尾允许存在未知大小的数组成员
//1.方便内存释放
//2.有利于访问速度

//struct S
//{
//	int n;
//	int arr[0];//未知大小
// //用sizeof计算大小时，不计柔性数组的大小
//};

//struct S
//{
//	int n;
//	int arr[];//未知大小的-柔性数组成员-数组的大小是可以调整的
//};
//
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	return 0;
//}