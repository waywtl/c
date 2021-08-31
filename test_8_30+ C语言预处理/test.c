#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//预定义符号

//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//
//	//写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%s\n", __FUNCTION__);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", __STDC__);
//	return 0;
//}

//#define
//#define定义宏

//#define SQUARE(X) (X)*(X)
//
//int main()
//{
//	//int ret = SQUARE(5);
//	//printf("ret = %d\n", ret);
//
//	int ret = SQUARE(5 + 1);
//
//	printf("%d\n", ret);
//	
//	return 0;
//}

//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	printf("%d\n", ret);
//	return 0;
//}

//#和##

//使用# ，把一个宏参数变成对应的字符串

//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//
//int main()
//{
//	//printf("hello bit\n");
//	//printf("hello " "bit\n");
//	//printf("hel""lo " "bit\n");
//
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of ""a"" is %d\n", a);
//	PRINT(b);
//	//printf("the value of ""b"" is %d\n", b);
//	return 0;
//}

//##可以把位于它两边的符号合成一个符号

#define CAT(X, Y) X##Y

int main()
{
	int Class103 = 2021;
	//printf("%d\n", class103);
	printf("%d\n", CAT(Class, 103));
	//printf("%d\n",Class##103);
	//printf("%d\n",Class103);
	return 0;
}