#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int N, M;
	int k = 1, div = 1;

	scanf("%d%d", &N, &M);

	while (k <= N && k <= M) {
			if (!(M % k) && !(N % k))
				div = k;
			k++;
		}
	
	printf("%d", div);

	return 0;
}