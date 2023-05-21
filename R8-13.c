#pragma warning (disable:4996)
#include <stdio.h>

int count_3(int);

int main(void) {

	int N, sum = 0;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
		sum += count_3(i);

	printf("%d", sum);

	return 0;
}

int count_3(int x) {

	int cnt = 0;

	while (x != 0) {
		if (x % 10 == 3)
			cnt++;
		x /= 10;
	}

	return cnt;
}