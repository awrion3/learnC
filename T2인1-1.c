#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N, num, arr[100], idx = 0, tmp;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num);

		if (num > 0)
			arr[idx++] = num;
	}

	if (idx % 2 == 0) {
		for (int i = 0; i < idx - 1; i++)
			for (int j = i + 1; j < idx; j++)
				if (arr[i] < arr[j]) {
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
	}
	else {
		for (int i = 0; i < idx - 1; i++)
			for (int j = i + 1; j < idx; j++)
				if (arr[i] > arr[j]) {
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
	}

	printf("%d\n", idx);
	for (int i = 0; i < idx; i++)
		printf("%d ", arr[i]);

	return 0;
}
//10
//9 -9 7 -7 5 -5 3 -3 1 -1
//10
//1 3 -5 7 9 2 4 6 8 0