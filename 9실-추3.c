#pragma warning(disable:4996)
#include <stdio.h>

void eliminate(char *);

int main(void) {

	char ar[100] = { 0 }, *p = ar;

	eliminate(ar);

	do {
		printf("%c", *p++);
	} while (*p != 0);

	return 0;
}

void eliminate(char *ar) {

	char ch, *ap, N = 0, isdup, * p = ar;

	do {
		scanf("%c", &ch);
		isdup = 0;
		for (ap = ar; ap < ar + N; ap++)
			if (*ap == ch)
				isdup = 1;
		if (isdup == 0)
			*(p + N++) = ch;
	} while (ch != '*');
}