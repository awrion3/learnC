#pragma warning(disable:4996)
#include <stdio.h>

void swap(int*, int*);

int main(void) {

	int N, ar[50], a, b;
	int *pr = ar, *pa, *pb;

	scanf("%d", &N);

	for (pr = ar; pr < ar + N; pr++)
		scanf("%d", pr);

	scanf("%d%d", &a, &b);

	pa = ar + a;
	pb = ar + b;

	swap(pa, pb);

	for (pr = ar; pr < ar + N; pr++)
		printf(" %d", *pr);

	return 0;
}

void swap(int *pa, int *pb) {

	int tmp;

	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}