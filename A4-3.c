#pragma warning(disable:4996)	//scanf_s() 함수 사용 관련 컴파일 오류 해제
#include <stdio.h>				//표준입출력 관련 헤더 파일 포함

int main(void)					//프로그램 시작 지점 main() 함수
{
	int a, b, c;				//int형 변수 선언 
	char ch;					//char형 변수 선언

	scanf("%d%d%d", &a, &b, &c);	//세 값 입력 : scanf() 함수 및 정수형 서식 지정자 사용

	a = a / 100 % 10;				//첫 번째 값의 백의 자리수 구하기
	b = b / 100 % 10;				//두 번째 값의 백의 자리수 구하기
	c = c / 100 % 10;				//세 번째 값의 백의 자리수 구하기

	ch = (a != b && a != c && b != c) * 'S';	//세 값 모두 다르면 ch = 'S', 아니면 ch = 0
	
	ch += (a == b && a == c) * 'T';				//세 값 모두 같으면 ch = 'T', 아니면 ch = ch

	ch += ((a == b || a == c || b == c) && ch != 'T') * 'D';	//세 값 중 둘이 같으면 ch = 'D', 아니면 ch = ch

	printf("%c", ch);			//세 값의 백의 자리수 비교 결과 출력

	return 0;					//프로그램 정상 종료
}