#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//realloc ���Ե�malloc��
//int main()
//{
//	int* p = realloc(NULL, 40);//malloc
//	return 0;
//}

//�������� 
//int main()
//{
	//1.��NULLָ������ò���
	//int* p = malloc(40);
	//��p��������ж�
	//*p = 10;
	//malloc���ٿռ�ʧ��-��NULLָ�������

	//2.�Զ�̬�����ڴ��Խ�����
	//int* p = malloc(40);//10��int 0-9
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	////Խ��
	//for (i = 0; i <= 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;

	//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
	//int a = 10;
	//int* p = &a;
	////�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
	//free(p);
	//p = NULL;

	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*p++ = i;
	//}
	////���տռ�
	//free(p);
	//p = NULL;

	//5.��ͬһ�鶯̬�ڴ����ͷ�
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	////ʹ��
	////�ͷ�
	//free(p);
	//p = NULL;

	//free(p);

	//6.��̬�����ڴ������ͷţ��ڴ�й©��
	//while (1)
	//{
	//	malloc(1);
	//}

	//return 0;
//}

//��������ı�����

//1.
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//  GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//2.
//void GetMemory(char** p,int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//  GetMemory(&str,100);
//	strcpy(str, "hello");
//	printf(str);
//	//�����ͷŶ�̬���ٵ��ڴ棬�����ڴ�й¶
//	//free(str);
//	//str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//3.

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
//	//str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//�������� - �ڽṹ���ĩβ�������δ֪��С�������Ա
//1.�����ڴ��ͷ�
//2.�����ڷ����ٶ�

//struct S
//{
//	int n;
//	int arr[0];//δ֪��С
// //��sizeof�����Сʱ��������������Ĵ�С
//};

//struct S
//{
//	int n;
//	int arr[];//δ֪��С��-���������Ա-����Ĵ�С�ǿ��Ե�����
//};
//
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	return 0;
//}