#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N, a, b, c;
	scanf("%d", &N);

	a = N / 100;
	b = N / 10 % 10;
	c = N % 10;

	if (a == b && b == c)
		printf("%d", 3);
	else if (a == b || b == c || c == a)
		printf("%d", 2);
	else
		printf("%d", 1);

	return 0;
}