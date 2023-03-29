#pragma warning (disable:4996) 
#include <stdio.h> 

int main(void) {

	int N, i, j;

	scanf("%d", &N);

	for (i = 0; i < N; i++)		
	{
		for (j = 0; j < i; j++)
			printf(" ");

		for (j = N; j > i; j--) // for (j = 0; j < N-i; j++) // for ( ; j < N; j++)
			printf("*");									 // 초기식 위에서 연계

		printf("\n");
	}
	return 0;
}