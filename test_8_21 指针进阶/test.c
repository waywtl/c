#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//函数指针 - 是指向函数的指针- 存放函数地址的一个指针

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//&函数名 和 函数名 都是函数的地址
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//} 

//(*(void(*)())0)()  // 把0强制类型转换：void(*)() 函数指针类型 - 0就是一个函数地址
                     // 调用0地址处的函数

//signal是一个函数声明
//signal函数的参数有两个，第一个是int，第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
//signal函数的返回类型也是一个函数指针，该函数指针指向的函数的参数是int，返回类型是void
//void(*signal(int, void(*)(int)))(int)
//
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_y);

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", pa(a, b));
//	printf("%d\n", (*pa)(a, b));
//	printf("%d\n", (**pa)(a, b));
//}

//int Add(int x, int y)
//{
//    return x + y;
//}
//
//int Sub(int x, int y)
//{
//    return x - y;
//}
//
//int Mul(int x, int y)
//{
//    return x * y;
//}
//
//int Div(int x, int y)
//{
//    return x / y;
//}
//
//int main()
//{
//    //需要一个数组，这个数组可以存放4个函数的地址 - 函数指针数组
//    int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针数组
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        printf("%d\n", parr[i](2, 3));
//    }
//    return 0;
//}

//char* my_strcpy(char* dest, const char* src);
//写一个函数指针 pf，能够指向my_strcpy
//char* (*pf)(char*, const char*);
//写一个函数指针数组 pfArr,能够存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char*, const char*);

//计算器

//void menu()
//{
//    printf("************************\n");
//    printf("*** 1.add      2.sub ***\n");
//    printf("*** 3.mul      4.dvi ***\n");
//    printf("***      0.exit      ***\n");
//    printf("************************\n");
//}
//
//int Add(int x, int y)
//{
//    return x + y;
//}
//
//int Sub(int x, int y)
//{
//    return x - y;
//}
//
//int Mul(int x, int y)
//{
//    return x * y;
//}
//
//int Div(int x, int y)
//{
//    return x / y;
//}

//int main()
//{
//    int input = 0;
//    int x = 0;
//    int y = 0;
//    int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//    do
//    {
//        menu();
//        printf("请选择:>");
//        scanf("%d", &input);
//        if (input >= 1 && input <= 4)
//        {
//            printf("请输入两个操作数:>");
//            scanf("%d%d", &x, &y);
//            int ret = pfArr[input](x,y);
//            printf("%d\n", ret);
//        }
//        else if (input == 0)
//        {
//            printf("退出\n");
//        }
//        else
//        {
//            printf("选择错误\n");
//        }
//    } while (input);
//    return 0;
//}

//void Calc(int(*pf)(int,int))
//{
//    int x = 0;
//    int y = 0;
//    printf("请输入两个操作数:>");
//    scanf("%d%d", &x, &y);
//    printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//    int input = 0;
//    do
//    {
//        menu();
//        printf("请选择:>");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            Calc(Add);
//            break;
//        case 2:
//            Calc(Sub);
//            break;
//        case 3:
//            Calc(Mul);
//            break;
//        case 4:
//            Calc(Div);
//            break;
//        case 0:
//            printf("退出\n");
//            break;
//        default:
//            printf("选择错误\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}

//指向函数指针数组的指针
//int main()
//{
//    int arr[10] = { 0 };
//    int(*p)[10] = &arr;//取出数组的地址
//
//    int (*pfArr[4])(int, int);//pfArr是一个数组-函数指针数组
//    //ppfArr是一个指向函数指针数组的指针
//    int(*(*ppfArr)[4])(int, int) = &pfArr;
//
//    //ppfArr 是一个数组指针，指针指向的数组有4个元素
//    //每个元素的类型是一个函数指针
//    return 0;
//}

#include <stdlib.h>
#include <string.h>

struct Stu
{
    char name[20];
    int age;
};

//void qsort(void* base,
//           size_t num, 
//           size_t width, 
//           int(*cmp)(const void* e1, const void* e2));

int cmp_int(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}

int cmp_float(const void* e1, const void* e2)
{
    return ((int)(*(float*)e1 - *(float*)e2));
}


int cmp_stu_by_age(const void* e1, const void* e2)
{
    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
    //比较名字就是比较字符串
    //字符串比较不能直接用><=来比较，应该用strcmp函数
    return strcmp(((struct Stu*)e2)->name, ((struct Stu*)e2)->name);
}



int main()
{
    int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, sz, sizeof(arr[0]), cmp_int);

    float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
    int sz = sizeof(f) / sizeof(f[0]);
    qsort(f, sz, sizeof(f[0]), cmp_float);

    struct Stu s[3] = { {"zhangsan",20},{"lisi",21},{"wangwu",22} };
    int sz = sizeof(s) / sizeof(s[0]);
    qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);

    struct Stu s[3] = { {"zhangsan",20},{"lisi",21},{"wangwu",22} };
    int sz = sizeof(s) / sizeof(s[0]);
    qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
    //第一个参数：待排序数组的首元素地址
    //第二个参数：待排序数组的元素个数
    //第三个参数：待排序数组的每个元素的大小-单位是字节
    //第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
    //           函数指针的两个参数是：待比较的两个元素的地址

}

//int main()
//{
//    int a = 10;
//    //int* pa = &a;
//    //char* pc = &a;
//
//    void* p = &a;
//    //*p = 0;
//    p++;
//
//    //void* 类型的指针 可以接受任意类型的地址
//    //void* 类型的指针不能进行解引用操作
//    //void* 类型的指针 不能进行+-整数的操作
//    return 0;
//}