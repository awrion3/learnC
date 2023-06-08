#pragma warning (disable:4996)
#include <stdio.h>

void sort(int, int*, double*);

int main(void) {

	int N, st[100], s1[100], s2[100];
	double avg[100];
	int *sp = st, *s1p = s1, *s2p = s2;
	double *agp = avg;
	
	scanf("%d", &N);

	for (sp = st; sp < st + N; sp++, s1p++, s2p++, agp++){
		scanf("%d", sp);
		scanf("%d", s1p);
		scanf("%d", s2p);
		*agp = (double)(*s1p + *s2p) / 2;
	}

	sort(N, st, avg);

	for (sp = st, agp = avg; sp < st + N; sp++, agp++)
		printf("%d %.1f\n", *sp, *agp);

	return 0;
}

void sort(int N, int *id, double *avg) {

	double *p, *r, dmp;
	int *q, tmp;

	for (p = avg; p < avg + N - 1; p++) //버블정렬
		for (r = avg, q = id; r < avg + N - 1; r++, q++) //항상 인덱스 잘 이동시키고 있는지 확인
			if (*r < *(r + 1)) {
				dmp = *r;
				*r = *(r + 1);
				*(r + 1) = dmp;

				tmp = *q;
				*q = *(q + 1);
				*(q + 1) = tmp;
			}
}
