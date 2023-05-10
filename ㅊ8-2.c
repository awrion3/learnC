#pragma warning (disable:4996) //scanf() 함수 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

/*/함수 선언/*/
int sum (int);

/*/main 함수/*/
int main (void) {

	int a, b;
	scanf("%d%d", &a, &b);

	printf("%d", sum(b) - sum(a) + a); //(1 ~ b) - (1 ~ a) + a//

	return 0;					//프로그램 정상 종료//
}

/*/함수 정의/*/
int sum (int n) {

	return (n * (n + 1)) / 2;
}