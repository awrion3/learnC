#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int a, b, c;
	char ch;
	scanf("%d%d%d", &a, &b, &c);

	a = a / 100 % 10;
	b = b / 100 % 10;
	c = c / 100 % 10;

	ch = a == b && b == c ? 'T' : a == b || b == c || c == a ? 'D' : 'S';

	printf("%c", ch);

	return 0;
}