#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int mainTE(void) {

	char a;
	char b[10];

	a = getchar();
	scanf("%s",b);

	printf("a = %c\n", a);
	printf("s = %s\n",b);

	return EXIT_SUCCESS;
}