#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int N, M;
	int i = 1, j = 1, div = 1;

	scanf("%d%d", &N, &M);

	if (N > M)
	{
		while (j <= M) {
			if (!(M % j) && !(N % j))
				div = j;
			j++;
		}
	}
	else
		while (i <= N) {
			if (!(N % i) && !(M % i))
				div = i;
			i++;
		}

	printf("%d", div);

	return 0;
}