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
}stu1 = { "�������",19,"13333333333",89.6,79.6,88.1,'M' }, stu;

int main01(void)
{
	//���սṹ��˳��ֵ
	//struct students stu = { "�������",19,"13333333333",89.6,79.6,88.1,'M' };

	//struct students stu = { .sex = 'M',.age = 31,.tel = "19888888888",.scores[0] = 98.9,.scores[1] = 99.6,.scores[2] = 95.3,.name = "���մ�" };
	
	/*struct students stu;
	strcpy(stu.name, "�ͼһ�");
	stu.age = 22;
	strcpy(stu.tel, "15555555555");
	stu.scores[0] = 89.1;
	stu.scores[1] = 82.3;
	stu.scores[2] = 84.5;
	stu.sex = 'F';*/

	strcpy(stu.name, "�ͼһ�");
	stu.age = 22;
	strcpy(stu.tel, "15555555555");
	stu.scores[0] = 89.1;
	stu.scores[1] = 82.3;
	stu.scores[2] = 84.5;
	stu.sex = 'F';
	

	
	printf("����:%s\n", stu.name);
	printf("����:%d\n", stu.age);
	printf("�绰����:%s\n", stu.tel);
	printf("ѧ���ɼ�:%.1f,%.1f,%.1f\n", stu.scores[0], stu.scores[1], stu.scores[2]);
	printf("�Ա�:%s\n", stu.sex == 'M' ? "��":"Ů");

	printf("����:%s\n", stu1.name);
	printf("����:%d\n", stu1.age);
	printf("�绰����:%s\n", stu1.tel);
	printf("ѧ���ɼ�:%.1f,%.1f,%.1f\n", stu1.scores[0], stu1.scores[1], stu1.scores[2]);
	printf("�Ա�:%s\n", stu1.sex == 'M' ? "��" : "Ů");

	system("pause");
	return EXIT_SUCCESS;
}
