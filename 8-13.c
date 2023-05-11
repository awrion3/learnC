#pragma warning (disable:4996)
#include <stdio.h>

//
int count_3(int);

//
int main(void) {

	int N, res = 0;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
		res += count_3(i);

	printf("%d", res);

	return 0;
}

//
int count_3(int x) {

	int n, v, cnt = 0;

	n = x;
	while (n != 0) {
		v = n % 10;

		if (v == 3)
			cnt++;

		n /= 10;
	}

	return cnt;
}