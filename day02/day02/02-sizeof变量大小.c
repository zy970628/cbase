#include <stdio.h>

int main03(void) {
	int a = 1;
	short b = 2;
	long c = 3;
	long long d = 4;

	printf("=====a=======%d\n", sizeof(a));
	printf("=====b=======%d\n", sizeof(b));
	printf("=====c=======%d\n", sizeof(c));
	printf("=====d=======%d\n", sizeof(d));

	printf("int 的大小为 %d\n",sizeof(int));
	printf("short 的大小为 %d\n", sizeof(short));
	printf("long 的大小为 %d\n", sizeof(long));
	printf("long long 的大小为 %d\n", sizeof(long long));

	return 0;
}

int main031(void) {
	int a = 1;
	short b = 2;
	long c = 3;
	long long d = 4;

	printf("sizeof(int) %d\n", sizeof(int));
	printf("sizeof(short) %d\n", sizeof(short));
	printf("sizeof(long) %d\n", sizeof(long));
	printf("sizeof(long long) %d\n", sizeof(long long));

	printf("--------------------------------------------------------\n");

	unsigned int aun = 1;
	unsigned short bun = 2;
	unsigned long cun = 3;
	unsigned long long dun = 4;

	printf("sizeof(unsigned int) %d\n", sizeof(unsigned int));
	printf("sizeof(unsigned short) %d\n", sizeof(unsigned short));
	printf("sizeof(unsigned long) %d\n", sizeof(unsigned long));
	printf("sizeof(unsigned long long) %d\n", sizeof(unsigned long long));

	return 0;
}