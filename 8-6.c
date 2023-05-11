#pragma warning (disable:4996)
#include <stdio.h>

//
int func1(int);

//
int main(void) {

	int N;
	scanf("%d", &N);

	printf("%d", func1(N));

	return 0;
}

//
int func1(int x) {

	return 2 * (x * x) + -5 * x + 1;
}