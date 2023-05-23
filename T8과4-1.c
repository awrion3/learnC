#pragma warning (disable:4996)
#include <stdio.h>

int is_prime_number(int);

int main(void) {

	int N, M, num, cnt = 0;

	scanf("%d%d", &N, &M);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num);

		if (is_prime_number(num)) {
			cnt++;
			if (cnt <= M) //
				printf(" %d", num);
		}
	}
	if (cnt == 0)
		printf("%d", cnt);

	return 0;
}

int is_prime_number(int num) {

	int isp = 1;

	for (int i = 2; i < num; i++)
		if (num % i == 0)
			isp = 0;

	if (num < 2)
		isp = 0;

	return isp;
}
//10 3
//1 2 3 4 5 6 7 8 9 10
//10 5
//32 33 34 35 36 42 44 45 46 54