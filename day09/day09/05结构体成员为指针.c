#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

struct stu2 
{
	char* name;
	int age;

};
int main05(void)
{
	struct stu2 std;
	std.name = (char*)malloc(sizeof(char) * 21);
	strcpy(std.name, "wuqi");
	std.age = 18;
	printf("name:%s,age:%d\n", std.name, std.age);
	free(std.name);
	system("pause");
	return EXIT_SUCCESS;
}
