#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct employee
{
	char name[20];
	char pid[20];
	int salary;
};

int main(void)
{
	struct employee emp;
	printf("name: ");
	scanf("%s", emp.name);
	printf("pid: ");
	scanf("%s", emp.pid);
	printf("salary: ");
	scanf("%d", &emp.salary);

	printf("name: %s \n", emp.name);
	printf("pid: %s \n", emp.pid);
	printf("salary: %d \n", emp.salary);

	return 0;
}