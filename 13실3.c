#pragma warning(disable:4996)
#include <stdio.h>

//
int fib(int);

int main(void) {

	int num;
	
	scanf("%d", &num);

	printf("%d", fib(num));

	return 0;
}

//
int fib(int n) {
	int sum = 0;

	if (n == 0)
		sum = 0;
	else if (n == 1)
		sum = 1;
	else
		sum = fib(n - 1) + fib(n - 2);

	return sum;
}