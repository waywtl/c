#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//ָ�����͵���������
//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//
//	char* pc = &a;
//	*pc = 0;
//	//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//	//int* p ;*p�ܷ���4���ֽ�
//	//char* p;*p�ܷ���1���ֽ�
//	//double* p;*p�ܷ���8���ֽ�
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
//	//ָ�����;����ˣ�ָ����һ���߶�Զ��ָ��Ĳ�����
//	//int* p; p+1-->4
//	//char* p; p+1-->1
//	//double* p; p+1-->8
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//������-��Ԫ�صĵ�ַ
//	//char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}


//Ұָ��
//int main()
//{
//	int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ��������ͱ���ʼ��Ϊ���ֵ
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
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//		p++;
//	}
//	return 0;
//}

//ָ��ָ��Ŀռ��ͷ�
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
//	//int* pa = &a;//��ʼ��
//	//int* p = NULL;//NULL - ������ʼ��ָ�룬��ָ�븳ֵ
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
//	printf("%d\n", &arr[9] - &arr[0]);//9,�м�Ԫ�صĸ���
//	//printf("%d\n", &arr[9] - &ch[0]);//err
//	return 0;
//}


//��ָ��-ָ��ʵ��strlen
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
//	//strlen - ���ַ�������
//	//�ݹ�- ģ��ʵ��strlen - �������ķ�ʽ1���ݹ�ķ�ʽ2
//	//
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//ָ����ָ����Ƚ�
//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
//int main()
//{
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//    //�������������һ��Ԫ�غ����ָ��������Ԫ��ָ��Ƚϣ��������������һ��Ԫ��ǰһ��ָ��������Ԫ�رȽ�
//	{
//		*--vp = 0;
//	}
//	return 0;
//}

//ָ�������
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);// &arrȡ��������������ĵ�ַ
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

//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//	return 0;
//}

//ָ������ - ���� - ���ָ�������
//����ָ�� - ָ��

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//�������� - �������
	//�ַ����� - ����ַ�
	//ָ������ - ���ָ��
	//int arr[10];
	int* arr2[3] = { &a, &b, &c };//ָ������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr2[i]));
	}
	return 0;
}