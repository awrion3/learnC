#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct person
{
	char name[20];
	char phone[20];
	int age;
};

int main(void)
{
	struct person man1, man2;
	strcpy(man1.name, "Ahn");
	strcpy(man1.phone, "010-7777-9999");
	man1.age = 26;

	printf("name: "); scanf("%s", man2.name);
	printf("phone: "); scanf("%s", man2.phone);
	printf("age: "); scanf("%d", &(man2.age));

	printf("name: %s \n", man1.name);
	printf("phone: %s \n", man1.phone);
	printf("age: %d \n", man1.age);

	printf("name: %s \n", man2.name);
	printf("phone: %s \n", man2.phone);
	printf("age: %d \n", man2.age);

	return 0;
}