#pragma warning (disable: 4996)
#include <stdio.h>

int main(void) {

	int N, arr[100], max, min, mx[100], mn[100];
	int fl = 0, idx = 0;

	//1 입력
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	//2 출력
	for (int i = N - 1; i >= 0; i--)
		printf(" %d", arr[i]);
	printf("\n");

	//3 최대최소값
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

		if ((i + 1) % 3 == 0 || (i + 1) == N) { 
			mx[idx] = max;   //마지막 것도 저장해야
			mn[idx] = min;
			
			idx++;
			fl = 0;
		}		
	}

	//4 출력
	for (int i = 0; i < idx; i++)
		printf(" %d", mx[i]);
	printf("\n");

	for (int i = 0; i < idx; i++)
		printf(" %d", mn[i]);
	printf("\n");

	return 0;
}
//20
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 21