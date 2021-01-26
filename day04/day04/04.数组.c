#include <stdio.h>
#include <stdlib.h>

int main0401(viod) {

	int arr[10] = { 23,34,45,67,3,5,7,23,64,32 };

	size_t b = 2;
	printf("arr=%p\n", arr);
	printf("arr[0]=%p\n", arr[0]);
	printf("&arr[0]=%p\n", &arr[0]);
	printf("&arr[1]=%p\n", &arr[1]);
	printf("&arr[2]=%p\n", &arr[2]);

	printf("sizeof(arr)=%u\n", sizeof(arr));
	printf("sizeof(arr[0])=%u\n", sizeof(arr[0]));
	printf("arry[%d]\n", sizeof(arr)/ sizeof(arr[0]));
	return EXIT_SUCCESS;
}

int main0402(viod) {

	int arr1[10] = { 23,34,45,67,3,5,7,23,64,32 };

	for (size_t i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++) {
		printf("arr1[%u]=%2d  ", i, arr1[i]);
	}
	putchar('\n');

	int arr2[10] = { 23,34,45,67};

	for (size_t i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
		printf("arr2[%u]=%2d  ", i, arr2[i]);
	}
	putchar('\n');


	int arr3[10] = { 0 };

	for (size_t i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
		printf("arr3[%u]=%2d  ", i, arr3[i]);
	}
	putchar('\n');

	int arr4[10] ;

	for (size_t i = 0; i < sizeof(arr4) / sizeof(arr4[0]); i++) {
		printf("arr4[%u]=%x  ", i, arr4[i]);
	}
	putchar('\n');

	int arr5[] = {3,7,6,78,88};

	for (size_t i = 0; i < sizeof(arr5) / sizeof(arr5[0]); i++) {
		printf("arr5[%u]=%d  ", i, arr5[i]);
	}
	putchar('\n');

	int arr6[10];
	arr6[0] = 10;
	arr6[1] = 11;
	arr6[2] = 12;

	for (size_t i = 0; i < sizeof(arr6) / sizeof(arr6[0]); i++) {
		printf("arr6[%u]=%x  ", i, arr6[i]);
	}
	putchar('\n');

	return EXIT_SUCCESS;
}