#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	char S[6][5] = { {'Z','E','R','O','-'}, {'O','N','E','-','-'}, {'T','W','O','-','-'}, {'T','H','R','E','E'}, {'F','O','U','R','-'}, {'F','I','V','E','-'} };

	int i, j, n1, n2, n3;

	scanf("%d%d%d", &n1, &n2, &n3); //
	
	for (j = 0; j < 5; j++)
		printf("%c", S[n1][j]);
	printf("\n");

	for (j = 0; j < 5; j++)
		printf("%c", S[n2][j]);
	printf("\n");

	for (j = 0; j < 5; j++)
		printf("%c", S[n3][j]);
	printf("\n");

	return 0;
}