#pragma warning(disable:4996)	//scanf_s() 함수 사용 관련 컴파일 오류 해제
#include <stdio.h>				//표준입출력 관련 헤더 파일 포함

int main(void)					//프로그램 시작 지점 main() 함수
{
	int a, b, c;				//int형 변수 선언
	int m = 0;					//int형 변수 선언 및 초기화

	scanf("%d%d%d", &a, &b, &c);	//세 값 입력 : scanf() 함수 및 정수형 서식 지정자 사용

	m += (b > a && a > c) * a;		//b > a > c이면 중간값 m = a, 아니면 m = m
	m += (c > a && a > b) * a;		//c > a > b이면 중간값 m = a, 아니면 m = m

	m += (a > b && b > c) * b;		//a > b > c이면 중간값 m = b, 아니면 m = m
	m += (c > b && b > a) * b;		//c > b > a이면 중간값 m = b, 아니면 m = m
		
	m += (a > c && c > b) * c;		//a > c > b이면 중간값 m = c, 아니면 m = m
	m += (b > c && c > a) * c;		//b > c > a이면 중간값 m = c, 아니면 m = m

	printf("%d", m);			//입력한 세 값의 중간값 출력

	return 0;					//프로그램 정상 종료
}