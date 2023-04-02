#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int N, M, k, div = 1;
	scanf("%d%d", &N, &M);

	for (k = 1; k <= N && k <= M; k++)
			if (!(M % k) && !(N % k))
				div = k;
	
	printf("%d", div);

	return 0;
}