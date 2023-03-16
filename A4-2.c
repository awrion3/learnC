#pragma warning(disable:4996)	//scanf_s() 함수 사용 관련 컴파일 오류 해제
#include <stdio.h>				//표준입출력 관련 헤더 파일 포함

int main(void)					//프로그램 시작 지점 main() 함수
{
	int y;						//int형 변수 선언 
	char ch;					//char형 변수 선언

	scanf("%d", &y);			//값 입력 : scanf() 함수 및 정수형 서식 지정자 사용

	ch = !(y % 4) ? 'L' : 'C';		//4로 나누어떨어지는지 확인 -> 참일 시 윤년 L

	ch = !(y % 100) ? 'C' : ch ;	//100으로 나누어떨어지는지 확인 -> 참일 시 평년 C 

	ch = !(y % 400) ? 'L' : ch ;	//400으로 나누어떨어지는지 확인 -> 참일 시 윤년 L

	printf("%c", ch);			//윤년 평년 판단 결과 출력

	return 0;					//프로그램 정상 종료
}