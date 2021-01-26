#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[] = { 22,55,11,34,12,43,53,23,32,42,25 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int i, j, temp;
	
	for (i = 0; i < len - 1;i++) 
		for (j = 0; j < len - 1 - i; j++) 
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	for (i = 0; i < len ; i++)
		printf("%d  ",arr[i]);

	return EXIT_SUCCESS;
}