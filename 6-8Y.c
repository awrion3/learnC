#pragma warning (disable:4996) 
#include <stdio.h> 

int main(void) {
	int n, sum = 0;

	scanf("%d", &n);

	do {
		sum += n % 10;
		n /= 10;
	} while (n != 0);	//혹은 n > 0

	printf("%d", sum);

	return 0;
}
/*
int n, x = 1;
int sum = 0;

do {
	sum += n / x % 10;  // (n / 1 % 10), (n / 10 % 10),
	x *= 10;			// (n / 100 % 10), (n / 1000 % 10)하며 각 자리수 더함.
} while ( x <= n );		//나누는 수 x는 주어진 수 n의 자리수를 넘어서지 않는다
*/