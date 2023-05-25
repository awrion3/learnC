#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	char x[6][5] = { {'Z', 'E', 'R', 'O', '-'}, {'O', 'N', 'E', '-', '-'},
	{'T', 'W', 'O', '-', '-'}, {'T', 'H', 'R', 'E', 'E'}, {'F', 'O', 'U', 'R', '-'},
	{'F', 'I', 'V', 'E', '-'} };

	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	for (int j = 0; j < 5; j++)
		printf("%c", x[a][j]);
	printf("\n");

	for (int j = 0; j < 5; j++)
		printf("%c", x[b][j]);
	printf("\n");

	for (int j = 0; j < 5; j++)
		printf("%c", x[c][j]);
	printf("\n");

	return 0;
}