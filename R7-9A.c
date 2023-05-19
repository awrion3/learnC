#pragma warning (disable:4996)	//
#include <stdio.h>				//

int main(void) {

	int N[5], tmp;

	for (int i = 0; i < 5; i++)
		scanf("%d", &N[i]);

	for (int i = 0; i < 5; i++) //버블정렬 4(5)회
		for (int j = 0; j < 4; j++)
			if (N[j] > N[j + 1])
			{
				tmp = N[j + 1];
				N[j + 1] = N[j];
				N[j] = tmp;
			}

	for (int i = 0; i < 5; i++)
		printf("%d\n", N[i]);

	return 0;
}