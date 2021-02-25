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
int main(void)
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
	ret=fwrite(&arr[0],1, sizeof(stu_t),fp);
	printf("ret=%d\n,sizeof(stu_t)=%d,sizeof(arr)=%d,sizeof(arr[0])=%d\n", ret, sizeof(stu_t), sizeof(arr), sizeof(arr[0]));
	if (!ret)
	{
		perror("fwrite error");
	}
	fclose(fp);

	system("pause");
	return EXIT_SUCCESS;
}
