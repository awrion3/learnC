#pragma warning(disable:4996)	//scanf_s() 함수 사용 관련 컴파일 오류 해제
#include <stdio.h>				//표준입출력 관련 헤더 파일 포함

int main(void)					//프로그램 시작 지점 main() 함수
{
	int a, b, c;			//int형 변수 선언 
	char ch;				//char형 변수 선언 

	scanf("%d%d%d", &a, &b, &c);	//세 개의 값 입력 : scanf() 함수 및 정수형 서식 지정자 사용

	a = a / 100 % 10;				//값1의 백의 자리수 구하기 
	b = b / 100 % 10;				//값2의 백의 자리수 구하기 
	c = c / 100 % 10;				//값3의 백의 자리수 구하기 

	ch = a == b || a == c || b == c ? 'D' : 'S';	/* 셋 중 하나라도 참이면 참 성립
													-> 참일 시 ch = 'D', 거짓일 시 ch = 'S' */
	ch = a == b && a == c ? 'T' : ch;				//세 값이 모두 같은지 확인 -> 참일 시 ch = 'T'
	
	printf("%c", ch);			//세 정수의 백의 자리수 비교한 결과 출력

	return 0;					//프로그램 정상 종료
}