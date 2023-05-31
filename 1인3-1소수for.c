#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N, num, isp, cnt = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num);

		isp = 1;
		for (int j = 2; j < num; j++)
			if (num % j == 0)
				isp = 0;
		if (num < 2)
			isp = 0;

		if (isp == 1) {
			printf("%d ", num);
			cnt++;

			if (cnt % 3 == 0 || i + 1 == N)
				printf("*\n");
		}
	}

	return 0;
}
//11
//1 2 3 4 5 6 7 8 9 10 11 
//15
//11 13 17 19 71 73 74 2 3 5 58 97 89 79 45