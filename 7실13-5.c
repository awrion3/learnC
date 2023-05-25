#pragma warning (disable:4996)
#include <stdio.h>

int arrsum(int[], int, int);

int main(void) {

	int N, S, E, arr[100];

	scanf("%d%d%d", &N, &S, &E);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	printf("%d", arrsum(arr, S, E));

	return 0;
}

int arrsum(int x[], int S, int E) {

	int sum = 0;

	for (int i = S; i <= E; i++)
		sum += x[i];

	return sum;
}
