#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//带副作用的宏参数

//#define MAX(X, Y)  ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	int max = MAX(a++, b++);
//	//int max = ((a++) > (b++) ? (a++) : (b++));
//
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//
//	return 0;
//}

//宏函数和函数对比

//函数
//float Max2(float x, float y)
//{
//	return (x > y ? x : y);
//}

//宏
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//
//int main() 
//{
//	int a = 10;
//	int b = 20;
//	float c = 3.0f;
//	float d = 4.0f;
//	//函数在调用的时候
//	//会有函数调用和返回的开销
//	//
//	float max = Max2(c, d);
//	printf("max = %f\n", max);
//	//预处理阶段就完成了替换
//	//没有函数的调用和返回的开销 
//	max = MAX(c, d);
//	printf("max = %f\n", max);
//	return 0;
//}

//undef - 移除一个宏定义

//条件编译

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1+1
//        printf("%d ", arr[i]);
//#endif
//	}
//
//	return 0;
//}

//#define DEBUG

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//
//	return 0;
//}

//#define DEBUG 0

//int main()
//{
////#if defined(DEBUG)
////	printf("hehe\n");
////#endif
//
////#ifdef DEBUG
////	printf("hehe\n");
////#endif
//
////#if !defined(DEBUG)
////	printf("hehe\n");
////#endif
//
////#ifndef DEBUG
////	printf("hehe\n");
////#endif
//	return 0;
//}

//offsetof的模拟实现

//#include <stddef.h>

#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)

struct S
{
	char c1;
	int a;
	char c2;
};

int main()
{
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, c2));
	return 0;
}