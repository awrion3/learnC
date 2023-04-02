#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int M, N, i, j, fac = 1;
	scanf("%d%d", &M, &N);

	for (i = M; i <= N; i++)
	{
		printf("%d!=", i);
		for (j = 1; j <= i; j++)
		{
			printf("%d", j);
			if (j != i)
				printf("*");
			fac *= j;
		}
		printf("=%d", fac);
		fac = 1;
		printf("\n");
	}
	return 0;
}