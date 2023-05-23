#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N, M, arr[100], sum = 0, cnt = 0, idx = 0, ix = 0;
	double avg[100];
	int fl = 0, max, min, mx[100], mn[100], jdx = 0;

	scanf("%d%d", &N, &M);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);

		sum += arr[i];
		cnt++;

		if ((i + 1) % M == 0 || i + 1 == N) {
			avg[idx++] = (double) sum / cnt;
			sum = 0; cnt = 0;
		}
	}
	
	//출력
	for (int i = 0; i < N; i++) {
		if (arr[i] >= avg[ix])
			printf(" %d", arr[i]);

		if ((i + 1) % M == 0)
			ix++;
	}
	printf("\n");

	//
	for (int i = 0; i < N; i++) {
		if (fl == 0) {
			max = arr[i];
			min = arr[i];
			fl = 1;
		}
		else {
			if (max < arr[i])
				max = arr[i];
			if (min > arr[i])
				min = arr[i];
		}

		if ((i + 1) % M == 0 || i + 1 == N) {
			mx[jdx] = max;
			mn[jdx] = min;
			fl = 0; jdx++;
		}
	}

	//출력
	for (int i = 0; i < jdx; i++)
		printf(" %d", mx[i]);
	printf("\n");

	for (int i = 0; i < jdx; i++)
		printf(" %d", mn[i]);
	printf("\n");

	return 0;
}
//6 4
//1 2 3 4 5 5
//23 5
//12 13 14 7 6 5 15 15 15 3 3 9 11 5 5 20 1 15 3 7 17 5 8