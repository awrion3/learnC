#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	char c[5], cmp;

	for (int i = 0; i < 5; i++)
		scanf("%c", &c[i]);

	for (int k = 0; k < 5; k++) {
		
		for (int j = 0; j < 5; j++)
			printf("%c", c[j]);
		printf("\n");

		cmp = c[4];
		for (int i = 3; i >= 0; i--)
			c[i + 1] = c[i];
		c[0] = cmp;
	}
	
	return 0;
}