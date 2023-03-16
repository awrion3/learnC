#pragma warning(disable:4996)	//scanf_s() 함수 사용 관련 컴파일 오류 해제
#include <stdio.h>				//표준입출력 관련 헤더 파일 포함

int main(void)					//프로그램 시작 지점 main() 함수
{
	int a, H, D, O, n;			//int형 변수 선언

	scanf("%d", &a);			//값 입력 : scanf() 함수 및 정수형 서식 지정자 사용

	H = a / 100;				//값의 백의 자리수 구하기 
	D = a / 10 % 10;			//값의 십의 자리수 구하기 
	O = a % 10;					//값의 일의 자리수 구하기 

	n = H == D || H == O || D == O ? 2 : 1;		//참이면 2개 일치, 거짓이면 1개 일치
	n = H == D && H == O ? 3 : n;				//참이면 3개 일치, 거짓이면 n개 일치

	printf("%d", n);			//일치하는 자리수의 개수 출력

	return 0;					//프로그램 정상 종료
}