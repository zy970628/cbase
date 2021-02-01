#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

void mysp(char* src, char* dst)
{
	while (*src)
	{
		if (*src == ' ')
		{
			src++;
			continue;
		}
		*dst = *src;
		dst++;
		src++;
	}
}
int main0601(void)
{	
	char* src = "j h gg ds erw";
	char* dst[100] = { 0 };
	mysp(src, dst);
	printf("dst=%s\n",dst);
	system("pause");
	return EXIT_SUCCESS;
}
