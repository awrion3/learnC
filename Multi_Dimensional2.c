#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int villa[4][2];
	int popl , i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%dF %dR popl: ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
	}

	for (i = 0; i < 4; i++)
	{
		popl = 0;
		popl += villa[i][0];
		popl += villa[i][1];
		printf("%F popl: %d \n", i + 1, popl);
	}
	return 0;
}