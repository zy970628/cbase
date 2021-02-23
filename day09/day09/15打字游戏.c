#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>
void tips() 
{
	printf("==========欢迎参加打字游戏============\n");
	printf("============按任意键开始==============\n");
	printf("==========按Esc键退出游戏=============\n");
	char ch = _getch();
	if (ch == 27)
		exit(0);
}

void rand_ch(char* arr)
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 50; i++)
	{
		arr[i] = rand() % 26 + 'a';
	}
}

void print_ch(char* arr)
{
	unsigned int start_time;
	unsigned int end_time;
	int val = 0;
	char ch;
	for (int i = 0; i < 50; i++)
	{
		ch = _getch();
		if (i == 0)
			start_time = time(NULL);
		if (ch == arr[i])
		{
			printf("%c", ch);
			val++;
		}
		else
			printf("_");
	}
	end_time = time(NULL);
	printf("\n打字时间为%d（秒），打字准确率为%.1f%%", end_time - start_time, (val*1.0 / 50) * 100);
}

int main(void)
{
	char arr[51];
	while (1) {
		memset(arr, 0, 51);
		tips();
		rand_ch(arr);
		printf("%s\n", arr);
		print_ch(arr);
		printf("\n");
		system("pause");
		system("cls");
	}
	
	return EXIT_SUCCESS;
}
