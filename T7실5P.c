#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int N, arr[100], idx = 0, fl, sum = 0;
	
	do {
		scanf("%d", &N);

		fl = 1;
		for (int i = 0; i < idx; i++)
			if (arr[i] == N) //
				fl = 0;
		
		if (fl == 0)
			break; //
		else {
			arr[idx++] = N;
			sum += N;
		}
	} while (idx < 100); //인덱스는 99까지임

	printf("%d", sum);

	return 0;
}