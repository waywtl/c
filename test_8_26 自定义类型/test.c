#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//λ�� - ������λ

//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
////47bit - 6���ֽ�
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8���ֽ�
//	return 0;
//}

//λ�� - ��ʡ�ռ䣬����ƽ̨��������

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	//1010    010
//	s.b = 20;
//	//10100   0100
//	s.c = 3;
//	//011     00011
//	s.d = 4;
//	//100     0100
//
//	//0 0100 010  000 00011  0000 0100 - ʵ�ʷ���
//	//0010 0010 0000 0011 0000 0100 - ʵ�ʶ�ȡ
//	//22 03 04
//	return 0;
//}

//ö��

//ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ-ö�ٳ���
//	MALE,
//	FEMALE,
//	SECRET
//};

//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};

//int main()
//{
//	//enum Sex s = MALE;//�ڴ��СΪ���͵Ĵ�С
//	enum Color c = BLUE;
//	//printf("%d %d %d\n", RED, GREEN, BLUE);
//	//printf("%d %d %d\n", MALE, FEMALE, SECRET);
//
//	return 0;
//}

//����-������-������

//union Un
//{
//	char c;
//	int i;
//};

//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	printf("%p\n", &u);
//
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}


//�����������жϴ�С��
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}

//int main()
//{
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//���Ϻ����С�ļ���

union Un
{
	int a;//4 8 4 - 4
	char arr[5];//5 8 1 - 1
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));

	return 0;
}