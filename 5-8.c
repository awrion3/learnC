#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int N;
	char y;
	
	scanf("%d", &N);

	if (!(N % 4)) {
		y = 'L';
		if (!(N % 100))
			y = 'C';
		if (!(N % 400))
			y = 'L';
	}
	else
		y = 'C';
	
	if (y == 'L')
		printf("leap year");
	else
		printf("common year");

	return 0;
}