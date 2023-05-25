#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int x[3][3], y[2][2], row, col, is = 0;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &x[i][j]);

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			scanf("%d", &y[i][j]);

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			if (x[i][j] == y[0][0] && x[i][j + 1] == y[0][1] && x[i + 1][j] == y[1][0] && x[i + 1][j + 1] == y[1][1]) {
				if (is == 0) { //첫번째 나타내는 행렬 저장
					row = i;
					col = j;
					is = 1;
				}
			}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			printf(" %d", x[i][j]);
		printf("\n");
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			printf(" %d", y[i][j]);
		printf("\n");
	}

	if (is == 0)
		printf("none");
	else
		printf("%d %d", row, col);

	return 0;
}
//3 3 3 1 1 3 1 1 3
//1 1 1 1
//1 1 1 2 2 2 3 3 3 
//1 1 1 1