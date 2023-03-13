#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int N, M;

	scanf("%d%d", &N, &M);

	N > M ? printf("%d", N) : printf("%d", M);

	return 0;
}