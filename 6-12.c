#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int N, i = 1, sum = 0;
	scanf("%d", &N);

	for (;;) {
		sum += i;
		i++;
		if (i > N)
			break;
	}
	printf("%d", sum);

	return 0;
}