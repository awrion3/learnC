#pragma warning(disable:4996)
#include <stdio.h>

void input(int*, int);
int* diff(int*, int);

int main(void) {

	int N, ar[100], *res;

	scanf("%d", &N);

	input(ar, N);
	
	res = diff(ar, N);

	printf("%d %d", *res, *(res + 1));

	return 0;
}

void input(int *ar, int N) {

	int *p;

	for (p = ar; p < ar + N; p++)
		scanf("%d", p);
}

int* diff(int *ar, int N) {

	int *p = ar, gap = 0, max = 0, *a = p;

	for (p = ar; p < ar + N - 1; p++) {
		
		gap = *p - *(p + 1) >= 0 ? *p - *(p + 1) : -(*p - *(p + 1));
		
		if (gap > max) {
			max = gap;
			a = p;
		}
	}
	return a;
}