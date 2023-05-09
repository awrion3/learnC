#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N[5], i, tmp;

	for (i = 0; i < 5; i++)
		scanf("%d", &N[i]);

	//버블정렬 1회
	for (i = 0; i < 4; i++)
		if (N[i] > N[i + 1])
		{
			tmp = N[i + 1];
			N[i + 1] = N[i];
			N[i] = tmp;
		}

	for (i = 0; i < 5; i++)
		printf("%d ", N[i]);

	return 0;
}