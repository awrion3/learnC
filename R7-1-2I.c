#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int N, num, arr[100], idx = 0, tmp, cnt = 0, max = 0;
	//
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num);

		if (num > 0)
			arr[idx++] = num;
	}
	//
	printf("%d\n", idx);

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
	//
	for (int i = 0; i < idx; i++)
		printf("%d ", arr[i]);

	//NEW
	for (int i = 0; i < idx; i++)
		if (arr[i] % 2 != 0) {
			cnt++;
			if (max < cnt)
				max = cnt;
		}
		else
			cnt = 0;

	printf("\n%d", max);

	return 0;
}
//16
//5 1 -2 3 19 6 7 8 17 -4 9 11 -6 16 13 15