#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

int main(void)
{
	int a = 10;
	int* p = &a;
	int* f = p;
	*p = 350;
	printf("a=%d\n",a);
	printf("*p=%d\n", *p);
	printf("&a=%p\n", &a);
	printf("p=%p\n", p);
	printf("&p=%p\n", &p);
	printf("*f=%p\n", *f);
	printf("f=%p\n", f);
	system("pause");
	return EXIT_SUCCESS;
}
