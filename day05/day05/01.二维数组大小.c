#include <stdio.h>
#include <stdlib.h>

int main0101(void) {
	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++)
			printf("%3d  ", arr[i][j]);
		printf("\n");
	}


	printf("�����ܴ�С=sizeof(arr)��%d\n", sizeof(arr));
	printf("���鵥��Ԫ�صĴ�С=sizeof(arr[0][0])��%d\n", sizeof(arr[0][0]));
	printf("�����еĴ�С=sizeof(arr[0])��%d\n", sizeof(arr[0]));
	printf("\n");
	printf("���������=izeof(arr)/sizeof(arr[0])��%d\n", sizeof(arr) / sizeof(arr[0]));
	printf("���������=sizeof(arr[0])/sizeof(arr[0][0])��%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
	printf("\n");
	printf("arr=%p\n", arr);
	printf("arr[0]=%p\n", arr[0]);
	printf("&arr[0][0]=%p\n", &arr[0][0]);



	return EXIT_SUCCESS;
}