#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

int main(void)
{
	int c=0;
	int** p = (int *)malloc(sizeof(int) * 3);
	p[0] = (int)malloc(sizeof(int) * 3);
	p[1] = (int)malloc(sizeof(int) * 3);
	p[2] = (int)malloc(sizeof(int) * 3);
	for(int i=0;i<3;i++)
		for (int j = 0; j < 3; j++) 
		{
			*(*(p + i) + j) = c++;
		}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%5d", p[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3-1; j++)
			for (int k = 0; k < 3-1-j; k++)
				if (*(*(p + i) + k) < *(*(p + i) + k+1))
				{
					int a = *(*(p + i) + k);
					int b = *(*(p + i) + k + 1);

					int tmp = *(*(p + i) + k);
					*(*(p + i) + k) = *(*(p + i) + k + 1);
					*(*(p + i) + k + 1) = tmp;

					int d = *(*(p + i) + k);
					int e = *(*(p + i) + k + 1);
				}
	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%5d", *(*(p+i)+j));
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++)
		free(*(p + i));
	free(p);
	system("pause");
	return EXIT_SUCCESS;
}
