#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int N, x, sum = 0;
	scanf("%d", &N);

	while (N != 0)
	{
		x = N % 10;
		sum += x;
		N /= 10;
	}
	printf("%d", sum);

	return 0;
}