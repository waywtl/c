#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�ṹ��������
// 
//struct Node
//{
//	int date;
//	struct Node* next;
//};

//�ṹ��������
//
//typedef struct Node
//{
//	int date;
//	struct Node* next;
//}Node;

//�ṹ���ڴ����

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

//�޸�Ĭ�϶�����

////����Ĭ�϶�����Ϊ4
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
////#pragma pack()
////ȡ�����õ�Ĭ�϶�����
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//offsetof - ��
//����ṹ���Ա��ƫ����

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

//�ṹ�崫��

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
	//ֵ���ݣ������ԭ�� s ���иı�
	//Init(s);
	//Print1(s);

	//ַ���ݣ���ı�ԭ�� s 
	//���ţ�ʡ�ռ�
	Init(&s);
	Print2(&s);

	return 0;
}