#pragma warning(disable:4996)
#include <stdio.h>

//
int euclidean(int, int);

int main(void) {

	int a, b;

	scanf("%d%d", &a, &b);

	printf("%d", euclidean(a, b));

	return 0;
}

//
int euclidean(int a, int b) {

	int c, d, r;

	c = a > b ? a - b : b - a;
	d = a > b ? b : a;

	if (c != d){
		r = euclidean(c, d);
		return r;
	}

	return c;
}