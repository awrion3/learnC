#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N, s1[20], s2[20], tmp, A, B, rk[20];
	char pf[20];
	double ag[20], dmp;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &s1[i]);

	for (int i = 0; i < N; i++)
		scanf("%d", &s2[i]);

	for (int i = 0; i < N; i++)
		ag[i] = s1[i] * 0.4 + s2[i] * 0.6;

	for (int i = 0; i < N - 1; i++)
		for (int j = i + 1; j < N; j++)
			if (ag[i] < ag[j]) {
				dmp = ag[i];
				ag[i] = ag[j];
				ag[j] = dmp;

				tmp = s1[i];
				s1[i] = s1[j];
				s1[j] = tmp;

				tmp = s2[i];
				s2[i] = s2[j];
				s2[j] = tmp;
			}
	//
	for (int i = 0; i < N; i++) {
		rk[i] = 1;
		for (int j = 0; j < N; j++)
			if (ag[i] < ag[j])
				++rk[i];
	}

	A = N * 0.3; B = N * 0.7;

	for (int i = 0; i < N; i++)
		if (rk[i] <= A)
			pf[i] = 'A';
		else if (rk[i] <= B)
			pf[i] = 'B';
		else if (s2[i] >= 60)
			pf[i] = 'B';
		else
			pf[i] = 'F';

	for (int i = 0; i < N; i++)
		printf("%d %d %.1f %d %c\n", s1[i], s2[i], ag[i], rk[i], pf[i]);

	return 0;
}
//7
//32 30 92 70 70 68 12
//80 35 90 60 60 50 90