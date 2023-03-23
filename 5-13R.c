#pragma warning (disable:4996)
#include<stdio.h>

int main(void)
{
	int a, b, c;
	double s;

	scanf("%d%d%d", &a, &b, &c);

	s = (double)(a + b + c) / 3;
	printf("%.2f\n", s);

	switch ((int)s / 25) {
	case 4: case 3:
		printf("A");
		break;
	case 2:
		printf("B");
		break;
	default:
		printf("F");
	}

	return 0;
}