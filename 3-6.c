#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int a, b, c;

	scanf("%d/%d/%d", &a, &b, &c);

	printf("year %04d month %02d date %02d", a, b, c);

	return 0;
}