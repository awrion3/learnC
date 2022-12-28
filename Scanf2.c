#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	//Problem 1
	int n1, n2, r1, r2;

	printf("2 Int Nums: ");
	scanf("%d %d", &n1, &n2);

	r1 = n1 - n2;
	r2 = n1 * n2;

	printf("%d - %d = %d \n", n1, n2, r1);
	printf("%d * %d = %d \n", n1, n2, r2);

	
	//Problem 2
	int num, result;
	
	printf("1 Int Num: ");
	scanf("%d", &num);

	result = num * num;
	printf("Square result: %d \n", result);

	return 0;
}