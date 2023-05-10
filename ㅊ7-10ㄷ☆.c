#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N, arr[10][10] = { {0} }, i, j, tmp;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &arr[i][j]);

	for (i = 0; i <= N / 2; i++)	//
		for (j = 0; j < N; j++)
			if (i == j) {							   //00 //11..
				tmp = arr[i][j];	
				arr[i][j] = arr[N - 1 - i][N - 1 - j]; //<->44 //<->33..
				arr[N - 1 - i][N - 1 - j] = tmp;
			}

	printf("\n");

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			printf("%d ", arr[i][j]);

		printf("\n");
	}
	printf("\n");

	for (i = 0; i <= N / 2; i++)	//int형은 버림이 일어난다 (몫 연산)
		for (j = 0; j < N; j++)
			if (i + j == N - 1) {			   //04 //13 //..
				tmp = arr[i][j];
				arr[i][j] = arr[j][i];		   //<->40 //<->31..
				arr[j][i] = tmp;
			}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			printf("%d ", arr[i][j]);

		printf("\n");
	}
	printf("\n");

	return 0;
}
//5
//11 12 13 14 15 
//21 22 23 24 25 
//31 32 33 34 35 
//41 42 43 44 45 
//51 52 53 54 55 

//55 12 13 14 51
//21 44 23 42 25
//31 32 33 34 35
//41 24 43 22 45
//15 52 53 54 11