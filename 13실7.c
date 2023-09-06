#pragma warning(disable:4996)
#include <stdio.h>

int add(int, int);

int main(void) {

	int A, x, y, (*fp) (int, int) = add;
	void *p = &A;

	scanf("%d", &A);
	scanf("%d%d", &x, &y);

	printf("%d\n", *(int*)p);	//void 포인터

	printf("%d", fp(x, y));		//함수 포인터

	return 0;
}

int add(int x, int y) {

	return x + y;
}