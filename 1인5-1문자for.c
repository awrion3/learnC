#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	char c1, c2, is = 0;
	
	scanf("%c%c", &c1, &c2);

	for (int i = c1; i <= c2; i++)
		for (int j = c1; j <= c2; j++)
			for (int k = c1; k <= c2; k++)
				if (!(i == j && j == k))
					if (j == 'a' || j == 'e' || j == 'i' || j == 'o' || j == 'u')
						if (i <= j && j <= k || k <= j && j <= i) {
							printf("%c%c%c\n", i, j, k);
							is = 1;
						}
	
	if (is == 0)
		printf("none\n");

	return 0;
}
//dg