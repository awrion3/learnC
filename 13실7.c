#pragma warning(disable:4996)
#include <stdio.h>

int add(int, int);

int main(void) {

	int A, x, y, (*fp) (int, int) = add;
	void *p = &A;

	scanf("%d", &A);
	scanf("%d%d", &x, &y);

	printf("%d\n", *(int*)p);	//void ������

	printf("%d", fp(x, y));		//�Լ� ������

	return 0;
}

int add(int x, int y) {

	return x + y;
}