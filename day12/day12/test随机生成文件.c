#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

int mainrandt(void)
{
	FILE* fp = fopen("randt.txt", "w");
	char c = 0;
	if (!fp)
		ferror("fopen error");
	srand((unsigned int)time(NULL));
	for (int i = 0; i <= 1000*1000; i++)
	{
		c = (rand() % 57) + 'A';
		fputc(c, fp);
	}
	fclose(fp);
	system("pause");
	return EXIT_SUCCESS;
}
