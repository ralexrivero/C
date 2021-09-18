#include <stdio.h>
#include <string.h>

int main(void)
{
	typedef struct person {
		char name[36];
		int age;
	} student;

	student s1;

	strcpy(s1.name, "Ronald Rivero");
	s1.age = 30;

	printf("My name is %s, and my age is: %d\n", s1.name, s1.age);

	return (0);
}