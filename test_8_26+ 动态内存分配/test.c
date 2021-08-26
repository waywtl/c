#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

//malloc

//int main()
//{
//	//���ڴ�����10�����Ϳռ�
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		//��ӡ
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//calloc
//���ٿռ���ʼ��Ϊ0

//int main()
//{
//	//malloc(10*sizeof(int))
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٵĿռ��
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//realloc
//������̬�����ڴ�ռ�Ĵ�С

int main()
{
	int* p = (int*)malloc(20);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}
	//������ʹ��malloc���ٵ�20���ֽڿռ�
	//�������20���ֽڲ����������ǵ�ʹ����
	//ϣ�������ܹ���40���ֽڵĿռ�
	//�������ʹ��realloc��������̬���ٵ��ڴ�
	//
	//reallocʹ�õ�ע�����
	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
	//  ����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬
	//  ��󷵻��¿��ٵ��ڴ�ռ��ַ
	//3.����һ���µı���������realloc�����ķ���ֵ
	//
	int* ptr = realloc(p, 40);

	if (ptr != NULL)
	{
		p = ptr;
		int i = 0;
		for (i = 5; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}

	//�ͷ��ڴ�
	free(p);
	p = NULL;

	return 0;
}