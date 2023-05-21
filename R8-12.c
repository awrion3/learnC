#pragma warning (disable:4996)
#include <stdio.h>

//1
void print_line(int, int, int);

int main(void) {

	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
		print_line(N - i, i, N - i);

	return 0;
}

//2
void print_line(int x, int y, int z) {

	for (int i = 0; i < x; i++)
		printf(" ");
	
	for (int i = 0; i < y * 2 - 1; i++)
		printf("*");
	
	for (int i = 0; i < z; i++)
		printf(" ");

	printf("\n");
}