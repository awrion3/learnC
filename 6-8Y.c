#pragma warning (disable:4996) 
#include <stdio.h> 

int main(void) {
	int n, sum = 0;

	scanf("%d", &n);

	do {
		sum += n % 10;
		n /= 10;
	} while (n != 0);	//Ȥ�� n > 0

	printf("%d", sum);

	return 0;
}
/*
int n, x = 1;
int sum = 0;

do {
	sum += n / x % 10;  // (n / 1 % 10), (n / 10 % 10),
	x *= 10;			// (n / 100 % 10), (n / 1000 % 10)�ϸ� �� �ڸ��� ����.
} while ( x <= n );		//������ �� x�� �־��� �� n�� �ڸ����� �Ѿ�� �ʴ´�
*/