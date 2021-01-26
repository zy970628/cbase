#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a = 10, b;
	int c = 10, d;

	b = a += 1;
	d = c++;

	printf("a = %d , b = %d\n",a,b);
	printf("c = %d , d = %d\n", c, d);

	return EXIT_SUCCESS;
}