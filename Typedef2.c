#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

typedef struct point Point;

typedef struct person
{
	char name[20];
	char phone[20];
	int age;
} Person;

int main(void)
{
	Point pos = { 10,20 };
	Person man = { "Lee", "777-999", 27 };

	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phone, man.age);

	return 0;
}