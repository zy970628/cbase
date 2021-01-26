#include <stdio.h>

int main(void) {
	int a = 3;
	int b = 4;
	int c;
	c = a + b;

	printf("%d\n", c);
	printf("c = %d\n", c);
	printf("%d + %d = %d\n", a, b, c);
	printf("%d + %d = %d\n", a, b, a + b);
	return 0;

}