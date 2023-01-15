# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

typedef struct student
{
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
} Student;

void ShowStudentInfo(Student* sptr)
{
	printf("name: %s \n", sptr->name);
	printf("stdnum: %s \n", sptr->stdnum);
	printf("school: %s \n", sptr->school);
	printf("major: %s \n", sptr->major);
	printf("year: %d \n", sptr->year);
}

int main(void)
{
	Student arr[7];
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("name: "); scanf("%s", arr[i].name);
		printf("stdnum: "); scanf("%s", arr[i].stdnum);
		printf("school: "); scanf("%s", arr[i].school);
		printf("major: "); scanf("%s", arr[i].major);
		printf("year: "); scanf("%s", arr[i].year);
	}
	for (i = 0; i < 7; i++)
		ShowStudentInfo(&arr[i]);

	return 0;
}