#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
void wirte_file(void) 
{
	char* filename = "test01.txt";
	FILE* fp = NULL;
	fp = fopen(filename, "w");
	if (!fp)
	{
		perror("fopen error");
		return;
	}
	fprintf(fp, "%d%c%d=%d\n", 10, '*', 8, 10 * 8);
	fprintf(fp, "%d%c%d=%d\n", 20, '*', 8, 20 * 8);
	fprintf(fp, "%d%c%d=%d\n", 30, '*', 7, 30 * 7);
	fclose(fp);
}
void read_file(void)
{
	int a, b,c;
	char ch,n;
	char* filename = "test01.txt";
	FILE* fp = NULL;
	fp = fopen(filename, "r");
	if (!fp)
	{
		perror("fopen error");
		return;
	}
	while (1)
	{
		fscanf(fp, "%d%c%d=%d\n", &a, &ch, &b, &c);
		printf("%d%c%d=%d\n", a, ch, b, c);
		if (feof(fp))
			break;
		
		

	}
	fclose(fp);
}
int main01(void)
{
	wirte_file();
	read_file();
	system("pause");
	return EXIT_SUCCESS;
}
