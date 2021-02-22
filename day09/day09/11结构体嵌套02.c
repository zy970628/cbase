#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

struct person {
	int age;
	char name[10];
};

struct student {
	int score;
	struct person man;
};

int main1101(void)
{
	struct student stu = { 11,18,"sduh" };
	printf("age=%d\n", (&stu)->man.age);
	printf("name=%s\n", (&stu)->man.name);
	printf("score=%d\n", (&stu)->score);
	system("pause");
	return EXIT_SUCCESS;
}

int main1102(void)
{
	struct student stu;
	stu.man.age = 20;
	strcpy(stu.man.name, "zhangsan");
	stu.score = 98;

	printf("age = %d\n", (&stu)->man.age);
	printf("name = %s\n", (&stu)->man.name);
	printf("score = %d\n", (&stu)->score);

	struct student* p = &stu;
	p->man.age = 18;
	strcpy(p->man.name, "lishi");
	p->score = 99;

	printf("age = %d\n", (*p).man.age);
	printf("name = %s\n",(&(p->man))->name);
	printf("score = %d\n", p->score);


	return EXIT_SUCCESS;
}
