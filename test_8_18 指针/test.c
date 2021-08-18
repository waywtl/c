#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//指针类型的两个意义
//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//
//	char* pc = &a;
//	*pc = 0;
//	//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//	//int* p ;*p能访问4个字节
//	//char* p;*p能访问1个字节
//	//double* p;*p能访问8个字节
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);     //003CFDD0
//	printf("%p\n", pa+1);   //003CFDD4
//
//	printf("%p\n", pc);     //003CFDD0
//	printf("%p\n", pc+1);   //003CFDD1
//	//指针类型决定了：指针走一步走多远（指针的步长）
//	//int* p; p+1-->4
//	//char* p; p+1-->1
//	//double* p; p+1-->8
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名-首元素的地址
//	//char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}


//野指针
//int main()
//{
//	int a;//局部变量不初始化，默认是随机值
//	int* p;//局部的指针变量，就被初始化为随机值
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for(i = 0; i < 12; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		p++;
//	}
//	return 0;
//}

//指针指向的空间释放
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//  *p = 20;
//	printf("%d\n", *p);
// 
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int* pa = &a;//初始化
//	//int* p = NULL;//NULL - 用来初始化指针，给指针赋值
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	//
//	pa = NULL;
//	if (pa != NULL)
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//9,中间元素的个数
//	//printf("%d\n", &arr[9] - &ch[0]);//err
//	return 0;
//}


//用指针-指针实现strlen
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//
//}
//int main()
//{
//	//strlen - 求字符串长度
//	//递归- 模拟实现strlen - 计数器的方式1，递归的方式2
//	//
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//指针与指针相比较
//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
//int main()
//{
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//    //允许拿数组最后一个元素后面的指针与其他元素指针比较，不允许拿数组第一个元素前一个指针与其他元素比较
//	{
//		*--vp = 0;
//	}
//	return 0;
//}

//指针和数组
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);// &arr取出的是整个数组的地址
//	printf("%p\n", &arr + 1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	  printf("%p ===== %p\n", p + i, &arr[i]);
//	//}
//	return 0;
//}

//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//	return 0;
//}

//指针数组 - 数组 - 存放指针的数组
//数组指针 - 指针

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//整型数组 - 存放整型
	//字符数组 - 存放字符
	//指针数组 - 存放指针
	//int arr[10];
	int* arr2[3] = { &a, &b, &c };//指针数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr2[i]));
	}
	return 0;
}