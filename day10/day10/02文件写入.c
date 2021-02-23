#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

int main(void)
{
	FILE* fp=NULL;
	fp = fopen("test.txt","w");

	if (fp == NULL)
		perror("fopen error");

	int ren = fputc('A',"test.txt");
	fclose(fp);

	system("pause");
	return EXIT_SUCCESS;
}
