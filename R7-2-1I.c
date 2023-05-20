#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	//1
	int N, arr[100];
	int sum = 0, cnt = 0, idx = 0, jdx;
	double avg[100];

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	
	//2
	for (int i = 0; i < N; i++) {

		sum += arr[i];
		cnt++;

		if ((i + 1) % 3 == 0 || i + 1 == N) { //

			avg[idx++] = (double)sum / cnt;   //

			sum = 0;
			cnt = 0;
		}	
	}

	//3
	jdx = 0;
	for (int i = 0; i < N; i++) {

		if (arr[i] >= avg[jdx])
			printf(" %d", arr[i]);
		//
		if ((i + 1) % 3 == 0)
			jdx++;
	}

	return 0;
}
//20
//12 13 14 7 6 5 15 15 15 3 3 9 11 5 5 20 1 15 3 7