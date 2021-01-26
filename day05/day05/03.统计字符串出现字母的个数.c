#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

int main0301(void)
{
	char str[100] = { 0 };
	int count[26] = { 0 };
	
	scanf("%s", str);

	int i = 0;
	int index;
	while (str[i]!='\0')
	{
		index = str[i] - 'a';
		count[index]++;
		i++;
	}

	for ( i = 0; i < 26; i++)
	{
		if (count[i] != 0)
		{
			printf("字母%c出现的次数为%d\n", i + 'a', count[i]);
		}
	}

	system("pause");
	return EXIT_SUCCESS;
}
