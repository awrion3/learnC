#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N;
	scanf("%d", &N);

	if (!(N % 3) && !(N % 5))
		printf("%d is a multiple of %d.", N, 15);
	else {
		if (!(N % 3))
			printf("%d is a multiple of %d.", N, 3);
		else if (!(N % 5))
			printf("%d is a multiple of %d.", N, 5);
		else
			printf("%d is a multiple of %d.", N, N);
	} //가독성을 위해 (사실상 if /else if /else if /else지만.)

	return 0;
}