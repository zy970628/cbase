#include <stdio.h>
#include <stdlib.h>

int main0301(void) {
	
	int i, j;

	for (i = 1; i <= 9;i++) {
		for (j = 1; j <=i; j++) {
			printf("%dx%d=%d\t",j,i,j*i);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 9; i >= 0; i--) {
		for (j = 1; j <= i; j++) {
			printf("%dx%d=%d\t", j, i, j * i);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}