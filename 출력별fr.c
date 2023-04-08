#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N, i, j;
	scanf("%d", &N);

	//i j>
	//0 0
	//1 01
	//2 012
	//3 0123

	for (i = 0; i < N; i++)
	{
		for (j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}