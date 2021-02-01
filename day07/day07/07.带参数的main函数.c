#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

int main(int argc, char* argv[])
{
	for (size_t i = 0; i < argc; i++)
	{
		printf("argv[i]=%s\n", argv[i]);
	}
	system("pause");
	return EXIT_SUCCESS;
}
