#pragma warning (disable:4996)  //scanf_s() 함수 사용 관련 컴파일 오류 해제
#include <stdio.h>              //표준입출력 관련 헤더 파일 포함

int main(void) {                //프로그램 시작 지점 main() 함수

	int a, b, c;						//int형 변수 선언
	scanf("%d%d%d", &a, &b, &c);		//scanf()를 통한 3개의 정수 입력

	if (a + b == c)						//사칙연산 a + b == c가 성립할 시, + 출력
		printf("+\n");
	if (a - b == c)						//사칙연산 a - b == c가 성립할 시, - 출력
		printf("-\n");
	if (a * b == c)						//사칙연산 a * b == c가 성립할 시, * 출력
		printf("*\n");
	if (a / b == c)						//사칙연산 a / b == c가 성립할 시, / 출력
		printf("/\n");
	if (!(a + b == c) && !(a - b == c) && !(a * b == c) && !(a / b == c))
		printf("Incorrect");			//사칙연산 관계가 성립하지 않을 시, Incorrect 출력

	return 0;					//프로그램 정상 종료
}