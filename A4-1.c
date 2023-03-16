#pragma warning(disable:4996)	//scanf_s() 함수 사용 관련 컴파일 오류 해제
#include <stdio.h>				//표준입출력 관련 헤더 파일 포함

int main(void)					//프로그램 시작 지점 main() 함수
{
	int x, n;					//int형 변수 선언 

	scanf("%d", &x);			//값 입력 : scanf() 함수 및 정수형 서식 지정자 사용

	n = !(x % 3) * 3 + !(x % 5) * 5;	/* 3의 배수일 시 n=3, 5의 배수일 시 n=5, 15의 배수일 시 n=8,
										   3과 5와 15의 배수가 아닐 시 n=0 */
	n += (n == 8) * 7;					//15의 배수일 시 n+7 하여 n=15

	n += (x % 3 && x % 5) * x;			//3과 5와 15의 배수가 아닐 시 n+x 하여 n=x

	printf("%d is a multiple of %d.", x, n);	//입력 값의 배수 확인 결과 출력

	return 0;					//프로그램 정상 종료
}