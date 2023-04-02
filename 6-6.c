#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	
	int N, i, j, k = 1;
	scanf("%d", &N);

	i = 0;
	while (i < N) {
		for (j = 1; j <= N; j++)
		{
			printf(" ");
			k %= 10;
			printf("%d", k);
			k++;
		}
		printf("\n");
		i++;
		k = i + 1;
	}

	return 0;
}