#include <stdio.h>
#include <stdlib.h>

int main04(void) {

	size_t var = 10;
	unsigned int a = 1u;
	unsigned short b = 2u;
	unsigned long c = 3lu;
	unsigned long long d = 4llu;

	printf("var=%u\n",var);
	printf("unsigned int ������ֵ��%u\n",a);
	printf("unsigned short ������ֵ��%hu\n", b);
	printf("unsigned long ������ֵ��%lu\n", c);
 	printf("unsigned long long ������ֵ��%llu\n", d);     

	return EXIT_SUCCESS;
}