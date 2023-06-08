#pragma warning(disable:4996)
#include <stdio.h>

void print(char *, int);

int main(void) {

	char ch, ar[100], *p, K = 0, *st;
	int len = 0, max = 0, ldx = 0, I = 0;

	p = ar;
	scanf("%c", &ch);
	while (ch != '*') {
		*(p + K++) = ch;
		scanf("%c", &ch);
	}

	for (p = ar; p < ar + K; p++, I++)
		if (*p == ' ') {
			printf("%d\n", len);
			len = 0;
		}
		else {
			len++;
			if (len > max) {
				max = len;
				ldx = I;
			}
			if (p == ar + K - 1)
				printf("%d\n", len);
		}

	p = ar;
	st = p + ldx - max + 1;

	print(st, max);

	return 0;
}

void print(char *ch, int N) {

	char *cp;

	for (cp = ch; cp < ch + N; cp++)
		if (*cp >= 'a' && *cp <= 'z')
			*cp -= ('a' - 'A');

	for (cp = ch; cp < ch + N; cp++)
		printf("%c", *cp);
}