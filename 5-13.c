#pragma warning (disable:4996)
#include<stdio.h>

int main(void)
{
	int a, b, c;
	double s;

	scanf("%d%d%d", &a, &b, &c);

	s = (double)(a + b + c) / 3;

	if (s >= 75)
	{
		printf("%.2f\n", s);
		printf("A");
	}
	else if (s >= 50)
	{
		printf("%.2f\n", s);
		printf("B");
	}
	else
	{
		printf("%.2f\n", s);
		printf("F");
	}

	return 0;
}