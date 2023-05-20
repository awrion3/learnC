#pragma warning(disable:4996)
#include <stdio.h>

//0
int reverse_num(int);
int is_equal(int, int);

//1
int main(void) {

	int N;
	scanf("%d", &N);

	printf("%d %d %d", N, reverse_num(N), is_equal(N, reverse_num(N)));

	return 0;
}

//2
int reverse_num(int N) {

	int rev = 0;

	while (N != 0) {
		rev *= 10;
		rev += N % 10;
		N /= 10;
	}
	return rev;
}

int is_equal(int N, int M) {

	if (N == M)
		return 1;
	return 0;
}