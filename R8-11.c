#pragma warning (disable:4996)
#include <stdio.h>

//0 선언
int count_strike(int, int, int);
int count_ball(int, int, int);
int A, B, C;

int main(void) {

	int a, b, c;

	scanf("%d%d%d", &A, &B, &C);

	scanf("%d%d%d", &a, &b, &c);
	while (!(a == A && b == B && c == C)) {
		printf("%dS%dB\n", count_strike(a, b, c), count_ball(a, b, c));
	
		scanf("%d%d%d", &a, &b, &c);
	}

	printf("%dS%dB\n", count_strike(a, b, c), count_ball(a, b, c));

	return 0;
}

//1 정의
int count_strike(int a, int b, int c) {

	return (a == A) + (b == B) + (c == C);
}

int count_ball(int a, int b, int c) {

	int ball = 0;

	if (a == B || a == C)
		ball++;
	if (b == A || b == C)
		ball++;
	if (c == A || c == B)
		ball++;

	return ball;
}
