#pragma warning(disable:4996)
#include <stdio.h>

void pswap(int**, int**);

int main(void) {

	int x, y, *px = &x, *py = &y;

	scanf("%d%d", &x, &y);

	pswap(&px, &py);

	printf("%d %d", *px, *py);	//x�� y�� ����� ���� �״����, �ּ� ��ȯ�̹Ƿ�.

	return 0;
}

void pswap(int** ppx, int** ppy) {

	int *tmp = *ppx;
	*ppx = *ppy;
	*ppy = tmp;

}