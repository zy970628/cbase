#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
struct str3 {
	char* name;
	int age;
}stu;
int main06(void)
{
	struct str3* std;
	std = &stu;
	std->name = (char*)malloc(sizeof(char) * 21);
	strcpy(std->name, "libing");
	std->age = 18;
	printf("%s      %d\n", (*std).name, std->age);

	free(std->name);

	system("pause");
	return EXIT_SUCCESS;
}
