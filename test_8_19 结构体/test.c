#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����һ��ѧ��-һЩ����
//����
//����
//�绰
//�Ա�

//struct �ṹ��ؼ���   Stu - �ṹ���ǩ  struct Stu - �ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3 ������ȫ�ֵĽṹ�����

//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	struct Stu s1 = {"����",20,"16607292395","��"};//�ֲ�����
//	Stu s2 = {"����",30,"15533226666","����"};
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit";
//	struct T t = { "hehe",{100,'w',"hello world",5.20},arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
//
//void Print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex: %s\n", ps->sex);
//}
//
//int main()
//{
//	Stu s = { "����",20,"16607292395","��" };
//	//��ӡ�ṹ������
//	//Print1 �� Print2 �ĸ����ã�
//  //���ṹ��ϴ�ʱ���βεĴ��ݻ���ջ�п��ٽϴ�ռ䣬ʹ�����½�
//	Print1(s);
//  //�ṹ�崫��ʱҪʹ�õ�ַ���Σ�ֻռ�õ�ַ�ռ�Ĵ�С
//	Print2(&s);
//
//	return 0;
//}
