#pragma warning(disable:4996)	//scanf_s() 함수 사용 관련 컴파일 오류 해제
#include <stdio.h>				//표준입출력 관련 헤더 파일 포함

int main(void)					//프로그램 시작 지점 main() 함수
{
	int a, T, H, D, O, v;		//int형 변수 선언

	scanf("%d", &a);			//값 입력 : scanf() 함수 및 정수형 서식 지정자 사용

	T = a / 1000;				//입력한 값의 천의 자리수 T 구하기
	H = a / 100 % 10;			//입력한 값의 백의 자리수 H 구하기
	D = a / 10 % 10;			//입력한 값의 십의 자리수 D 구하기
	O = a % 10;					//입력한 값의 일의 자리수 O 구하기

	v = O * 1000 + D * 100 + H * 10 + T;	//입력한 a 값을 뒤집은 수 v 구하기

	a >= v ? printf("%d", a - v) : printf("%d", - (a - v));		/* 입력한 값 a와 뒤집은 수 v의 
																차 a - v의 절대값을 구하여 출력 */
	return 0;					//프로그램 정상 종료
}