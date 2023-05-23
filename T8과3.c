#pragma warning (disable:4996)
#include <stdio.h>

//
int multiple(int, int);
int maximum(int, int);
int digit_maximum(int);

int main(void) {

	int N, M, K, max = 0, nax = 0;

	scanf("%d%d%d", &N, &M, &K);

	for (int i = N; i <= M; i++) {
		if (multiple(i, K))
			max = maximum(max, digit_maximum(i));
		else 
			nax = maximum(nax, i % K);
	}

	printf("%d", maximum(max, nax));

	return 0;
}

//
int multiple(int x, int y) {

	return (x % y == 0);
}

int maximum(int x, int y) {

	if (x > y)
		return x;
	return y;
}

int digit_maximum(int x) {

	int dax = 0;

	while (x != 0) {
		dax = maximum(dax, x % 10);
		x /= 10;
	}

	return dax;
}
//12 18 3
//9 18 11