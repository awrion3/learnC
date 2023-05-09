#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N, arr[100], M, i, j, cnt = 0;

	scanf("%d%d", &N, &M);

	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			if (i != j && arr[i] + arr[j] == M)
				cnt++;
		
	printf("%d", cnt / 2); //

	return 0;
}