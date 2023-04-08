#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	a = a / 100 % 10;
	b = b / 100 % 10;
	c = c / 100 % 10;

	if (a == b && b == c)
		printf("T");
	else if (a == b || b == c || c == a)
		printf("D");
	else
		printf("S");

	return 0;
}