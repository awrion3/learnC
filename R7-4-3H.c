#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N, arr[20], arr2[20], cnt;
	int fl, mx[20], mn[20], idx = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		arr2[i] = arr[i]; //
	}

	//
	for (int i = N - 1; i >= 0; i--)
		printf(" %d", arr[i]);
	printf("\n");

	//
	while (N > 1) { ///

		cnt = 0; fl = 0;
		for (int i = 0; i < N; i++)
		{
			if (fl == 0) {
				mx[idx] = arr[i];
				mn[idx] = arr2[i];
				fl = 1;
			}

			if (mx[idx] < arr[i])
				mx[idx] = arr[i];
			if (mn[idx] > arr2[i])
				mn[idx] = arr2[i];

			cnt++;
			if (cnt % 3 == 0)
			{
				fl = 0;
				idx++;
			}
		}

		if (cnt % 3 != 0) //인덱스 범위 조정..
			idx++; ///

		for (int i = 0; i < idx; i++)
			printf(" %d", mx[i]);
		printf("\n");

		for (int i = 0; i < idx; i++)
			printf(" %d", mn[i]);
		printf("\n");

		//
		N = idx;
		for (int i = 0; i < N; i++)
		{
			arr[i] = mx[i];
			arr2[i] = mn[i];
		}
		idx = 0;
		//
	}

	return 0;
}
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20