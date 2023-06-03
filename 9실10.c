#pragma warning (disable:4996)
#include <stdio.h>

void gcdlcm(int, int, int*, int*);

int main(void) {

	int a, b;
	int x, y, *pgcd = &x, *plcm = &y;

	scanf("%d%d", &a, &b);

	gcdlcm(a, b, pgcd, plcm);

	printf("%d %d", *pgcd, *plcm);

	return 0;
}

void gcdlcm(int a, int b, int *pgcd, int *plcm) {

	int gcd, lcm;

	for (int i = 1; i <= a && i <= b; i++)
		if (a % i == 0 && b % i == 0)
			gcd = i;

	lcm = a * b / gcd;

	*pgcd = gcd;
	*plcm = lcm;
}