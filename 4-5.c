#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	double l, r, a;

	scanf("%lf", &l);

	r = l / (3.14 * 2);

	a = r * r * 3.14;

	printf("%.0f", a);

	return 0;
}