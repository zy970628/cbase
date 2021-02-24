#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

void w04(void)
{
	char* filename = "text04.txt";
	FILE* fp = NULL;
	fp = fopen(filename, "w");

	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc(-1, fp);
	fputc('C', fp);
	fputc('D', fp);
	fputc('\n', fp);

	fclose(fp);
}

void r04(void)
{
	char* filename = "text04.txt";
	FILE* fp = NULL;
	char ch = 0;
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	while (1)
	{
		ch = fgetc(fp);
		if (feof(fp))
			break;
		printf("%d\n", ch);

	}

	fclose(fp);
}

int main04(void)
{
	//w04();
	r04();
	system("pause");
	return EXIT_SUCCESS;
}
