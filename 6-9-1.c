#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int N, x, cnt = 0;
	scanf("%d", &N);

	while (N != 0) {
		x = N % 10;
		if (x == 3)
			cnt++;
		N /= 10;
	}
	printf("%d", cnt);

	return 0;
}