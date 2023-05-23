#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int N, x[100], cnt = 1, max = 1; //

	//
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &x[i]);

	//
	for (int i = 0; i < N - 1; i++) //
		if (x[i] * x[i + 1] < 0) {
			cnt++;
			if (max < cnt)
				max = cnt;
		}
		else
			cnt = 1; //

	printf("%d", max);

	return 0;
}
//6
//-5 -6 -1 2 -8 -3