#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

struct students
{
	char name[21];
	unsigned int age;
	char tel[16];
	float scores[3];
	char sex;
}stu1 = { "技术大会",19,"13333333333",89.6,79.6,88.1,'M' }, stu;

int main01(void)
{
	//按照结构体顺序赋值
	//struct students stu = { "技术大会",19,"13333333333",89.6,79.6,88.1,'M' };

	//struct students stu = { .sex = 'M',.age = 31,.tel = "19888888888",.scores[0] = 98.9,.scores[1] = 99.6,.scores[2] = 95.3,.name = "大苏打" };
	
	/*struct students stu;
	strcpy(stu.name, "客家话");
	stu.age = 22;
	strcpy(stu.tel, "15555555555");
	stu.scores[0] = 89.1;
	stu.scores[1] = 82.3;
	stu.scores[2] = 84.5;
	stu.sex = 'F';*/

	strcpy(stu.name, "客家话");
	stu.age = 22;
	strcpy(stu.tel, "15555555555");
	stu.scores[0] = 89.1;
	stu.scores[1] = 82.3;
	stu.scores[2] = 84.5;
	stu.sex = 'F';
	

	
	printf("姓名:%s\n", stu.name);
	printf("年龄:%d\n", stu.age);
	printf("电话号码:%s\n", stu.tel);
	printf("学生成绩:%.1f,%.1f,%.1f\n", stu.scores[0], stu.scores[1], stu.scores[2]);
	printf("性别:%s\n", stu.sex == 'M' ? "男":"女");

	printf("姓名:%s\n", stu1.name);
	printf("年龄:%d\n", stu1.age);
	printf("电话号码:%s\n", stu1.tel);
	printf("学生成绩:%.1f,%.1f,%.1f\n", stu1.scores[0], stu1.scores[1], stu1.scores[2]);
	printf("性别:%s\n", stu1.sex == 'M' ? "男" : "女");

	system("pause");
	return EXIT_SUCCESS;
}
