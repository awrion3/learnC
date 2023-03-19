#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int a, b, c, max, min;

	scanf("%d%d%d", &a, &b, &c);

	if (a > b) {
		if (b > c)
			max = a, min = c;
		else
			if (a > c)
				max = a, min = b;
			else
				max = c, min = b;
	}
	else
		if (a > c)
			max = b, min = c;
		else
			if (b > c)
				max = b, min = a;
			else
				max = c, min = a;

	printf("%d %d", max, min);

	return 0;
}