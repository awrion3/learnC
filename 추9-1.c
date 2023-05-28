#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int x, y, z;
	int *px, *py, *pz, *tmp;

	px = &x;
	py = &y;
	pz = &z;

	scanf("%d%d%d", &*px, &*py, &*pz);

	tmp = px;
	px = pz;
	pz = tmp;

	tmp = pz;
	pz = py;
	py = tmp;

	printf("%d %d %d", *px, *py, *pz);

	return 0;
}