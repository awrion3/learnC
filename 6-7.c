#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int N, i, j, k = 1;
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		for (j = 0; j <= i; j++)
		{
			printf(" ");
			k %= 10;
			printf("%d", k);
			k++;
		}
		printf("\n");
	}

	return 0;
}