#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int a, A, B, C, D, E;

	scanf("%d", &a);

	A = a / 10000;
	B = a / 1000 % 10;
	C = a / 100 % 10;
	D = a / 10 % 10;
	E = a % 10;

	printf("%dTTHO %dTHO %dHUN %dTEN %d", A, B, C, D, E);

	return 0;
}
