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
	struct point pos = { 10,20 };
	struct person man = { "Lee", "010-1111-2222", "21" };

	printf("%p %p \n", &pos, &pos.xpos);
	printf("%p %p \n", &man, man.name);

	return 0;
}