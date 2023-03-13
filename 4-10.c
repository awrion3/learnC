#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int N, M;

	scanf("%d%d", &N, &M);

	N > M ? printf("%d\n", N / M) : printf("%d\n", M / N);

	N > M ? printf("%d\n", N % M) : printf("%d\n", M % N);

	return 0;
}