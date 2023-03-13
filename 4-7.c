#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	char x;
	int a;

	scanf("%c", &x);

	a = (x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'x');

	printf("%d", a);

	return 0;
}