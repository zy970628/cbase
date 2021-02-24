#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
void w(void)
{
	char* filename = "text01.txt";
	FILE* fp = NULL;
	fp = fopen(filename, "w");
	int ret;
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}
	
	for (int i = 0; i < 4; i++)
	{
		ret = fputc(i + 'A', fp);
		if (fp == NULL)
		{
			perror("fopen error");
			return;
		}
	}

	fclose(fp);
}

void r(void)
{
	char* filename = "text01.txt";
	FILE* fp = NULL;
	char ch=0;
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	while (1)
	{
		ch = fgetc(fp);
		if (ch == -1)
			break;
		printf("%c\n", ch);

	}

	fclose(fp);
}

int main03(void)
{
	w();
	r();
	system("pause");
	return EXIT_SUCCESS;
}
