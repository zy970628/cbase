#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
union vars 
{
	double a;
	float b;
	int c;
	short d;
	char f;
}var;

union test {
	char a;
	short b;
	int c;
	char str[13];
};

int main12(void)
{
	printf("%d\n", sizeof(var));
	var.a = 100;
	var.b = 2.1;
	printf("%f\n", var.a);
	printf("%f\n", var.b);
	system("pause");
	return EXIT_SUCCESS;
}

int main1202(void)
{
	union test t1;

	t1.c = 0x87654321;

	printf("&t1 = %p\n", &t1);
	printf("&t1.a = %p\n", &(t1.a));
	printf("&t1.b = %p\n", &(t1.b));
	printf("&t1.c = %p\n", &(t1.c));

	printf("a = %x\n", t1.a);
	printf("b = %x\n", t1.b);
	printf("c = %x\n", t1.c);

	t1.b = 0x3A;

	printf("----------------\na = %x\n", t1.a);
	printf("b = %x\n", t1.b);
	printf("c = %x\n", t1.c);

	printf("sizeof(t1) = %u\n", sizeof(t1));
	printf("char = %d\n", sizeof(t1.str));
	printf("char = %d\n", sizeof(int));
	system("pause");
	return EXIT_SUCCESS;
}