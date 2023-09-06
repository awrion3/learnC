#pragma warning(disable:4996)
#include <stdio.h>

int add(int, int);
int sub(int, int);
int multiply(int, int);

int main(void) {

	int x, y;
	int (*handle[3])(int, int) = { add, sub, multiply };	//함수 포인터 배열 선언 및 연결

	scanf("%d%d", &x, &y);

	printf("%d %d %d", (*handle[0])(x, y), (*handle[1])(x, y), (*handle[2])(x, y));

	return 0;
}

int add(int x, int y) {

	return x + y;
}

int sub(int x, int y) {
	
	return x - y;
}

int multiply(int x, int y) {

	return x * y;
}