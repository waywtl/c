#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//结构体自引用
// 
//struct Node
//{
//	int date;
//	struct Node* next;
//};

//结构体重命名
//
//typedef struct Node
//{
//	int date;
//	struct Node* next;
//}Node;

//结构体内存对齐

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	//struct S1 s1 = { 0 };
//	//printf("%d\n", sizeof(s1));
//	//struct S2 s2 = { 0 };
//	//printf("%d\n", sizeof(s2));
//	//struct S3 s3 = { 0 };
//	//printf("%d\n", sizeof(s3));
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));
//	return 0;
//}

//修改默认对齐数

////设置默认对齐数为4
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
////#pragma pack()
////取消设置的默认对齐数
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//offsetof - 宏
//计算结构体成员的偏移量

#include <stddef.h>

//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}

//结构体传参

struct S
{
	int a;
	char c;
	double d;
};

//void Init(struct S tmp)
//{
//	tmp.a = 100;
//	tmp.c = 'w';
//	tmp.d = 3.14;
//}

//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}

void Init(struct S* ps)
{
	ps->a = 100;
	ps->c = 'w';
	ps->d = 3.14;
}

void Print2(const struct S* ps)
{
	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
}

int main()
{
	struct S s;
	//值传递，不会对原有 s 进行改变
	//Init(s);
	//Print1(s);

	//址传递，会改变原有 s 
	//更优，省空间
	Init(&s);
	Print2(&s);

	return 0;
}