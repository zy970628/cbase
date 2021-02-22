#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
struct stra 
{
	int a;           //4
	float b;		//4
	char c;			//1  12
};
struct strb
{
	double d;		//8
	char* e;		//4
	short f;		//2
	struct stra abc;	//12
};
int main10(void)
{
	struct strb strbb;
	strbb.d = 1.6;
	strbb.abc.a = 3;
	printf("%d\n", sizeof(strbb));
	printf("%d\n", strbb.abc.a);
	system("pause");
	return EXIT_SUCCESS;
}
