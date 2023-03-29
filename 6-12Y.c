#pragma warning (disable:4996) 
#include <stdio.h> 

int main(void) {

	int n, i;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		printf("   ");

	for (i = 1; i <= 31; i++) {
		printf("%3d", i);
		if (!((n + i) % 7))
			printf("\n");
	}

	return 0;
}