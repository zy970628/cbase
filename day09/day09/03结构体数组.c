#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
struct str04 {
	char name[20];
	int age;
	char sex;
};
int main03(void)
{
	struct str04 s[2] = { {"张一",26,'f'},{"库的",56,'m'} };
	struct str04 g[2];
	for (int i = 0; i < 2; i++) 
	{
		printf("姓名=%s     ", s[i].name);
		printf("年龄=%d\n", s[i].age);
		printf("性别=%s\n", s[i].sex=='m'?"男":"女");
	}

	for (int i = 0; i < 2; i++) 
	{
		scanf("%s%d,%c", g[i].name, &g[i].age,&g[i].sex);
	}

	for (int i = 0; i < 2; i++)
	{
		printf("姓名=%s     ", g[i].name);
		printf("年龄=%d\n", g[i].age);
		printf("性别=%s\n", g[i].sex == 'm' ? "男" : "女");
	}

	system("pause");
	return EXIT_SUCCESS;
}
