#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int N, s1[20], s2[20], rk[20], P;
	double ag[20];
	char pf[20];

	//
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &s1[i]);

	for (int i = 0; i < N; i++)
		scanf("%d", &s2[i]);

	for (int i = 0; i < N; i++)
		ag[i] = s1[i] * 0.4 + s2[i] * 0.6;

	for (int i = 0; i < N; i++) {
		rk[i] = 1;
		for (int j = 0; j < N; j++)
			if (ag[i] < ag[j])
				++rk[i];
	}

	P = 0.7 * N;

	for (int i = 0; i < N; i++)
		if (rk[i] <= P)
			pf[i] = 'P';
		else {
			if (s2[i] >= 80)
				pf[i] = 'P';
			else
				pf[i] = 'F';
		}

	for (int i = 0; i < N; i++)
		printf("%d %d %d %.1f %d %c\n", i + 1, s1[i], s2[i], ag[i], rk[i], pf[i]);

	return 0;
}
//10
//0 90 60 70 60 80 60 30 20 30
//80 30 90 60 60 50 90 90 20 30