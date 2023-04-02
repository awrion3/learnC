#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int N, n, i, cnt = 0;
	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		n = i;
		while (n != 0)
		{
			if (n % 10 == 3)
				cnt++;
			n /= 10;
		}
	}
	printf("%d", cnt);

	return 0;
}