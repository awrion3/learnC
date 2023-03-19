#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);

	if (N < 0)
		printf("cold, indoor");
	else if (N < 40)
		printf("moderate, outdoor");
	else
		printf("hot, indoor");

	return 0;
}