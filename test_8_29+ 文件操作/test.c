#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <errno.h>

//�ļ��Ĵ򿪺͹ر�
 
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
//	//���ļ�test.txt
//	//���·��
//	//..��ʾ��һ��·��
//	//.��ʾ��ǰ·��
//	//fopen("../test.txt","r")   
//	//fopen("test.txt","r");
//	   
//	//����·����д��
//	//fopen("E:\\c���Դ���\\ѧϰ����\\test_8_29+", "r");
//
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	//���ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�ļ���˳���д

//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//
//	//�ر��ļ�
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
//	//���ļ�
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c\n", fgetc(pfRead));
//
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead = NULL;
//
//	return 0;
//}

//�Ӽ�������
//�������Ļ
//����&��Ļ�����ⲿ�豸
//
//����-��׼�����豸 - stdin
//��Ļ-��׼����豸 - stdout
//��һ����ĻĬ�ϴ򿪵��������豸
//stdin FILE*
//stdout FILE*
//stderr FILE*

int main()
{
	int ch = fgetc(stdin);
	fputc(ch, stdout);
	return 0;
}