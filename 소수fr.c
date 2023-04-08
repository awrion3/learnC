#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int i, j, isP, cnt = 0;

	for (i = 2; i <= 50; i++)
	{
		isP = 1;
		for (j = 2; j < i; j++)
			if (!(i % j))
				isP = 0;
		if (isP == 1)
		{
			printf(" %d", i);
			cnt++;
			if (!(cnt % 5))
				printf("\n");
		}
	}
		
	return 0;
}