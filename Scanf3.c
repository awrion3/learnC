#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	//Problem 3
	int N1, N2, Q, R;

	printf("2 Int Nums: ");
	scanf("%d %d", &N1, &N2);
	
	Q = N1 / N2; // Q is int
	R = N1 % N2;
	printf("Quotient: %d, Remainder: %d \n", Q, R);

	//Problem 4
	int num1, num2, num3;

	printf("3 Int Nums: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("Result: %d \n", (num1 - num2) * (num2 + num3) * (num3 % num1));

	return 0;
}