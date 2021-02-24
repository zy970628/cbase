#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

int main05(void)
{
	char buf[50];
	char* filename = "text05.txt";
	FILE* fp = NULL;
	fp = fopen(filename, "w");
	if (fp == NULL) 
	{
		perror("fopen error");
	}
	while (1)
	{
		fgets(buf, 50, stdin);
		if (!strcmp(buf, ":wq\n"))
			break;
		fputs(buf, fp);
	}
	fclose(fp);
	system("pause");
	return EXIT_SUCCESS;
}
