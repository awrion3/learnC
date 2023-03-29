#pragma warning (disable:4996) 
#include <stdio.h> 

int main(void) {

	int N, i, j;

	scanf("%d", &N);

	for (i = 0; i < N; i++)		// for (i = N; i > 0; i--)
	{
		for (j = N; j > i; j--)	  // for (j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}