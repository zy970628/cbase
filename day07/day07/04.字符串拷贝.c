#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

void mystrcopy(char* src, char* dst)
{
	int i = 0;
	while (src[i]) 
	{
		dst[i] = src[i];
		i++;
	}

}

void mystrcopy2(char* src, char* dst)
{
	
	while (*src)
	{
		*dst = *src;
		src++;
		dst++;
	}

}


int main0401(void)
{
	char* src = "hello world";
	char dst[100] = { 0 };
	mystrcopy2(src, dst);

	printf("dst=%s\n", dst);
	return 0;
}
