#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

int calc06(char c, int a, int b)
{
	switch (c) 
	{
	case '+': return a + b;
	case '-': return a - b;
	case '*': return a * b;
	case '/': return a / b;
	}

}

void w06(void)
{
	char* filename = "text06.txt";
	FILE* fp = fopen(filename, "w");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}
	fputs("10-3=\n", fp);
	fputs("10+3=\n", fp);
	fputs("10*3=\n", fp);
	fputs("10/3=\n", fp);
	fclose(fp);
}

void r06(void)
{
	int a, b;
	char c;
	char buf[4096];
	char ret[4096];
	char cat[4096] = {0};
	char* filename = "text06.txt";
	FILE* fp = fopen(filename, "r");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	while (1) 
	{
		fgets(buf, 4096, fp);
		if (feof(fp))
			break;

		sscanf(buf, "%d%c%d=\n", &a, &c, &b);
		sprintf(ret, "%d%c%d=%d\n", a, c, b, calc06(c, a, b));
		printf("%s",ret);
		strcat(cat, ret);
	}
	fclose(fp);

	fp = fopen(filename, "w");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}
	fputs(cat, fp);
	fclose(fp);
	
}

int main(void)
{
	//w06();
	rand1();
	printf("写入成功按Enter继续");
	getchar();
	r06();
	printf("计算成功程序完成\n");

	system("pause");
	return EXIT_SUCCESS;
}
