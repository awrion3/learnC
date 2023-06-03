#pragma warning(disable:4996)
#include <stdio.h>

void input(int*, int*, int*);
void output(int*, int*, int*);

int main(void) {

	int x, y, z;
	int *xp = &x, *yp = &y, *zp = &z;

	input(xp, yp, zp);
	output(xp, yp, zp);

	return 0;
}

void input(int *xp, int *yp, int *zp) {

	scanf("%d%d%d", xp, yp, zp);
}

void output(int *xp, int *yp, int *zp) {

	printf("%d %d %d", *xp, *yp, *zp);
}