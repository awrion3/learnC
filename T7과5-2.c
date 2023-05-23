#pragma warning (disable: 4996)
#include <stdio.h>

int main(void) {

	int A[100], N, idx = 0, fl, rA[100];
	int B[100], jdx = 0, rB[100];
	int C[200], kdx = 0, tmp;

	//1 입력
	scanf("%d", &N);
	while (N >= 0) {
		A[idx++] = N;
		scanf("%d", &N);
	}

	scanf("%d", &N);
	while (N >= 0) {
		B[jdx++] = N;
		scanf("%d", &N);
	}

	//2 집합
	for (int i = 0; i < idx; i++) {
		fl = 1;
		for (int j = 0; j < i; j++)
			if (A[i] == A[j])
				fl = 0;

		rA[i] = fl;
	}

	for (int i = 0; i < jdx; i++) {
		fl = 1;
		for (int j = 0; j < i; j++)
			if (B[i] == B[j])
				fl = 0;

		rB[i] = fl;
	}

	//3 합집합
	for (int i = 0; i < idx; i++)
		if (rA[i] == 1)
			C[kdx++] = A[i];

	for (int i = 0; i < jdx; i++)
		if (rB[i] == 1)
			C[kdx++] = B[i];

	//4 선택정렬
	for (int i = 0; i < kdx - 1; i++)
		for (int j = i + 1; j < kdx; j++)
			if (C[i] > C[j]) {
				tmp = C[i];
				C[i] = C[j];
				C[j] = tmp;
			}

	//5 중복제외
	for (int i = 0; i < kdx; i++) {
		fl = 1;
		for (int j = 0; j < i; j++)
			if (C[i] == C[j])
				fl = 0;

		if (fl == 1)
			printf(" %d", C[i]);
	}

	return 0;
}

//2 4 6 7 8 1 2 3 4 -1
//1 2 3 4 2 4 6 7 8 -1