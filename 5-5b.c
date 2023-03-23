#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N;
	scanf("%d", &N);

	if (!(N % 2))
		if (!(N % 3))
			if (!(N % 5))
				printf("A");
			else
				printf("B");
		else if (!(N % 5))
			printf("C");
		else
			printf("E");

	else if (!(N % 3))
		if (!(N % 5))
			printf("D");
		else
			printf("E");

	else if (!(N % 5))
		printf("E");

	else
		printf("N");

	return 0;
}