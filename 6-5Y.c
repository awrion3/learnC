#pragma warning (disable:4996) 
#include <stdio.h> 

int main(void) {

	int n, i = 1;
	scanf("%d", &n);

	do {
		printf("%d * %d = %d\n", n, i, n * i);
		i++;
	} while (i < 10);

	return 0;
}