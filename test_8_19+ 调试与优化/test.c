#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");//��ѭ����ӡhehe
//		arr[i] = 0;
//		//1.ջ����Ĭ��ʹ�ã���ʹ�øߵ�ַ���Ŀռ䣬��ʹ�õ͵�ַ���Ŀռ�
//		//2.���������±����������ַʱ�ɵ͵��߱仯
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//
//	return 0;
//}
//
//#include<string.h>
//int main()
//{
//	char arr1[] = "##############";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);//����ʱ����arr2���ַ����������ص�'\0'Ҳ������ȥ�����´�ӡ��bit��ֹͣ
//	printf("%s\n", arr1);
//	return 0;
//}


//ʵ��strcpy����

void my_strcpy(char* dest, char* src)
{
	while (*src != '\0')
	{
		*dest = *src;
		*src++;
		*dest++;
	}
	*dest = *src;//'\0'
}

void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++)
	{
		;
	}
}

void my_strcpy(char* dest, char* src)
{
	if (dest != NULL && src != NULL)
	{
		while (*dest++ = *src++)
		{
			;
		}
	}
}

#include<assert.h>

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);//����
	assert(src != NULL);//����
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "##############";
	char arr2[] = "bit";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}

//int main()
//{
//	const int num = 10;
//
//	const int* p = &num;
//	*p = 20;//err 
//	//const ����ָ�����* �����ʱ�����ε���* p��Ҳ����˵������ͨ��p���ı�* p(num)��ֵ
//
//	int* const p = &num;
//	int n = 100;
//	p = &n;//err
//	//const ����ָ�����* ���ұ�ʱ�����ε���ָ�����p����Ҳ����˵��p���ܱ��ı���
//
//	const int* const p = &num;
//	//��ʱ*p��p�����ܱ��޸�
//
//	return 0;
//}


//ģ��ʵ��strlen��������ʽ

int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}