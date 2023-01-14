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
	struct employee arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("name: ");
		scanf("%s", arr[i].name);
		printf("pid: ");
		scanf("%s", arr[i].pid);
		printf("salary: ");
		scanf("%d", arr[i].salary);
	}

	for (i = 0; i < 3; i++)
	{
		printf("name: %s \n", arr[i].name);
		printf("pid: %s \n", arr[i].pid);
		printf("salary: %d \n", arr[i].salary);
	}

	return 0;
}