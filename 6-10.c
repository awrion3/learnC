#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int N, sum;
	scanf("%d", &N);

	sum = N;
	while (sum > 9) 
	{
		sum = 0;
		while (N != 0)
		{
			sum += N % 10;
			N /= 10;
		}
		N = sum;
	}

	printf("%d", sum);

	return 0;
}