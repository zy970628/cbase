#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void write_file08()
{
	FILE* fp = fopen("test08.txt", "w");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	fputs("10/2=\n", fp);
	fputs("10*3=\n", fp);
	fputs("4-2=\n", fp);
	fputs("10+2=\n", fp);

	fclose(fp);
}

int calc(char ch, int a, int b)
{
	switch (ch)
	{
	case '/':
		return a / b;

	case '+':
		return a + b;

	case '-':
		return a - b;

	case '*':
		return a * b;
	default:
		break;
	}
}

void read_file08()
{
	char buf[4096] = { 0 };
	char result[4096] = { 0 };

	char sum_res[4096] = { 0 };

	int a, b, ret;
	char ch;

	FILE* fp = fopen("test08.txt", "r");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	while (1)
	{
		fgets(buf, 4096, fp);  //buf = "10/2=\n\0";
		if (feof(fp))
		{
			break;
		}
		sscanf(buf, "%d%c%d", &a, &ch, &b);	// a��10�� ch��'/' b: 2

		sprintf(result, "%d%c%d=%d\n", a, ch, b, calc(ch, a, b));  // 10 / 2 = 5;

		strcat(sum_res, result);
	}
	fclose(fp);  // �� ֻ�б��ʽû�н�����ļ��رա�

	fp = fopen("test08.txt", "w");	// ��� ֻ�б��ʽû�н�����ļ�
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}
	fputs(sum_res, fp);	// �� ���б��ʽ���н�����ַ���д���ļ��С�

	fclose(fp);
}


int maintest(void)
{
	write_file08();
	getchar();
	read_file08();

	system("pause");
	return EXIT_SUCCESS;
}
