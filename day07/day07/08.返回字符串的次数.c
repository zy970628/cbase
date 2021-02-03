#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
char* mystrstr(char* str, char* sub)
{
	int i;
	while (*str)
	{
		
		for (i = 0; str[i] == sub[i]; i++)
			{
			if (sub[i+1] == 0)
				return str;
			}
		str++;
	}
	return NULL;
}
int mystrnumb(char* str, char* sub)
{
	int c = 0;
	char* p = mystrstr(str, sub);
	while (p != NULL) 
	{
		c++;
		p += strlen(sub);
		p = mystrstr(p, sub);
	}
	return c;
}
int main(void)
{
	char* str = "hellollollo";
	char* sub = "llo";
	int* dst = 0;
	dst = mystrnumb(str,sub);
	printf("dst=%d\n",dst);

	system("pause");
	return EXIT_SUCCESS;
}
