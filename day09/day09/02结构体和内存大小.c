#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
struct students
{
	char name[20];    //21
	unsigned int age;  //4
	char tel[15];     //16
	char sex;		//1     53
	float scores[3];  //12
	
}syy;
int main02(void)
{
	printf("sizeof=%d",sizeof(syy));
	system("pause");
	return EXIT_SUCCESS;
}
