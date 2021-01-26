#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

//gets
int main0401(void)
{
	char str[10];
	
	printf("%s\n", gets(str));

	system("pause");
	return EXIT_SUCCESS;
}

//fget
int main0402(void)
{
	char str[10];

	printf("%s\n", fgets(str,sizeof(str),stdin));

	system("pause");
	return EXIT_SUCCESS;
}

//puts
int main0403(void)
{
	char str[] = "hello world";

	puts(str);

	system("pause");
	return EXIT_SUCCESS;
}

//fouts
int main0404(void)
{
	char str[] = "hello world\n";

	fputs(str,stdout);

	system("pause");
	return EXIT_SUCCESS;
}

//strlen
int main0405(void)
{
	char str[] = "hello world";

	printf("sizeof(str)=%d\n", sizeof(str));
	printf("strlen(str)=%d\n", strlen(str));

	system("pause");
	return EXIT_SUCCESS;
}