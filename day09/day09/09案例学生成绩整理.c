#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct stu1 {
	char* name;
	float* scores;
};

void bubble_sort(struct stu1* s, int len)
{
	for (int i = 0; i < len - 1; i++)
		for (int j = 0; j < len - 1 - i; j++)
		{
			int sum1 = s[j].scores[0] + s[j].scores[1] + s[j].scores[2];
			int sum2 = s[j + 1].scores[0] + s[j + 1].scores[1] + s[j + 1].scores[2];
			if (sum1 > sum2)
			{
				struct stu1 temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
}

int main09(void)
{
	struct stu1* s;
	s = (struct stu1*)malloc(sizeof(struct stu1) * 3);

	for (int i = 0; i < 3; i++)
	{
		s[i].name = (char*)malloc(sizeof(char) * 21);
		(s + i)->scores = (float*)malloc(sizeof(float) * 3);
		printf("请输入学生姓名，成绩1，成绩2，成绩3\n");
		scanf("%s%f%f%f", s[i].name, &s[i].scores[0], &s[i].scores[1], &s[i].scores[2]);
	}

	bubble_sort(s, 3);

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

	return 0;
}
