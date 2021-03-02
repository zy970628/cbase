#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
typedef struct student {
	int age;
	char name[10];
	int num;
}stu_t;

write_sturct()
{
	char* filename = "text03.txt";
	FILE* fp = fopen(filename, "w");
	stu_t arr[4] = {
	16,"andy",113,
	18,"lily",125,
	17,"milu",121,
	19,"tom",144
	};
	if (!fp)
	{
		perror("fopen error");
		return;
	}
	int ret;
	ret = fwrite(&arr[0], 4, sizeof(stu_t), fp);
	printf("ret=%d\n,sizeof(stu_t)=%d,sizeof(arr)=%d,sizeof(arr[0])=%d\n", ret, sizeof(stu_t), sizeof(arr), sizeof(arr[0]));
	if (!ret)
	{
		perror("fwrite error");
	}
	fclose(fp);
}
read_sturct() 
{
	stu_t* s1 = (stu_t *)malloc(sizeof(stu_t) * 1024);
	char* filename = "text03.txt";
	FILE* fp = fopen(filename, "r");
	if (!fp)
	{
		perror("fopen error");
		return;
	}
	
	
	int i = 0;
	/*while (1)
	{
		int ret = fread(s1, 1, sizeof(stu_t), fp);
		if (ret == 0)
			break;
		printf("ret=%d\n", ret);
		printf("s1.age=%d,s1.name=%s,s1.num=%d\n", (s1 + i)->age, (s1 + i)->name, (s1 + i)->num);
	}*/
	int ret = fread(s1, 4, sizeof(stu_t), fp);
	printf("ret=%d\n", ret);
	for(i=0;i<4;i++)
		printf("s1.age=%d,s1.name=%s,s1.num=%d\n", (s1 + i)->age, (s1 + i)->name, (s1 + i)->num);
	fclose(fp);
	free(s1);
}
int main03(void)
{
	write_sturct();
	read_sturct();
	system("pause");
	return EXIT_SUCCESS;
}
