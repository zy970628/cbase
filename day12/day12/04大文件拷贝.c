#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

int main0401(void)
{
	FILE* fp1 = fopen("randt.txt", "r");
	FILE* fp2 = fopen("text04.txt", "w");
	if (!fp1)
		perror("fopen error  ");
	if (!fp2)
		perror("fopen error  ");
	char buf[1024];
	int ret;
	while (1)
	{
		ret=fread(buf, 1, sizeof(buf), fp1);
		fwrite(buf, 1, ret, fp2);
		if (feof(fp1))
			break;
		
	}

	fclose(fp1);
	fclose(fp2);
	system("pause");
	return EXIT_SUCCESS;
}
