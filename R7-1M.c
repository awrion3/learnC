#pragma warning (disable:4996)	//
#include <stdio.h>				//

int main(void) {

	int N, arr[50], cnt[50] = { 0 }, fl;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (arr[i] == arr[j])
				++cnt[i];

	for (int i = 0; i < N; i++)
	{
		fl = 1;
		for (int j = 0; j < i; j++)
			if (arr[i] == arr[j])
				fl = 0;

		if (fl == 1)
			printf("%d %d\n", arr[i], cnt[i]);
	}

	return 0;
}