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
	int b = 20;
	int c = 30;
	
	int* p1 = &a;
	int* p2 = &b;
	int* p3 = &c;

	int* arr[] = { p1,p2,p3 };

	printf("*arr[0]=%d\n",*arr[0]);
	printf("p=%d\n", p1);
	printf("*arr=%d\n", *arr);

	printf("*p=%d\n", *p1);
	printf("**arr=%d\n", **arr);

	system("pause");
	return EXIT_SUCCESS;
}
