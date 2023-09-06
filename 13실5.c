#pragma warning(disable:4996)
#include <stdio.h>

void pswap(int**, int**);

int main(void) {

	int x, y, *px = &x, *py = &y;

	scanf("%d%d", &x, &y);

	pswap(&px, &py);

	printf("%d %d", *px, *py);	//x와 y에 저장된 값은 그대로임, 주소 교환이므로.

	return 0;
}

void pswap(int** ppx, int** ppy) {

	int *tmp = *ppx;
	*ppx = *ppy;
	*ppy = tmp;

}