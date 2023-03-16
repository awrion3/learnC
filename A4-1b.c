#pragma warning(disable:4996)	//scanf_s() 함수 사용 관련 컴파일 오류 해제
#include <stdio.h>				//표준입출력 관련 헤더 파일 포함

int main(void)					//프로그램 시작 지점 main() 함수
{
	int x;						//int형 변수 선언 
	int n = 0;					//int형 변수 선언 및 초기화

	scanf("%d", &x);			//값 입력 : scanf() 함수 및 정수형 서식 지정자 사용

	n = !(x % 3) ? 3 : n;			//3의 배수인지 확인 -> 참일 시 n=3

	n = !(x % 5) ? 5 : n;			//5의 배수인지 확인 -> 참일 시 n=5

	n = !(x % (3 * 5)) ? 15 : n;	//15의 배수인지 확인 -> 참일 시 n=15

	n = x % 3 && x % 5 ? x : n;		//3, 5, 15의 배수 모두 아닌지 확인 -> 참일 시 n=x

	printf("%d is a multiple of %d.", x, n);	//입력 값의 배수 확인 결과 출력

	return 0;					//프로그램 정상 종료
}