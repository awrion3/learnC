#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n, i = 1;
	scanf("%d", &n);

	while (i <= n) {
		if (!(n % i)) {
			printf("%d", i);
			if (i != n)
				printf(" ");
		}
		i++;
	}

	return 0;
}