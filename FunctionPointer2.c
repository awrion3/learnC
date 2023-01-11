#include <stdio.h>

int WhoFirst(int age1, int age2, int (*cmp)(int n1, int n2))
{
	return cmp(age1, age2);
}

int OldFirst(int age1, int age2)
{
	if (age1 > age2)
		return age1;
	else if (age1 < age2)
		return age2;
	else
		return 0;
}

int YoungFirst(int age1, int age2)
{
	if (age1 < age2)
		return age1;
	else if (age1 > age2)
		return age2;
	else
		return 0;
}

int main (void)
{
	int age1 = 20;
	int age2 = 30;
	int first;

	printf("system1 \n");
	first = WhoFirst(age1, age2, OldFirst);
	printf("%d enter first \n", first);

	printf("system2 \n");
	first = WhoFirst(age1, age2, YoungFirst);
	printf("%d enter first \n", first);

	return 0;
}