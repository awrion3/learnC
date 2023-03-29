#pragma warning (disable:4996) 
#include <stdio.h> 

int main(void) {

	int n, i, fac = 1;
	
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		fac *= i;
	
	printf("%d", fac);

	return 0;
}