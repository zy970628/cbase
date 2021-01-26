#include <stdio.h>
#include <stdlib.h>

int main0501(void) {
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int i=0,j=len-1;
	int temp;
	int n;

	for (n = 0; n < len; n++)
	printf("%d   ", arr[n]);
	putchar('\n');

	while (i < j) {
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}

	for (n = 0; n < len; n++)
	printf("%d   ", arr[n]);

	return EXIT_SUCCESS;
}