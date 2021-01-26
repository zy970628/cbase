#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//54 76 89
//12 34 56
//23 32 35
//98 76 45
//23 45 45
int main0201(void) {

	int scores[5][3];
	int row = sizeof(scores) / sizeof(scores[0]);
	int col = sizeof(scores[0]) / sizeof(scores[0][0]);
	int i, j;
	int sum;

	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			scanf("%d",&scores[i][j]);
		}
	}

	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			printf("%3d  ", scores[i][j]);
		}
		printf("\n");
	}
	
	for ( i = 0; i < row; i++)
	{	
		sum = 0;
		for ( j = 0; j < col; j++)
		{
			sum = sum + scores[i][j];
		}
		printf("第%d名学生的成绩为%d\n", i+1, sum);
	}

	for ( i = 0; i < col; i++)
	{
		sum = 0;
		for ( j = 0; j < row; j++)
		{
			sum = sum + scores[j][i];
		}
		printf("第%d科课程的总成绩为%d\n", i + 1, sum);
	}

	return EXIT_SUCCESS;
}