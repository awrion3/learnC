#pragma warning (disable:4996) //scanf() 함수 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

/*/함수 및 전역변수 선언/*/
void die1(int);
void die2(int, int);
void die3(int, int, int);

int N;

/*/main 함수/*/
int main(void) {

	/*변수 값 입력*/
	scanf("%d", &N);

	/*변수 값 계산*/
	for (int i = 1; i <= 6; i++)
		die1(i);

	return 0;		   //프로그램 정상 종료//
}

/*/함수 정의/*/
void die1(int x) {

	for (int i = 1; i <= 6; i++)
		die2(x, i);
}

void die2(int x, int y) {

	for (int i = 1; i <= 6; i++)
		die3(x, y, i);
}

void die3(int x, int y, int z) {

	if (x + y + z == N)
		printf("%d %d %d\n", x, y, z);
}