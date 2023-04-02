#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int N, i, j;
	scanf("%d", &N);

	for (i = 0; i < N; i++) 
	{
		for (j = 0; j < N; j++)
		{
			printf(" ");
			if (i == j)
				printf("X");
			else if (i + j == N - 1)
				printf("X");
			else
				printf("O");	
		}
		printf("\n");
	}
	return 0;
}