#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int N, a;

	scanf("%d", &N);
	
	a = N >= 20 && N <= 30;

	printf("%d", a);

	return 0;
}