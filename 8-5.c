#pragma warning (disable:4996)
#include <stdio.h>

//
void print_triangle(int);

//
int main(void) {

	int N;
	scanf("%d", &N);

	while (N > 0) {

		print_triangle(N); //

		scanf("%d", &N);
	}

	return 0;
}

//
void print_triangle(int x) {
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
}
