#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
struct stu5{
	char* name;
	int age;
}s;
int main07(void)
{
	struct stu5* std = (struct stu5*)malloc(sizeof(struct stu5) * 2);
	for (int i = 0; i < 2; i++)
	{
		printf("请输入姓名和年龄：\n");
		(std + i)->name = (char*)malloc(sizeof(char) * 21);
		scanf("%s%d", (std + i)->name, &(*(std + i)).age);
	}
	for (int i = 0; i < 2; i++)
	{
		printf("姓名=%s    年龄=%d\n", (std + i)->name, (*(std + i)).age);
	}

	for (int i = 0; i < 2; i++)
		free((std + i)->name);
	free(std);
	system("pause");
	return EXIT_SUCCESS;
}
