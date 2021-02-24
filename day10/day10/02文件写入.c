#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

int main02(void)
{
	char* filename = "test.txt";
	FILE* fp=NULL;
	char ch = 'A';
	int ret;
	fp = fopen("filename","w");

	if (fp == NULL)
	{
		perror("fopen error");
		return -1;
	}
		

	for (int i = 0; i < 26; i++)
	{
		ret = fputc(ch + i, fp);
		if (fp == NULL)
		{
			perror("fopen error");
			return -1;
		}
	}

	printf("%d\n", ret);
	

	fclose(fp);

	system("pause");
	return EXIT_SUCCESS;
}
