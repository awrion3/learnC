#pragma warning (disable: 4996)
#include <stdio.h>

int main(void) {

	int A[20], M, tmp;

	scanf("%d", &M);

	for (int i = 0; i < 20; i++)
		A[i] = i + 1;

	tmp = A[19];
	for (int i = 19; i >= 19 - M + 1; i--) //19 ~ 16
		A[i] = A[i - 1];
	A[19 - M + 1] = tmp;

	for (int i = 0; i < 20; i++)
		printf("%d ", A[i]);

	return 0;
}
//4