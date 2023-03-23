#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int k, e, m, avg;
	
	scanf("%d%d%d", &k, &e, &m);

	avg = (double)(k + e + m) / 3;

	if (avg >= 91.5)
		printf("A");
	else if (avg >= 85.5)
		printf("B");
	else if (avg >= 80.5)
		printf("C");
	else
		printf("F");

	if (k == 100 || e == 100 || m == 100)
		printf("Good");
	if (k < 60 || e < 60 || m < 60)
		printf("Bad");

	return 0;
}
