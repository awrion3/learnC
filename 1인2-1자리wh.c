#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N, M = 1, R = 0;
	scanf("%d", &N);

	while (N != 0) {
		M *= N % 10;
		N /= 10;
	}

	printf("%d ", M);

	while (M != 0) {
		R *= 10;
		R += M % 10;
		M /= 10;
	}

	printf("%d", R);

	return 0;
}