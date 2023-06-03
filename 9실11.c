#pragma warning (disable:4996)
#include <stdio.h>

void strcopy(char[], char[]);

int main(void) {

	char a[6], b[6] = { 0 };
	char *pa = a, *pb = b;

	for (pa = a; pa < a + 6; pa++)
		scanf("%c", pa);

	strcopy(a, b);

	for (pb = b; pb < b + 6; pb++)
		printf("%c", *pb);

	return 0;
}

void strcopy(char a[], char b[]) {

	char *pa = a, *pb = b;

	for (pa = a, pb = b; pa < a + 6; pa++, pb++)
		*pb = *pa;
}