#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

void BubbleSort(int* buf, int len)
{
	int temp;
	for (int i = 0; i < len - 1; i++)
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (buf[j] > buf[j + 1])
			{
				temp = buf[j];
				buf[j] = buf[j + 1];
				buf[j + 1] = temp;
			}

		}
}

void wirte_rand()
{
	srand((unsigned int)time(NULL));
	char* filename = "test02.txt";
	FILE* fp = NULL;
	fp = fopen(filename, "w");
	if (!fp)
	{
		perror("fopen error");
		return;
	}
	for (size_t i = 0; i < 10; i++)
	{
		fprintf(fp, "%d\n", rand()%100);
	}
	fclose(fp);
}

void read_rand()
{
	char* filename = "test02.txt";
	FILE* fp = NULL;
	int buf[10];
	fp = fopen(filename, "r");
	if (!fp)
	{
		perror("fopen error");
		return;
	}

	int i = 0;
	int tmp;

	while (1)
	{
		fscanf(fp,"%d\n",&tmp);
		buf[i++] = tmp;
		if (feof(fp))
			break;
		
	}

	for (size_t i = 0; i < 10; i++)
	{
		printf("%d\n", buf[i]);
	}
	fclose(fp);

	fp = fopen(filename, "w");
	if (!fp)
	{
		perror("fopen error");
		return;
	}

	int len = sizeof(buf) / sizeof(buf[0]);
	printf("\n\n\n%d\n\n\n\n", len);
	BubbleSort(buf, len);

	for (size_t i = 0; i < 10; i++)
	{
		printf("%d\n", buf[i]);
	}

	for (size_t i = 0; i < 10; i++)
	{
		fprintf(fp, "%d\n", buf[i]);
	}
	fclose(fp);
}
int main02(void)
{
	wirte_rand();
	read_rand();
	system("pause");
	return EXIT_SUCCESS;
}
