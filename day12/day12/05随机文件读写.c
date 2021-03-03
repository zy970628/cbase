#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
typedef struct student {
	int age;
	char name[20];
	int num;
}stu_t;
int main05(void)
{
	stu_t stu[4] = {
	   16,"andy",113,
	   18,"lily",125,
	   17,"milu",121,
	   19,"tom",144
	};
	stu_t s;
	int ret;
	FILE* fp = fopen("test05.txt", "wb+");
	if (!fp)
	{
		ferror("fopen error");
		return -1;
	}
	ret = fwrite(stu, 1, sizeof(stu), fp);
	printf("ret=%d\n", ret);
	fseek(fp, sizeof(stu_t)*2, SEEK_SET);
	
	ret=fread(&s, 1, sizeof(stu_t), fp);
	printf("ret=%d\n", ret);
	printf("1     age=%d,name=%s,num=%d\n", s.age, s.name, s.num);

	int len = ftell(fp);
	printf("len=%d\n", len);

	rewind(fp);
	ret = fread(&s, 1, sizeof(stu_t), fp);
	printf("\n2     age=%d,name=%s,num=%d\n", s.age, s.name, s.num);

	fseek(fp, 0, SEEK_END);
	len = ftell(fp);
	printf("文件的大小为%d\n",len);

	fclose(fp);
	system("pause");
	return EXIT_SUCCESS;
}
