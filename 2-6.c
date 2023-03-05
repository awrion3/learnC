#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	char a;

	scanf("%c", &a);

	printf("(%%c) %c\n", a);
	printf("(%%d) %d\n", a-'0');

	return 0;
}

