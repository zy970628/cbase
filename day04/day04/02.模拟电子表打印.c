#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main0201(void) {

	for (int i = 0; i < 24; i++)
		for (int j = 0; j < 60; j++)
			for (int k = 0; k < 60; k++) {
				printf("%02d:%02d:%02d\n", i, j, k);
				Sleep(1000);
				system("cls");
			}
	return EXIT_SUCCESS;
}

int main0202(void) {
	int h, m, s;
	int i, j, k;
	int flag=1;
	printf("��������Ҫ����ʱ��ʱ���ʽΪ Сʱ:����:�� ���س�����\n");
	scanf("%d:%d:%d", &h, &m, &s);
	h %= 24; m %= 60; s %= 60;
		for (i = 0; i < 24 && flag; ++i)
			for (j = 0; j < 60 && flag; ++j)
				for (k = 0; k < 60 && flag; ++k) {
					printf("��ʱ����ʱ����  %02d:%02d:%02d\n", h, m, s);
					printf("��ǰʱ����      %02d:%02d:%02d\n", i, j, k);
					Sleep(1000);
					system("cls");
					while (h == i && m == j && s == k) { flag = 0; break; };
				}
		printf("\n");
		printf("\a");
		printf("��ʱ����ʱ����  %02d:%02d:%02d\n", h, m, s);
		printf("��ǰ����ʱ����  %02d:%02d:%02d\n", --i, --j, --k);
	return EXIT_SUCCESS;
}