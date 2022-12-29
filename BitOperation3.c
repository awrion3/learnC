#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	printf("input integer: ");
	scanf("%d", &num);
	num = ~num + 1;
	printf("negative output: %d \n", num);

	int N = 3;
	N = N << 3;
	N = N >> 2;
	printf("3 X 8 / 4 = %d \n", N);

	return 0;
}