#pragma warning(disable:4996)
#include <stdio.h>

//0 선언
int add_digits(int);

int main(void) {

	//1 입력
	int N;
	scanf("%d", &N);

	//3 호출
	while (N > 9) {
		N = add_digits(N);
	}
	//4 출력
	printf("%d", add_digits(N));

	return 0;
}

//2 정의
int add_digits(int N) {

	int sum = 0;

	while (N != 0) {
		sum += N % 10;
		N /= 10;
	}

	return sum;
}