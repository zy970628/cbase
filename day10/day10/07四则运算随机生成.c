#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

char charrand(void)
{
	switch (rand()%4)
	{
	case 0: return '+';
	case 1: return '-';
	case 2: return '*';
	case 3: return '/';
	}
}
void rand1(void)
{
	char* filename = "text06.txt";
	FILE* fp = fopen(filename, "w");
	if (fp == NULL) 
	{
		perror("fopen error");
		return;
	}
	int a, b;
	char c;
	char buf[4096] = {0};
	for (int i = 0; i < 100; i++)
	{
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		c = charrand();
		sprintf(buf, "%d%c%d=\n", a, c, b);
		printf("%s",buf);
		int j = 0;
		while (buf[j])
		{
			fputc(buf[j++], fp);
		}
	}
	fclose(fp);
}
int main07(void)
{
	srand((unsigned int)time(NULL));
	rand1();

	system("pause");
	return EXIT_SUCCESS;
}
