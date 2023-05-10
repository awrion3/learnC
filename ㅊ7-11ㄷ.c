#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int S[3][2], i, j, ks = 0, es = 0;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			scanf("%d", &S[i][j]);

	for (i = 0; i < 3; i++)
	{
		ks += S[i][0];
		es += S[i][1];
	}

	for (i = 0; i < 3; i++)
	{
		if (S[i][0] < ks / 3)
			printf("%d ", S[i][0]);
		
		if (S[i][1] < es / 3)
			printf("%d\n", S[i][1]);
		else
			printf("\n");
	}

	return 0;
}