#pragma warning (disable:4996)
#include <stdio.h>

//1
int is_prime(int);
int next_prime(int);

int main(void) {

	int N, M;

	scanf("%d%d", &N, &M);

	for (int i = 0; i < M; i++) {
		N = next_prime(N);
		printf(" %d", N);
	}
		

	return 0;
}

//2
int is_prime(int x) {

	int isp = 1;

	for (int i = 2; i < x; i++)
		if (x % i == 0)
			isp = 0;

	if (x < 2)
		isp = 0;

	return isp;
}

int next_prime(int x) {

	do {
		x++;
	} while (!(is_prime(x)));

	return x;
}