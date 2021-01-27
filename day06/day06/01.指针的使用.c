#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

int main0101(void)
{
	int a = 10;
	int* p = &a;
	int* f = p;
	*p = 350;
	printf("a=%d\n",a);
	printf("*p=%d\n", *p);
	printf("&a=%p\n", &a);
	printf("p=%p\n", p);
	printf("&p=%p\n", &p);
	printf("*f=%p\n", *f);
	printf("f=%p\n", f);
	system("pause");
	return EXIT_SUCCESS;
}


//野指针
int main0102(void) {
	int* p = 350;
	*p = 20;
	printf("%d",*p);

	return EXIT_SUCCESS;
}

//空指针
int main0103(void) {
	int* p = NULL;
	if (*p!=NULL)
	{
		*p = 300;
		printf("%d", *p);
	}
	
	return EXIT_SUCCESS;
}

//泛型指针
int main0104(void) {
	int m=300;
	void* p = &m;
	//*p = 100;
	printf("%d",*(int *)p);
	return EXIT_SUCCESS;

}