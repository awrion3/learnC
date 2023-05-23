#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int N, arr[20], cnt[20], fl;

	//1 ют╥б
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	//2 х╫╪Ж
	for (int i = 0; i < N; i++) {
		cnt[i] = 0;
		for (int j = 0; j < N; j++)
			if (arr[i] == arr[j])
				++cnt[i];
	}
		
	for (int i = 0; i < N; i++) {
		fl = 1;
		for (int j = 0; j < i; j++)
			if (arr[i] == arr[j])
				fl = 0;

		if (fl == 1)
			printf("%d %d\n", arr[i], cnt[i]);
	}

	return 0;
}
//15
//5 10 2 5 50 5 10 1 2 2 3 4 4 1 1