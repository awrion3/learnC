#pragma warning (disable:4996) //scanf() 함수 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

/*/함수 선언/*/
int sum(int);

/*/main 함수/*/
int main(void) {

	/*변수 선언 및 입력*/
	int X, R = 0, i;

	scanf("%d", &X);

	/*변수 값 계산*/
	for (i = 1; i <= X; i++) //X회 반복
		R += sum(i);

	/*변수 값 출력*/
	printf("%d", R);

	return 0;		   //프로그램 정상 종료//
}

/*/함수 정의/*/
int sum(int n) {

	return (n * (n + 1)) / 2;
}
