#pragma warning(disable:4996)
#include <stdio.h>

//0
int add_digits(int);

int main(void) {

	int N, num;
	int min, fl = 0, mnum;

	//2
	scanf("%d", &N);

	while (N > 0) {

		//3
		num = N;
		while (num > 9) {
			num = add_digits(num);
		}

		//
		if (fl == 0) {
			min = add_digits(num);
			mnum = N;
			fl = 1;
		}
		//
		if (min > add_digits(num)) {
			min = add_digits(num);
			mnum = N;
		}

		scanf("%d", &N);
	}

	//4
	printf("%d %d", mnum, min);

	return 0;
}

//2
int add_digits(int N) {

	int sum = 0;

	while (N != 0) {
		sum += N % 10;
		N /= 10;
	}

	return sum;
}
