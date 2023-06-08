#pragma warning(disable:4996)
#include <stdio.h>

void repeat(char *, int);

int main(void) {

	char ar[100] = { 0 }, ch, *ap = ar;
	int N;

	do {
		scanf("%c", &ch);
		*ap++ = ch;
	} while (ch != '*');

	scanf("%d", &N);

	repeat(ar, N);

	ap = ar;
	do {
		printf("%c", *ap);
	} while (*ap++ != '*');

	return 0;
}

void repeat(char *ar, int N) {

	char *p = ar;
	char rr[100], *rp = rr, K = 0, M = 0;

	do {
		K++;
	} while (*p++ != '*');

	for (int i = 0; i < N; i++)
		for (p = ar; p < ar + K - 1; p++)
			*(rp + M++) = *p;

	*(rp + M++) = '*';

	p = ar;
	for (rp = rr; rp < rr + M; rp++)
		*p++ = *rp;
}
