#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	//1
	int N, arr[100], M;
	int sum = 0, cnt = 0, idx = 0, jdx;
	double avg[100];
	//
	int max, min, fl = 0, mx[100], mn[100], kdx = 0;

	scanf("%d%d", &N, &M);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	//2
	for (int i = 0; i < N; i++) {

		//NEW
		if (fl == 0) {
			max = arr[i];
			min = arr[i];
			fl = 1;
		}
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];

		//
		sum += arr[i];
		cnt++;
		
		if ((i + 1) % M == 0 || i + 1 == N) { //

			avg[idx++] = (double)sum / cnt;   //

			sum = 0;
			cnt = 0;

			//
			mx[kdx] = max;
			mn[kdx] = min;

			fl = 0;
			kdx++;
		}
	}

	//3
	jdx = 0;
	for (int i = 0; i < N; i++) {

		if (arr[i] >= avg[jdx])
			printf(" %d", arr[i]);
		//
		if ((i + 1) % M == 0)
			jdx++;
	}

	//NEW
	printf("\n");
	for (int i = 0; i < kdx; i++)
		printf(" %d", mx[i]);

	printf("\n");
	for (int i = 0; i < kdx; i++)
		printf(" %d", mn[i]);

	return 0;
}
//23 5
//12 13 14 7 6 5 15 15 15 3 3 9 11 5 5 20 1 15 3 7 17 5 8