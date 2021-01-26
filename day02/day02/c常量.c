#include <stdio.h>

#define PI 3.1415

int main11(void) {

	//int r = 3;
	const int r = 3;
	float s = PI * r * r;
	float l = 2 * PI * r;

	//printf("圆的面积为%f\n", s);
	//printf("圆的周长为%f\n", l);

	printf("圆的面积为%.2f\n", s);
	printf("圆的周长为%.2f\n", l);


	return 0;
}
