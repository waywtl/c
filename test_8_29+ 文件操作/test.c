#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <errno.h>

//文件的打开和关闭
 
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("text.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件test.txt
//	//相对路径
//	//..表示上一级路径
//	//.表示当前路径
//	//fopen("../test.txt","r")   
//	//fopen("test.txt","r");
//	   
//	//绝对路径的写法
//	//fopen("E:\\c语言代码\\学习过程\\test_8_29+", "r");
//
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开成功
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//文件的顺序读写

//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c\n", fgetc(pfRead));
//
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//
//	return 0;
//}

//从键盘输入
//输出到屏幕
//键盘&屏幕都是外部设备
//
//键盘-标准输入设备 - stdin
//屏幕-标准输出设备 - stdout
//是一个屏幕默认打开的两个流设备
//stdin FILE*
//stdout FILE*
//stderr FILE*

int main()
{
	int ch = fgetc(stdin);
	fputc(ch, stdout);
	return 0;
}