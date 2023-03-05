#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int a;
	unsigned char b;

	scanf("%d", &a);

	b = a;

	printf("(int->int) %d\n", a);
	printf("(int->unsigned char->int) %d\n", b);

	return 0;
}