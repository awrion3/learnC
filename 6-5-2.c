#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int N, i, j;
	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		for (j = N; j >= i; j--)
			printf("*");
		printf("\n");
	}

	return 0;
}