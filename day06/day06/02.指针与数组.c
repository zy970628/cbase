#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

int main0201(void)
{
	int a[] = { 1,2,3,4,5,6,7,8,9 };
	long long * p = &a;
	p++;
	
	printf("%d\n", *p);

	system("pause");
	return EXIT_SUCCESS;
}

int main0202(void) {
	int arr[10];
	int* p = arr;
	for (int i = 0; i < 10; i++)   
		*(arr + i) = i;
	printf("arr=%p\n", arr);
	for (int i = 0; i < 10; i++)
		printf("i=%d  ", *(p + i));
	printf("p=%p\n", p);
	for (int i = 0; i < 10; i++)
		printf("i=%d  ", *p++);
	printf("p=%p\n", p);

	return 0;
}