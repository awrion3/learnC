#pragma warning (disable:4996)	//
#include <stdio.h>				//

int main(void) {

	int N, M[10][10], tmp; //

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			scanf("%d", &M[i][j]);

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (i == j && i < N / 2) //
			{
				tmp = M[i][j];
				M[i][j] = M[N - 1 - i][N - 1 - j];
				M[N - 1 - i][N - 1 - j] = tmp;
			}

	///
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			printf("%d ", M[i][j]);
		printf("\n");
	}
	///

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (i == N - 1 - j && i < N / 2)
			{
				tmp = M[i][j];
				M[i][j] = M[j][i];
				M[j][i] = tmp;
			}

	///
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			printf("%d ", M[i][j]);
		printf("\n");
	}
	///

	return 0;
}