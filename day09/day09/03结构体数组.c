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
	struct str04 s[2] = { {"��һ",26,'f'},{"���",56,'m'} };
	struct str04 g[2];
	for (int i = 0; i < 2; i++) 
	{
		printf("����=%s     ", s[i].name);
		printf("����=%d\n", s[i].age);
		printf("�Ա�=%s\n", s[i].sex=='m'?"��":"Ů");
	}

	for (int i = 0; i < 2; i++) 
	{
		scanf("%s%d,%c", g[i].name, &g[i].age,&g[i].sex);
	}

	for (int i = 0; i < 2; i++)
	{
		printf("����=%s     ", g[i].name);
		printf("����=%d\n", g[i].age);
		printf("�Ա�=%s\n", g[i].sex == 'm' ? "��" : "Ů");
	}

	system("pause");
	return EXIT_SUCCESS;
}
