#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N, a, b, c, R;
	scanf("%d", &N);

	a = N / 100;
	b = N / 10 % 10;
	c = N % 10;

	R = 1;
	R += a == b || b == c || c == a;
	R += a == b && b == c;

	printf("%d", R);

	return 0;
}