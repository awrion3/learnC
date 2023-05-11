#pragma warning (disable:4996)
#include <stdio.h>

int func2(int, int, int, int);

int main(void) {

	int N, a, b, c, A, B, C;
	scanf("%d", &N);
	scanf("%d%d%d", &a, &b, &c);
	scanf("%d%d%d", &A, &B, &C);

	printf("%d", func2(func2(N, a, b, c), A, B, C));

	return 0;
}

int func2(int x, int a, int b, int c) {

	return a * (x * x) + b * x + c;
}