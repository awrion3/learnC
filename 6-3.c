#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n, a, cnt = 0;
	scanf("%d", &n);

	do {
		scanf("%d", &a);
		cnt++;
		if (a > n)
			printf("%d>?\n", a);
		else if (a < n)
			printf("%d<?\n", a);
		else
			printf("%d==?\n", a);
	} while (a != n);

	printf("%d", cnt);

	return 0;
}