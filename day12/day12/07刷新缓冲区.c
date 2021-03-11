#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

int main07(void)
{
	FILE* fp = fopen("test07.txt", "w+");
	char c;
	if (!fp)
	{
		perror("fopen error:");
		return -1;
	}
	while (1)
	{
		scanf("%c", &c);
		if (c == ':')
			break;
		fflush(fp);
		fputc(c, fp);
		
	}

	fclose(fp);

	system("pause");
	return EXIT_SUCCESS;
}
