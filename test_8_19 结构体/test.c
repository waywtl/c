#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//描述一个学生-一些数据
//名字
//年龄
//电话
//性别

//struct 结构体关键字   Stu - 结构体标签  struct Stu - 结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3 是三个全局的结构体变量

//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	struct Stu s1 = {"张三",20,"16607292395","男"};//局部变量
//	Stu s2 = {"旺财",30,"15533226666","保密"};
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
//	//成员变量
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
//	Stu s = { "张三",20,"16607292395","男" };
//	//打印结构体数据
//	//Print1 和 Print2 哪个更好？
//  //当结构体较大时，形参的传递会在栈中开辟较大空间，使性能下降
//	Print1(s);
//  //结构体传参时要使用地址传参，只占用地址空间的大小
//	Print2(&s);
//
//	return 0;
//}
