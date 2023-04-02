#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int N, sum = 0, cnt = 0;

	while (1) {
		scanf("%d", &N);
		if (N <= 0)
			break;
		else if (N > 100)
			continue;
		else
		{
			sum += N;
			cnt++;
		}
	}

	printf("%d %.2f %d", sum, (double)sum/cnt, cnt);

	return 0;
}