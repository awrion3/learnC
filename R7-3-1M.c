#pragma warning (disable:4996)	//
#include <stdio.h>				//

int main(void) {

	int N, arr[100], cnt = 1, max = 1; //

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < N - 1; i++)
		if (arr[i] * arr[i + 1] < 0)
		{
			cnt++;
			if (max < cnt)
				max = cnt;
		}
		else
			cnt = 1;

	printf("%d", max);

	return 0;
}