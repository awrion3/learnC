#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int N, v;
	
	scanf("%d", &N);

	v = N / 100 % 10;

	printf("%d", v);

	return 0;
}