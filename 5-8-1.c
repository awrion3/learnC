#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int N;

	scanf("%d", &N);

	if (!(N % 4) && (N % 100) || !(N % 400))
		printf("leap year");
	else
		printf("common year");

	return 0;
}