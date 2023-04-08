#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N, i, j;
	scanf("%d", &N);

	//i j> 해석: 숫자 자체로, '위치 개수로'
	//0 4321
	//1 432
	//2 43
	//3 4

	for (i = 0; i < N; i++)
	{
		for (j = N; j > i; j--)
			printf("*");
		printf("\n");
	}

	return 0;
}