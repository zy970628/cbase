#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
char* mystrch(char* str1, char* str2) 
{
	int i = 0;
	while (str1[i])
	{
		if (str1[i] == str2)
		{
			return &str1[i];
		}
		i++;
	}
	return NULL;
}
char* mystrch2(char* str1, char* str2)
{
	while (str1)
	{
		if (*++str1 == str2)
		{
			return str1;
		}
	}
	return NULL;
}
int main0501(void)
{
	char* str1 = "helloword";
	char* str2 = 'l';
	char* ren = NULL;
	ren = mystrch2(str1, str2);
	printf("ren=%s\n", ren);

	system("pause");
	return EXIT_SUCCESS;
}
