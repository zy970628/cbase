#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
struct stu1 {
	//char name[20];
	char* name;
	//float scores[3];
	float* scores;
};

void bubble_sort1(struct stu1* s, int len) 
{
	for (int i = 0; i < len - 1; i++)
		for (int j = 0; j < len - 1 - i; j++)
		{
			int sum1 = s[j].scores[0] + s[j].scores[1] + s[j].scores[2];
			int sum2 = s[j + 1].scores[0] + s[j + 1].scores[1] + s[j + 1].scores[2];
			if (sum1 > sum2)
			{
				//结构体成员交换
				/*char tmp[20];
				strcpy(tmp, s[j].name);
				strcpy(s[j].name, s[j + 1].name);
				strcpy(s[j + 1].name, tmp);

				for (int k = 0; k < 3; k++)
				{
					int tmp = s[j].scores[k];
					s[j].scores[k] = s[j + 1].scores[k];
					s[j + 1].scores[k] = tmp;
				}*/

				//结构体变量交换
				struct stu1 temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
}

struct student {
	int age;
	char name[10];
	int num;
};

int main04(void)
{
	struct stu1 *s;
	s = (struct stu1*)malloc(sizeof(struct stu1) * 3);

	for (int i = 0; i < 3; i++) 
	{
		s[i].name = (char*)malloc(sizeof(char) * 21);
		(s + i)->scores = (float*)malloc(sizeof(float) * 3);
		printf("请输入学生姓名，成绩1，成绩2，成绩3\n");
		scanf("%s%f%f%f",s[i].name,&s[i].scores[0], &s[i].scores[1], &s[i].scores[2]);
	}

	bubble_sort1(s, 3);

	for (int i = 0; i < 3; i++)
	{
		printf("姓名:%s\n", s[i].name);
		printf("学生成绩:%.1f,%.1f,%.1f\n", s[i].scores[0], s[i].scores[1], s[i].scores[2]);
	}

	for (int i = 0; i < 3; i++)
		free(s[i].name);
	for (int i = 0; i < 3; i++)
		free(s[i].scores);
	free(s);

	system("pause");
	return EXIT_SUCCESS;
}

int main0402(void) 
{
	struct student arr[5];
	arr[0].age = 15;
	strcpy(arr[0].name, "nanfeng");
	arr[0].num = 99;

	(*(arr + 1)).age = 16;
	strcpy((*(arr + 1)).name, "huangtang");
	(*(arr + 1)).num = 98;

	(arr + 2)->age = 17;
	strcpy((arr + 2)->name, "yanghu");
	(arr + 2)->num = 97;

	struct student* p = arr;
	(*(p + 3)).age = 19;
	strcpy((*(p + 3)).name, "kexin");
	(*(p + 3)).num = 95;

	(p + 4)->age = 20;
	strcpy((p + 4)->name, "yunxin");
	(p + 4)->num = 94;

	int n = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < n; i++)
		printf("姓名：%s，年龄：%d，成绩：%d\n", (arr + i)->name, (*(arr + i)).age,arr[i].num);

	return EXIT_SUCCESS;
}
