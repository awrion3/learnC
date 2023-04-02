#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	
	int N, M, i, j, div = 1;
	scanf("%d%d", &N, &M);

	if (N > M) {
		for (j = 1; j <= M; j++)
			if (!(M % j) && !(N % j))
				div = j;
	}
	else
		for (i = 1; i <= N; i++)
			if (!(N % i) && !(M % i))
				div = i;

	printf("%d", div);

	return 0;
}