#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main01(void) {
	srand(time(NULL));
	int num;
	int n;
	num = rand() % 100;
	while (1) {
		scanf("%d", &n);
		if (num < n)
			printf("�´���\n");
		else if (num > n)
			printf("��С��\n");
		else
		{
			printf("�¶���num��ֵΪ%d",num);
			break;
		}
	}
	return EXIT_SUCCESS;
}