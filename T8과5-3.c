#pragma warning (disable:4996)
#include <stdio.h>

int add_digits(int);

int main(void) {

	int N, num, min, mnum, fl = 0;

	scanf("%d", &N);

	while (N >= 0) {

		num = N;
		while (num > 9) {
			num = add_digits(num);
		}

		if (fl == 0) {
			min = add_digits(num);
			mnum = N;
			fl = 1;
		}
		if (add_digits(num) < min) {
			min = add_digits(num);
			mnum = N;
		}

		scanf("%d", &N);
	}
	
	printf("%d %d", mnum, min);

	return 0;
}

int add_digits(int N) {

	int sum = 0;

	while (N != 0) {
		sum += N % 10;
		N /= 10;
	}

	return sum;
}
//1012 24 135 7 -5