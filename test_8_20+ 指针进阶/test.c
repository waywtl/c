#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	const char* p = "abcdef";//"abcdef"��һ�������ַ���
//	//*p = 'w';
//	//printf("%c\n", *p);//a  *pָ������Ԫ�صĵ�ַ�ʽ���������Ԫ��
//	printf("%s\n", p);//abcdef
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";//�����ַ������ɱ����ģ����ݶ���ͬһ����ַ���ھ�̬��
//	const char* p2 = "abcdef";//��Ԫ�ص�ַ��ͬ,�ʴ�ӡhehe
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//���е�
//int main()
//{
//	const char arr1[] = "abc";
//	const char arr2[] = "abc";
//	//arr1��arr2�ĵ�ַ��ͬ
//	const char* p1 = "abc";
//	const char* p2 = "abc";
//	//p1��p2�ĵ�ַ��ͬ
//	return 0;
//}

//ָ������
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ָ��

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//����ĵ�ַҪ������
//	//�����p��������ָ��
//
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}

void Print(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", p[i][j]);
			printf("%d ", *(p[i] + j));
			printf("%d ", *(*(p + i) + j));
			printf("%d ", (*(p + i))[j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	Print(arr, 3, 5);//arr - ����������Ԫ�ص�ַ������ά�������Ԫ���ǵ�һ�е�����,�ʴ���ʱ����������ָ��
	return 0;
}

//����ָ������   int(*arr[10])[5]