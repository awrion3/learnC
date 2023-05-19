#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N[100], M[100], idx = 0, jdx = 0, num, fl;
	int A[100], B[100], C[100], kdx = 0, tmp;

	scanf("%d", &num);
	while (num >= 0) {

		N[idx++] = num;

		scanf("%d", &num);
	}

	scanf("%d", &num);
	while (num >= 0) {

		M[jdx++] = num;

		scanf("%d", &num);
	}

	for (int i = 0; i < idx; i++)
	{
		fl = 1;
		for (int j = 0; j < i; j++)
			if (N[i] == N[j])
				fl = 0;

		A[i] = fl;
	}

	for (int i = 0; i < jdx; i++)
	{
		fl = 1;
		for (int j = 0; j < i; j++)
			if (N[i] == N[j])
				fl = 0;

		B[i] = fl;
	}

	//집합 합치기//
	for (int i = 0; i < idx; i++)
		if (A[i] == 1)
			C[kdx++] = N[i];

	for (int i = 0; i < jdx; i++)
		if (B[i] == 1)
			C[kdx++] = M[i];

	//합친 집합 정렬 및 중복 없이 출력//
	for (int i = 0; i < kdx - 1; i++)
		for (int j = i + 1; j < kdx; j++)
			if (C[i] > C[j]) {
				tmp = C[i];
				C[i] = C[j];
				C[j] = tmp;
			}

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
//2 4 6 7 8 2 4 6 7 8 -1
//1 1 1 1 1 1 1 1 1 1 -1

//2 4 6 7 8 1 2 3 4 -1
//1 2 3 4 2 4 6 7 8 -1