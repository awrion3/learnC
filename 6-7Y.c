#pragma warning (disable:4996) 
#include <stdio.h> 

int main(void) {
	int x = 0, sum = 0;

	do {
		x++;
		sum += x;
	} while (sum < 100);

	printf("%d", x);

	return 0;
}