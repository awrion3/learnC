#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);

	if (!(N % 2) && !(N % 3) && !(N % 5))
		printf("A");

	else if (!(N % 2) && !(N % 3))
		printf("B");
	else if (!(N % 2) && !(N % 5))
		printf("C");
	else if (!(N % 3) && !(N % 5))
		printf("D");
	
	else if ((N % 2) && (N % 3) && (N % 5))
		printf("N");
	
	else
		printf("E");

	return 0;
}