#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//长度受限制的字符串函数

//strncpy

//char* my_strncpy(char* dest, const char* src, int count)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* tmp = dest;
//	while (count && (*dest++ = *src++) != '\0')
//	{
//		count--;
//	}
//	if (count)
//	{
//		while (--count)
//			*dest++ = '\0';
//	}
//	return tmp;
//}

//strncat

//char* my_strncat(char* dest, const char* src, int count)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* tmp = dest;
//	while (*dest++)
//	{
//		;
//	}
//	while (count && (*dest = *src) != '\0')
//	{
//		count--;
//	}
//	*dest = '\0';
//	return tmp;
//}
 
//strncmp

//int my_strncmp(const char* str1, const char* str2, int count)
//{
//	while (count)
//	{
//
//	}
//}

//strstr
//查找字符串

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	char* s1 = str1;
//	char* s2 = str2;
//	char* cur = (char*)str1;
//
//	if (!*str2)
//	{
//		return (char*)str1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)str2;
//
//		while (*s1 && *s2 && (*s1 == *s2))
//		{ 
//			s1++;
//			s2++;
//		}
//		if (!*s2)
//		{
//			return cur;//找到了
//		}
//		cur++;
//	}
//	return NULL;//找不到
//}

//strtok
//切割字符串

//int main()
//{
//	char arr[] = "1148117782@qq.com";
//	char* p = "@.";
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strerror

//#include <errno.h>

//int main()
//{
//	//错误码  错误信息
//	//0 -     No error
//	//1 -     Operation not permitted
//	//2 -     No such file or directory
//	//...
//	//errno 是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//
//	return 0;
//}

//字符分类函数

#include <ctype.h>

//int main()
//{
//	char ch = '2';
//	//int ret = islower(ch);
//	int ret = isdigit(ch);
//	printf("%d\n", ret);
//
//	return 0;
//}

//字符转换函数

//int main()
//{
//	//char ch = tolower('Q');
//	//char ch = toupper('q');
//	//putchar(ch);
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//内存操作函数

//memcpy

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

//C语言标准：
//memcpy 只要处理 不重叠的内存拷贝就可以 - 60 - 100
//memmove 处理重叠内存的拷贝 - 100
//

//重叠情况
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//my_memcpy(arr + 2, arr, 20);
//	my_memmove(arr + 2, arr, 20);//处理内存重叠的情况
//
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//};

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct S arr3[] = { {"张三",20},{"李四",19} };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//
//	//memcpy(arr2, arr1, sizeof(arr1));
//
//	return 0;
//}

//memmove

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		//从前向后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//		return ret;
//	}
//	else
//	{
//		//从后向前
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//		return ret;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//my_memcpy(arr + 2, arr, 20);
//	my_memmove(arr + 2, arr, 20);//处理内存重叠的情况
//	return 0;
//}

//memcmp

//int main()
//{
//	int arr1[] = { 1,2,63,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

//memset
//内存设置

//int main()
//{
//	//char arr[10] = "";
//	//memset(arr, '#', 10);
//	int arr[10] = { 0 };
//	//40个字节
//
//	memset(arr, 1, 10);
//	return 0;
//}