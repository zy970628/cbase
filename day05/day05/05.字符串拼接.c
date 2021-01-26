#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

int main0501(void)
{
	char str1[] = "hello";
	char str2[] = "world";
	char str3[100] = { 0 };

	int i=0;
	while (str1[i])
	{
		str3[i] = str1[i];
		i++;
	}
	
	int j = 0;
	while (str2[j])
	{
		str3[i + j] = str2[j];
		j++;
	}
	puts(str3);

	system("pause");
	return EXIT_SUCCESS;
}
