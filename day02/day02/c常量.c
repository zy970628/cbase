#include <stdio.h>

#define PI 3.1415

int main11(void) {

	//int r = 3;
	const int r = 3;
	float s = PI * r * r;
	float l = 2 * PI * r;

	//printf("Բ�����Ϊ%f\n", s);
	//printf("Բ���ܳ�Ϊ%f\n", l);

	printf("Բ�����Ϊ%.2f\n", s);
	printf("Բ���ܳ�Ϊ%.2f\n", l);


	return 0;
}
