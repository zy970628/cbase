#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
struct stu6 {
	char name[21];
	int age;
};
void std1(struct stu6 s)
{
	strcpy(s.name, "李四");
	s.age = 20;
	printf("s1	%s       %d\n", s.name, s.age);
};
void std2(struct stu6 *s)
{
	strcpy(s->name, "李四");
	s->age = 20;
	printf("s2   %s       %d\n", s->name, s->age);
};
struct stu6 std3(struct stu6 s) 
{
	strcpy(s.name, "李四");
	s.age = 20;
	printf("s3	%s       %d\n", s.name, s.age);
	return s;
}
struct stu6* stu4(struct stu6 s) 
{
	strcpy(s.name, "李四");
	s.age = 20;
	printf("s4	%s       %d\n", s.name, s.age);
	return &s;
}
int main08(void)
{
	struct stu6 s;
	strcpy(s.name, "张三");
	s.age = 18;
	std1(s);
	printf("s1	%s       %d\n", s.name, s.age);

	struct stu6 s2;
	strcpy(s2.name, "张三");
	s2.age = 18;
	std2(&s2);
	printf("s2	%s       %d\n", s2.name, s2.age);

	struct stu6 s3;
	strcpy(s3.name, "张三");
	s3.age = 18;
	s3=std3(s3);
	printf("s3	%s       %d\n", s3.name, s3.age);

	struct stu6 *s4=&s3;
	strcpy(s4->name, "张三");
	s4->age = 18;
	s4 = stu4(*s4);
	printf("s4   %s       %d\n", s4->name, s4->age);

	system("pause");
	return EXIT_SUCCESS;
}
