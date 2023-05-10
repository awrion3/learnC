#pragma warning (disable:4996) //scanf() 함수 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

/*/함수 및 전역변수 선언/*/
int aA, aB, aC;

int count_strike(int, int, int);
int count_ball(int, int, int);

/*/main 함수/*/
int main(void) {

	/*변수 선언 및 입력*/
	int gA, gB, gC;

	scanf("%d%d%d", &aA, &aB, &aC);

	scanf("%d%d%d", &gA, &gB, &gC);

	/*변수 값 계산 및 출력*/
	while (!(aA == gA && aB == gB && aC == gC)) {

		printf("%dS%dB\n", count_strike(gA, gB, gC), count_ball(gA, gB, gC));

		scanf("%d%d%d", &gA, &gB, &gC);
	}

	printf("%dS%dB\n", count_strike(gA, gB, gC), count_ball(gA, gB, gC));

	return 0;		   //프로그램 정상 종료//
}

/*/함수 정의/*/
int count_strike(int a, int b, int c) {
	
	int x = 0;

	if (aA == a)
		x += 1;
	if (aB == b)
		x += 1;
	if (aC == c)
		x += 1;
	
	return x;
}
int count_ball(int a, int b, int c) {

	int y = 0;

	if (aA == b || aA == c)
		y += 1;
	if (aB == a || aB == c)
		y += 1;
	if (aC == a || aC == b)
		y += 1;

	return y;
}

