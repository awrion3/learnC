#include <stdio.h>
#define SQUARE(X) X*X

int main(void)
{
	int num = 20;

	printf("square of num: %d \n", SQUARE(num));
	printf("square of 2+3: %d \n", SQUARE((2+3)));

	return 0;
}