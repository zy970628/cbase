#include <stdio.h>
#include <stdlib.h>

int main04(void) {

	size_t var = 10;
	unsigned int a = 1u;
	unsigned short b = 2u;
	unsigned long c = 3lu;
	unsigned long long d = 4llu;

	printf("var=%u\n",var);
	printf("unsigned int 型数据值：%u\n",a);
	printf("unsigned short 型数据值：%hu\n", b);
	printf("unsigned long 型数据值：%lu\n", c);
 	printf("unsigned long long 型数据值：%llu\n", d);     

	return EXIT_SUCCESS;
}