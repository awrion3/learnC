#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N, i, j, x = 1;
	scanf("%d", &N);

	//0 -4321
	//1 0 432
	//2 01 43
	//3 012 4

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < i; j++)
			printf("   ");
		for (j = N; j > i; j--)
			printf("%3d", x++);
		printf("\n");
	}

	return 0;
}