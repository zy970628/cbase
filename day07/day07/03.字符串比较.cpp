#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

int mystr(const char* str1, const char* str2)
{
	int i = 0;
	while (str1[i]==str2[i]) 
	{
		if (str1[i] == '\0')
			return 0;
		i++;
	}
	return str1[i] > str2[i] ? 1 : -1;


}

int main(void)
{
	const char *str1 = "hello6";
	const char *str2 = "hello7";

	int ren=1;
	 
	ren = mystr(str1, str2);
	if (ren == 0)
		printf("相同\n");
	else if(ren == 1)
		printf("str1大\n");
	else if (ren == -1)
		printf("str2大\n");
	else
		printf("异常\n");
	
	
	system("pause");
	return EXIT_SUCCESS;
}
