#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int N, i, j;
	scanf("%d", &N);

	for (i = N; i > 0; i--)
	{
		for (j = 2; j < i * 2 + 1; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}