#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//文本输入函数 - fgets
//文本输出函数 - fputs

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//写文件
//	fputs(buf,pf);
//	fputs("world\n",pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	//fgets(buf,1024,stdin);//从标准输入读取
//	//fputs(buf, stdout);//输出到标准输出流
//
//	gets(buf);
//	puts(buf);
//
//	return 0;
//}

//格式化输入函数 - fscanf
//格式化输出函数 - fprintf

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	 
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的输入数据
//	fscanf(pf,"%d %f %s", &(s.n), &(s.score), &(s.arr));
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), &(s.arr));
//	fprintf(stdout, "%d %.2f %s", s.n, s.score, s.arr);
//
//	return 0;
//}

//对比一组函数：
// 
//scanf/fscanf/sscanf   //printf/fprintf/sprintf

//scanf/printf 是针对标准输入流/标准输出流的 格式化输入/输出语句
//fscanf/fprintf 是针对所有输入流/所有输出流的 格式化输入/输出语句
 
//sscanf/sprintf sscanf是从字符串中读取格式化的数据
//               sprintf是把格式化的数据输出成（存储到）字符串

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"abcdef" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//把格式化的数据转换成字符串存储到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//	//从buf中读取格式化的数据到tmp中
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));
//	
//	printf("%d %f %s\n", tmp.n,tmp.score,tmp.arr);
//	return 0;
//}

//二进制输入 - fread
//二进制输出 - fwrite

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = { "张三",20,55.6 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制形式写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	//struct S s = { "张三",20,55.6 };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制形式读文件
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//文件的随机读写

//fseek - 定位文件指针

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	//1.定位文件指针
//	fseek(pf, -2, SEEK_END);
//	//2.读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//ftell - 返回相较与起始位置的偏移量
//rewind - 让指针返回到起始位置

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	//1.定位文件指针
//	//fseek(pf, -2, SEEK_END);
//	fgetc(pf);
//
//	//int pos = ftell(pf);
//	//printf("%d\n", pos);
//	rewind(pf);
//	fgetc(pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//文件结束判定

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("open file test2.txt");
		return 0;
	}
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
	}
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if (feof(pf))
	{
		printf("end of file\n");
	}
	fclose(pf);
	pf = NULL;
	return 0;
}