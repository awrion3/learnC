#pragma warning(disable:4996)
#include <stdio.h>

//0 선언
int multiple(int, int);
int maximum(int, int);
int digit_maximum(int);

int main(void) {

	int N, M, K;
	int max = 0, max2 = 0;

	//1 입력
	scanf("%d%d%d", &N, &M, &K);

	//2 개요
	for (int i = N; i <= M; i++)
		if (multiple(i, K)) 
			max = maximum(digit_maximum(i), max); //6
		else 
			max2 = maximum(i % K, max2);
	
	//7 출력
	printf("%d", maximum(max, max2));

	return 0;
}

//3 정의
int multiple(int x, int y) {

	if (x % y == 0)
		return 1;

	return 0;
}

//5
int maximum(int x, int y) {

	if (x > y)
		return x;

	return y;
}

//4
int digit_maximum(int x) {

	int max = 0;

	while (x != 0) {
		max = maximum(x % 10, max);
		x /= 10;
	}

	return max;
}