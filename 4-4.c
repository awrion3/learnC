#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int N, v, t;

	scanf("%d", &N);

	v = N / 100 % 10;
	
	t = N / 1000;

	v<5 ? t : t++;

	printf("%d", t*1000);

	return 0;
}