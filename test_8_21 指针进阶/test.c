#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//����ָ�� - ��ָ������ָ��- ��ź�����ַ��һ��ָ��

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
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//} 

//(*(void(*)())0)()  // ��0ǿ������ת����void(*)() ����ָ������ - 0����һ��������ַ
                     // ����0��ַ���ĺ���

//signal��һ����������
//signal�����Ĳ�������������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
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
//    //��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ������
//    int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ������
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        printf("%d\n", parr[i](2, 3));
//    }
//    return 0;
//}

//char* my_strcpy(char* dest, const char* src);
//дһ������ָ�� pf���ܹ�ָ��my_strcpy
//char* (*pf)(char*, const char*);
//дһ������ָ������ pfArr,�ܹ����4��my_strcpy�����ĵ�ַ
//char* (*pfArr[4])(char*, const char*);

//������

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
//        printf("��ѡ��:>");
//        scanf("%d", &input);
//        if (input >= 1 && input <= 4)
//        {
//            printf("����������������:>");
//            scanf("%d%d", &x, &y);
//            int ret = pfArr[input](x,y);
//            printf("%d\n", ret);
//        }
//        else if (input == 0)
//        {
//            printf("�˳�\n");
//        }
//        else
//        {
//            printf("ѡ�����\n");
//        }
//    } while (input);
//    return 0;
//}

//void Calc(int(*pf)(int,int))
//{
//    int x = 0;
//    int y = 0;
//    printf("����������������:>");
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
//        printf("��ѡ��:>");
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
//            printf("�˳�\n");
//            break;
//        default:
//            printf("ѡ�����\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}

//ָ����ָ�������ָ��
//int main()
//{
//    int arr[10] = { 0 };
//    int(*p)[10] = &arr;//ȡ������ĵ�ַ
//
//    int (*pfArr[4])(int, int);//pfArr��һ������-����ָ������
//    //ppfArr��һ��ָ����ָ�������ָ��
//    int(*(*ppfArr)[4])(int, int) = &pfArr;
//
//    //ppfArr ��һ������ָ�룬ָ��ָ���������4��Ԫ��
//    //ÿ��Ԫ�ص�������һ������ָ��
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
    //�Ƚ����־��ǱȽ��ַ���
    //�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ����strcmp����
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
    //��һ���������������������Ԫ�ص�ַ
    //�ڶ��������������������Ԫ�ظ���
    //�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
    //���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
    //           ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ

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
//    //void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
//    //void* ���͵�ָ�벻�ܽ��н����ò���
//    //void* ���͵�ָ�� ���ܽ���+-�����Ĳ���
//    return 0;
//}