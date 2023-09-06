#pragma warning(disable:4996)
#include <stdio.h>

void ABC(int (*)[20], int, int);

int main(void) {

	int N, arr[20][20] = { 0 };

	scanf("%d", &N);

	ABC(arr, N, N);	

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			printf(" %d", arr[i][j]);
		printf("\n");
	}

	return 0;
}

void ABC(int(*p)[20], int k1, int k2) { //함수의 형식인자: 2차원 배열의 이름 전달 (포인터 표기)

	for (int i = 0; i < k1; i++)
		for (int j = 0; j < k2; j++)
			(*(p + i))[j] = i + j;

}