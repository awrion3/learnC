#pragma warning (disable:4996) //scanf() 함수 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

/*/함수 선언/*/
int func2(int, int, int, int);

/*/main 함수/*/
int main(void) {

	/*변수 선언 및 입력*/
	int X, a, b, c;
	scanf("%d", &X);
	scanf("%d%d%d", &a, &b, &c);

	/*변수 값 계산 및 출력*/
	printf("%d", func2(X, a, b, c));

	return 0;		   //프로그램 정상 종료//
}

/*/함수 정의/*/
int func2(int x, int a, int b, int c) {

	return a * (x * x) + b * x + c;
}