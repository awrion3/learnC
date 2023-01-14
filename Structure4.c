#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phone[20];
	int age;
};

int main(void)
{
	struct point pos = { 10, 20 };
	struct person man = { "Lee", "010-1111-2222", 25 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phone, man.age);

	return 0;
}