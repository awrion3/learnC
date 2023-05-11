#pragma warning (disable:4996)
#include <stdio.h>

//
int is_prime(int);
int next_prime(int);

//
int main(void) {

	int N, M;
	scanf("%d%d", &N, &M);

	for (int i = 0; i < M; i++)
	{
		printf(" %d", next_prime(N));
		N = next_prime(N);
	}
	return 0;
}

//
int is_prime(int x) {

	int isp = 1;

	for (int i = 2; i < x; i++)
		if (x % i == 0)
			isp = 0;

	return isp;
}
//
int next_prime(int x) {

	do {
		x++;
	} while (is_prime(x) != 1);

	return x;
}