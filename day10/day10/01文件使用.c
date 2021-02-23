#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main01(void)
{
	FILE *fp = NULL;
	fp = fopen("E:\\test1.txt","w");

	if (fp == NULL)
		perror("open error");

	fclose(fp);
	

	return 0;
}
