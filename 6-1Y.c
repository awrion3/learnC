#pragma warning (disable:4996) 
#include <stdio.h> 

int main(void) {

	int n, i = 1;
	scanf("%d", &n);

	while (i < 10) {
		printf("%d * %d = %d\n", n, i, n * i);
		i++;
	}

	return 0;
}