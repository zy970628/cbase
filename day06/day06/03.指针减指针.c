#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

int main0301(void)
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int* p = &arr[1];
	printf("arr=%d\n", arr);
	printf("p=%d\n", p);
	printf("p-arr=%d\n", p-arr);

	system("pause");
	return EXIT_SUCCESS;
}
