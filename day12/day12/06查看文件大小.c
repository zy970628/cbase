#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>


int main06(void)
{
	struct stat buf;
	int set=stat("test05.txt", &buf);
	printf("文件的大小为%d\n",buf.st_uid);
	
	return 0;
}
